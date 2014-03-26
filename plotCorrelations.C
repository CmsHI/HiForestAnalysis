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

   TH1* hr = (TH1*)h[0]->Clone("hResult");
   hr->Reset();

   for(int i = 0; i < hw->GetNbinsX(); ++i){
      hr->Add(h[i],hw->GetBinContent(i+1));
   }

   return hr;
}



void plotCorrelations(){

   int Nbins = NvtxBins*NcBins*NpsiBins;

   TFile* sigfile = new TFile("./signal_0.root");
   TFile* mixfile = new TFile("./mixed_0.root");
   TFile* outf = new TFile("results.root","recreate");

   TH3D *hAxis[1000],
      *hCorr[1000],
      *hGenParticle[1000];
   TH1D *hPt[1000], *hPtInclusive[1000], *hAnalysisBin;

   TH3D *hAxisBkg[1000],
      *hCorrBkg[1000],
      *hGenParticleBkg[1000];
   TH1D *hPtBkg[1000], *hPtInclusiveBkg[1000], *hAnalysisBinBkg;
   TH1D *hPtWeight[1000], *hAnalysisW;

   TH1 *hSig[1000], *hBkg[1000], *hSub[1000];

   for(int i = 0; i < Nbins; ++i){
      hCorr[i] = (TH3D*)sigfile->Get(Form("hCorrLead_%d",i));
      hPt[i] = (TH1D*)sigfile->Get(Form("hPtLead_%d",i));

      hCorrBkg[i] = (TH3D*)mixfile->Get(Form("hCorrLead_%d",i));
      hPtBkg[i] = (TH1D*)mixfile->Get(Form("hPtLead_%d",i));

      hPtWeight[i] = (TH1D*)hPt[i]->Clone(Form("hPtWeight_%d",i));
      hPtWeight[i]->Divide(hPtBkg[i]);

      reweight(hCorrBkg[i],hPtWeight[i]);

      hSig[i] = project(hCorr[i]);
      hSig[i]->SetName(Form("hSig_%d",i));
      hBkg[i] = project(hCorrBkg[i]);
      hBkg[i]->SetName(Form("hBkg_%d",i));

      hSig[i]->Scale(hPt[i]->Integral());
      hBkg[i]->Scale(hPt[i]->Integral());

      hSub[i] = (TH1*)hSig[i]->Clone(Form("hSub_%d",i));

      hSub[i]->Add(hBkg[i],-1);
      hSub[i]->Divide(hBkg[i]);
   }


   hAnalysisBin = (TH1D*)sigfile->Get(Form("hAnalysisBin"));
   hAnalysisBinBkg = (TH1D*)mixfile->Get(Form("hAnalysisBin"));

   hAnalysisW = (TH1D*)hAnalysisBin->Clone("hAnalysisW");

   TH1* h = combine(hSub,hAnalysisW);

   h->Draw("surf2");

}
