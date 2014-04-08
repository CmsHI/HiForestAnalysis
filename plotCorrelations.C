#include "correlate.C"


TH1* project(TH3* h, double xmin = -1, double xmax = -1, string proj = "yz"){

   TH1* hp = (TH1*)h->Project3D(proj.data());

   return hp;
}


void reweight(TH3* h, TH1* hw){

   int n = (h->GetNbinsX()+2)*(h->GetNbinsY()+2)*(h->GetNbinsZ()+2);
   int x,y,z;
   for(int i = 0; i < n; ++i){
      h->GetBinXYZ(i,x,y,z);

      double val = h->GetBinContent(i);
      double e = h->GetBinError(i);
      int binx = hw->FindBin(h->GetXaxis()->GetBinCenter(x));
      double w = hw->GetBinContent(binx);
      double we = hw->GetBinError(binx);

      double nval = val*w;
      double ne = e*w + we*val;

      h->SetBinContent(i,nval); 
      h->SetBinError(i,ne);

   }

}

TH1* combine(TH1** h, TH1* hw){

  TH1* hr = 0;
  int ii = 0;
  while(hr == 0){
    if(h[ii] != 0) hr = (TH1*)h[ii]->Clone("hResult");
    ii++;
  }

   hr->Reset();

   int vb, cb, pb, et;

   for(int i = 0; i < hw->GetNbinsX(); ++i){
     findBinXYZ(i, vb, cb, pb, et);

     if(_cBin >=0 && cb != _cBin) continue;
     if(_vtxBin >= 0 && vb != _vtxBin) continue;
     if(_psiBin >= 0 && pb != _psiBin) continue;
     if(_etaBin >= 0 && et != _etaBin) continue;

     double w = hw->GetBinContent(i+1);
     cout<<"weight : "<<w<<endl;
     hr->Add(h[i],w);

   }

   return hr;
}


void reflect(TH1* h){

  TH1* h1 = (TH1*)h->Clone(Form("%s_ref1",h->GetName()));
  TH1* h2 = (TH1*)h->Clone(Form("%s_ref2",h->GetName()));
  TH1* h3 = (TH1*)h->Clone(Form("%s_ref3",h->GetName()));
  h1->Reset();
  h2->Reset();
  h3->Reset();

  int nbins = (h->GetNbinsX()+2)*(h->GetNbinsY()+2);

  for(int i = 0; i < nbins; ++i){
    int x,y,z;

    h->GetBinXYZ(i,x,y,z);

    double val = h->GetBinContent(i);
    double e = h->GetBinError(i)*2.; // sqrt(4) applied to fix quad counting
    
    double eta = h->GetYaxis()->GetBinCenter(y);
    double phi = h->GetXaxis()->GetBinCenter(x);

    if(phi > h->GetXaxis()->GetXmax()) continue;
    if(phi < h->GetXaxis()->GetXmin()) continue;

    if(eta > h->GetYaxis()->GetXmax()) continue;
    if(eta < h->GetYaxis()->GetXmin()) continue;

    int x1 = h->GetXaxis()->FindBin(phi);
    int y1 = h->GetYaxis()->FindBin(-eta);
    int bin1 = h->GetBin(x1,y1);
    h1->SetBinContent(bin1,val);
    h1->SetBinError(bin1,e);

    phi = -phi;
    
    if(phi >= 3.*pi/2.) phi -= 2.*pi;
    if(phi < -pi/2.) phi += 2.*pi;
    
    int x2 = h->GetXaxis()->FindBin(phi);
    int y2 = h->GetYaxis()->FindBin(-eta);
    int bin2 = h->GetBin(x2,y2);
    h2->SetBinContent(bin2,val);
    h2->SetBinError(bin2,e);

    int x3 = h->GetXaxis()->FindBin(phi);
    int y3 = h->GetYaxis()->FindBin(eta);
    int bin3 = h->GetBin(x3,y3);
    h3->SetBinContent(bin3,val);
    h3->SetBinError(bin3,e);

  }

  h->Add(h1);
  h->Add(h2);
  h->Add(h3);

  h->Scale(0.25);
}



void plotCorrelations(int ajBin = 0, int cBin = 0, int vtxBin = -1, int psiBin = -1, int etaBin = -1){

  _cBin = cBin;
  _vtxBin = vtxBin;
  _psiBin = psiBin;
  _etaBin = etaBin;

  int Nbins = NvtxBins*NcBins*NpsiBins*NdijetEtaBins;

  TFile* sigfile[10][10][10], * mixfile[10][10][10];

  for(int i = 0; i < NvtxBins; ++i){
    for(int j = 0; j < NcBins; ++j){
      for(int k = 0; k < NpsiBins; ++k){
	if(_cBin >=0 && j != _cBin) continue;
	if(_vtxBin >= 0 && i != _vtxBin) continue;
	if(_psiBin >= 0 && k != _psiBin) continue;

	sigfile[i][j][k] = new TFile(Form("./signal_vtx%d_cent%d_psi%d.root",i,j,k));
	mixfile[i][j][k] = new TFile(Form("./mixed_vtx%d_cent%d_psi%d.root",i,j,k));
      }
    }
  }


   TFile* outf = new TFile("results.root","recreate");

   TH3D *hAxis[1000],
     *hCorr[1000];

   TH1D *hPt[1000], *hAnalysisBin = 0;

   TH3D *hAxisBkg[1000],
     *hCorrBkg[1000];

   TH1D *hPtBkg[1000], *hPtInclusiveBkg[1000], *hAnalysisBinBkg = 0;
   TH1D *hPtWeight[1000], *hAnalysisW;

   TH1 *hSig[1000], *hBkg[1000], *hSub[1000];

   double xx[1000];

   for(int i = 0; i < Nbins; ++i){

     hSig[i] = 0;
     hBkg[i] = 0;
     hSub[i] = 0;

     int vb, cb, pb, et;
     findBinXYZ(i, vb, cb, pb, et);

     if(_cBin >=0 && cb != _cBin) continue;
     if(_vtxBin >= 0 && vb != _vtxBin) continue;
     if(_psiBin >= 0 && pb != _psiBin) continue;
     if(_etaBin >= 0 && et != _etaBin) continue;

     hCorr[i] = (TH3D*)sigfile[vb][cb][pb]->Get(Form("hCorrLead_%d_%d",i,ajBin));
     hPt[i] = (TH1D*)sigfile[vb][cb][pb]->Get(Form("hPtLead_%d_%d",i,ajBin));
     
     hCorrBkg[i] = (TH3D*)mixfile[vb][cb][pb]->Get(Form("hCorrLead_%d_%d",i,0));
     hPtBkg[i] = (TH1D*)mixfile[vb][cb][pb]->Get(Form("hPtLead_%d_%d",i,0));
     xx[i] = hPtBkg[i]->Integral();
     cout<<" bin "<<i<<"  hPt integral "<<xx[i]<<endl;
     new TCanvas();
     hPtBkg[i]->Draw();
     new TCanvas();
     
     hCorr[i]->Rebin3D(100,1,1);
     hCorrBkg[i]->Rebin3D(100,1,1);
     hPt[i]->RebinX(100);
     hPtBkg[i]->RebinX(100);

     hPtWeight[i] = (TH1D*)hPt[i]->Clone(Form("hPtWeight_%d_%d",i,ajBin));
     hPtWeight[i]->Divide(hPtBkg[i]);
     
      reweight(hCorrBkg[i],hPtWeight[i]);

      hSig[i] = project(hCorr[i]);
      hSig[i]->SetName(Form("hSig_%d",i));
      hBkg[i] = project(hCorrBkg[i]);
      hBkg[i]->SetName(Form("hBkg_%d",i));

      hSig[i]->Scale(1./hPt[i]->Integral());
      hBkg[i]->Scale(1./hPt[i]->Integral());

      hSub[i] = (TH1*)hSig[i]->Clone(Form("hSub_%d",i));

      hSub[i]->Add(hBkg[i],-1);
      //      hSub[i]->Divide(hBkg[i]);
   
   }

   for(int i = 0; i < NvtxBins; ++i){
     for(int j = 0; j < NcBins; ++j){
       for(int k = 0; k < NpsiBins; ++k){
	 if(_cBin >=0 && j != _cBin) continue;
	 if(_vtxBin >= 0 && i != _vtxBin) continue;
	 if(_psiBin >= 0 && k != _psiBin) continue;
	 if(hAnalysisBin == 0){
	   hAnalysisBin = (TH1D*)sigfile[i][j][k]->Get(Form("hAnalysisBinLead_%d",ajBin));
	   hAnalysisBinBkg = (TH1D*)mixfile[i][j][k]->Get(Form("hAnalysisBinLead_%d",0));
	 }else{
	   hAnalysisBin->Add((TH1D*)sigfile[i][j][k]->Get(Form("hAnalysisBinLead_%d",ajBin)));
           hAnalysisBinBkg->Add((TH1D*)mixfile[i][j][k]->Get(Form("hAnalysisBinLead_%d",0)));
	 } 
       }
     }
   }

   cout<<"hAnalysisBin"<<hAnalysisBin->Integral()<<endl;
   cout<<"hAnalysisBinBkg"<<hAnalysisBinBkg->Integral()<<endl;

   hAnalysisBin->Scale(hAnalysisBin->Integral());
   hAnalysisBinBkg->Scale(hAnalysisBinBkg->Integral());

   hAnalysisW = (TH1D*)hAnalysisBin->Clone("hAnalysisW");
   hAnalysisW->Divide(hAnalysisBinBkg);

   TH1* h, *h1, *h2;

   h = combine(hSub,hAnalysisW);
   h1 = combine(hSig,hAnalysisW);
   h2 = combine(hBkg,hAnalysisW);

   if(1){   
   reflect(h);
   reflect(h1);
   reflect(h2);
   }

   TCanvas* c1 = new TCanvas("c1","",600,600);
   h->Draw("surf1");

   TCanvas* c2 = new TCanvas("c2","",600,600);
   h1->Draw("surf1");

   TCanvas* c3 = new TCanvas("c3","",600,600);
   h2->Draw("surf1");




}
