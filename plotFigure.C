#if !defined(__CINT__) || defined(__MAKECINT__)

#include <iostream>
#include <string>
#include "TCanvas.h"
#include "TError.h"
#include "TPad.h"
#include "TString.h"
#include "TRandom.h"
#include "TH1F.h"

#include "TFile.h"
#include "TTree.h"
#include "TH1D.h"
#include "TH2D.h"
#include "TCanvas.h"
#include "TLegend.h"
#include "TLatex.h"
#include "TString.h"

using namespace std;

#endif

#include "weightMix.C"

static int iPlot = -99;

int centMode = 1;


//---------------------------------------------------------------------
void makeMultiPanelCanvas(TCanvas*& canv, const Int_t columns, 
			  const Int_t rows, const Float_t leftOffset=0.,
                          const Float_t bottomOffset=0., 
			  const Float_t leftMargin=0.2, 
			  const Float_t bottomMargin=0.2,
                          const Float_t edge=0.05);

void plotBalance(int cbin = 0,
		 TString infname = "file1.root",
		 TString refname = "file2.root",
		 TString mixname = "file3.root",
		 bool useWeight = true,
		 bool drawXLabel = false,
		 bool drawLeg = false);


void drawText(const char *text, float xp, float yp);

//--------------------------------------------------------------
// drawPatch() is a crazy way of removing 0 in the second and third 
// pad which is partially shown due to no margin between the pads
// if anybody has a better way of doing it let me know! - Andre
//--------------------------------------------------------------
void drawPatch(float x1, float y1, float x2, float y2); 
//---------------------------------------------------------------------

void plotFigure(int iplot = 8){
  TString infname = "/d101/yetkin/analysis/d0128/data_pPb.root";
  TString refname = "/d101/yetkin/analysis/d0128/data_PbPb.root";
  //  TString mixname = "/d101/yetkin/analysis/d0128/mix_hydjet.root";
  TString mixname = "/d101/yetkin/analysis/d0128/mix_hijing.root";

  string hfNames[] = {
    "30<E_{T}^{HF[#eta > 4]}<70",
    "20<E_{T}^{HF[#eta > 4]}<30",
    "15<E_{T}^{HF[#eta > 4]}<20",
    "10<E_{T}^{HF[#eta > 4]}<15",
    "5<E_{T}^{HF[#eta > 4]}<10",
    "0<E_{T}^{HF[#eta > 4]}<5"
  };


  string ntrkNames[] = {
    "180 #leq N_{trk}^{offline}",
    "150 #leq N_{trk}^{offline} < 180",
    "110 #leq N_{trk}^{offline} < 150",
    "90 #leq N_{trk}^{offline} < 110",
    "60 #leq N_{trk}^{offline} < 90",
    "N_{trk}^{offline} < 60"
  };

  string *binNames = hfNames;
  if(centMode == 0) binNames = ntrkNames;

  iPlot = iplot;

  TH1::SetDefaultSumw2();
	
   TCanvas *c1 = new TCanvas("c1","",1050,700);
   makeMultiPanelCanvas(c1,3,2,0.0,0.0,0.2,0.2,0.02);
   TLatex *jetf_PbPb;

   if(iPlot == 3 || iPlot == 8 || iPlot == 11 || iPlot == 12){
     for(int i = 0; i < 6; ++i){
       c1->cd(i+1)->SetLogy();
     }
   }


  c1->cd(1);

  jetf_PbPb = new TLatex(0.477,0.54,"Anti-k_{T} (PFlow), R=0.3");
  jetf_PbPb->SetTextFont(63);
  jetf_PbPb->SetTextSize(15);
  jetf_PbPb->Draw();

  for(int i = 0; i < 6; ++i){
    c1->cd(6-i);
    plotBalance(i,infname,refname,mixname,true,false,false);
    double y1 = 0.07;
    if(i < 3) y1 = 0.23;
    y1=  0.9;
    drawText(binNames[i].data(),0.3,y1);
    //  drawText("(d)",0.25,0.92);
  }

  c1->cd(2);

  TLatex tsel;
  tsel.SetNDC();
  tsel.SetTextFont(63);
  tsel.SetTextSize(15);
  tsel.DrawLatex(0.15,0.75,Form("p_{T,1} > %d GeV/c",leadCut));
  tsel.DrawLatex(0.15,0.65,Form("p_{T,2} > %d GeV/c",subleadCut));
  tsel.DrawLatex(0.15,0.55,"#Delta#phi_{12} > #frac{2}{3}#pi");

  c1->cd(1);
        
  TLatex *cms = new TLatex(0.03,0.28,"CMS Preliminary");
  if(iPlot == 3) cms = new TLatex(0.04,1.,"CMS Preliminary");
  cms->SetTextFont(63);
  cms->SetTextSize(17);
  cms->Draw();

  c1->cd(1);
  TLatex *lumi = new TLatex(0.1,0.26,"pPb L=10.6 nb^{-1}");
  if(iPlot == 3) lumi = new TLatex(0.1,0.46,"pPb L=10.6 nb^{-1}");

  lumi->SetTextFont(63);
  lumi->SetTextSize(15);
  lumi->Draw();

  lumi = new TLatex(0.1,0.24,"PbPb L=150 #mub^{-1}");
  if(iPlot == 3) lumi = new TLatex(0.1,0.14,"PbPb L=150 #mub^{-1}");

  lumi->SetTextFont(63);
  lumi->SetTextSize(15);
  lumi->Draw();



  c1->cd(2);
  TLatex *jetf_pp;

  jetf_pp = new TLatex(0.12,0.24,"anti-k_{T}, (R=0.3) PF jets PU");

  jetf_pp->SetTextFont(63);
  jetf_pp->SetTextSize(15);
  jetf_pp->Draw();

  const char* date = "20130127";

  string figures[] = {"","imbalance","etaDijet","",    "dphi",
		      "","",        "", "pudifference", "ntrk",
		      "","pu1","pu2","","",
                      "","","","","",
		      "","eta1","eta2"
  };

  string formats[] = {"gif","pdf","eps","C"};

  for(int it = 0; it < 4; ++it){
    c1->Print(Form("./fig/dijet_%s_lead%d_sub%d_all_cent_%s%s.%s",figures[iPlot].data(),leadCut,subleadCut,date,subtract?"_subt":"",formats[it].data()));
  }  

}

void plotBalance(int cbin,
		 TString infname,
		 TString pythia,
		 TString mix,
		 bool useWeight,
		 bool drawXLabel,
		 bool drawLeg)
{

  useWeight = 1;

  bool refOldNtuple = 0;
  TCut lead(Form("pt1>%d && abs(eta1) < 2",leadCut));
  TCut dijet(Form("pt1>%d && pt2>%d && abs(eta1) < 2 && abs(eta2) < 2",leadCut,subleadCut));

  TCut deltaPhi("abs(dphi)>2.0944");

  if(iPlot != 3) dijet = dijet&&deltaPhi;

  TCut side(Form("pt1>%d && pt2>%d && abs(dphi)>%f && abs(dphi)<%f && abs(eta1) < 2 && abs(eta2) < 2",leadCut,subleadCut, sideMin, sideMax));

  TCut jetID("trkMax1 > 4 || trkMax2 > 4");
  //  jetID = "trkMax1 > -99999";
  TCut noise("noise < 0");
  TCut weight("weight");


  double sideScale = sideCorrect*(3.1415926536-2.0944)/(sideMax-sideMin);

  TString cstring = "";

  TCut centHF("");
  TCut centNtrk("");

  if(centMode == 0){
    if(cbin==0) centHF = "bin>=20 && bin<26";
    if(cbin==1) centHF = "bin>=26 && bin<27";
    if(cbin==2) centHF = "bin>=27 && bin<28";
    if(cbin==3) centHF = "bin>=28 && bin<29";
    if(cbin==4) centHF = "bin>=29 && bin<31";
    if(cbin==5) centHF = "bin>=31";

    if(cbin==0) centNtrk = "ntrk >= 180";
    if(cbin==1) centNtrk = "150 <= ntrk && ntrk < 180";
    if(cbin==2) centNtrk = "110 <= ntrk && ntrk < 150";
    if(cbin==3) centNtrk = "90 <= ntrk && ntrk < 150";
    if(cbin==4) centNtrk = "60 <= ntrk && ntrk < 90";
    if(cbin==5) centNtrk = "ntrk < 60";
  }

  if(centMode == 1){
    if(cbin==0) centHF = "hf>=30 && hf<70";
    if(cbin==1) centHF = "hf>=20 && hf<30";
    if(cbin==2) centHF = "hf>=15 && hf<20";
    if(cbin==3) centHF = "hf>=10 && hf<15";
    if(cbin==4) centHF = "hf>=5 && hf<10";
    if(cbin==5) centHF = "hf<5";

    if(cbin==0) centHF = "cent>=30 && cent<70";
    if(cbin==1) centHF = "cent>=20 && cent<30";
    if(cbin==2) centHF = "cent>=15 && cent<20";
    if(cbin==3) centHF = "cent>=10 && cent<15";
    if(cbin==4) centHF = "cent>=5 && cent<10";
    if(cbin==5) centHF = "cent<5";

    centNtrk = centHF;
  }





  cout<<"plotting ntrk bin : "<<cbin<<endl;

  // open the data file
  string treeName = "ntdijet";
  if(iPlot >= 100){
    treeName = nttrk;
  }

  TFile *inf = new TFile(infname.Data());
  TTree *nt =(TTree*)inf->FindObjectAny(treeName.data());
  TTree *ntevt =(TTree*)inf->FindObjectAny("ntevt");
  if(iPlot < 100) nt->AddFriend(ntevt);

  // open the pythia (MC) file
  TFile *infPythia = new TFile(pythia.Data());
  TTree *ntPythia;
  TTree *ntevtPythia;
  if(!refOldNtuple){
    ntPythia = (TTree*) infPythia->FindObjectAny(treeName.data());
    ntevtPythia = (TTree*) infPythia->FindObjectAny("ntevt");
    if(iPlot < 100) ntPythia->AddFriend(ntevtPythia);
  }else{
    ntPythia = (TTree*) infPythia->FindObjectAny("nt");
  }

  // open the datamix file
  TFile *infMix = new TFile(mix.Data());
  TTree *ntMix =(TTree*)infMix->FindObjectAny("ntdijet");
  TTree *ntevtMix =(TTree*)infMix->FindObjectAny("ntevt");
  //  TFile *infW = new TFile("weights_hydjet.root");
  //  TTree *ntw =(TTree*)infW->FindObjectAny("ntw");

  TTree *ntw =(TTree*)infMix->FindObjectAny("ntw");
  ntMix->AddFriend(ntw);
  if(iPlot < 100) ntMix->AddFriend(ntevtMix);

  int Nbin = 10;
  double max = 1.;
  double min = 0;

  if(iPlot == 2 || iPlot == 21 || iPlot == 22){
    Nbin = 20;
    max = 2;
    min = -2;
  };

  if(iPlot == 3){
    Nbin = 30;
    max = pi;
  };

  if(iPlot == 8){
    Nbin = 50;
    max = 25;
    min = -25;
  };

  if(iPlot == 9){
    Nbin = 50;
    max = 250;
  };

  if(iPlot == 11 || iPlot == 12){
    Nbin = 50;
    max = 25;
  };


  // projection histogram
  TH1D *h = new TH1D(Form("h",cbin),"",Nbin,min,max);
  TH1D *hPythia = new TH1D(Form("hPythia",cbin),"",Nbin,min,max);
  TH1D *hDataMix = new TH1D(Form("hDataMix",cbin),"",Nbin,min,max);

  TH1D *hB = new TH1D(Form("hB",cbin),"",Nbin,min,max);
  TH1D *hPythiaB = new TH1D(Form("hPythiaB",cbin),"",Nbin,min,max);
  TH1D *hDataMixB = new TH1D(Form("hDataMixB",cbin),"",Nbin,min,max);

  TH1D *hFull = new TH1D("hFull","",Nbin,min,max);
  TH1D *hPythiaFull = new TH1D("hPythiaFull","",Nbin,min,max);
  TH1D *hDataMixFull = new TH1D("hDataMixFull","",Nbin,min,max);

  TH1D* hNorm = new TH1D("hNorm","",1000,0,1000);
  TH1D* hNormPythia = new TH1D("hNormPythia","",1000,0,1000);
  TH1D* hNormDataMix = new TH1D("hNormDataMix","",1000,0,1000);

  hB->SetLineStyle(2);
  hPythiaB->SetLineStyle(2);
  hDataMixB->SetLineStyle(2);

  //  ntPythia->SetAlias("pt1","et1");
  //  ntPythia->SetAlias("pt2","et2");

  nt->SetAlias("pt1","jtpt1");
  nt->SetAlias("pt2","jtpt2");
  nt->SetAlias("eta1","jteta1");
  nt->SetAlias("eta2","jteta2");
  nt->SetAlias("phi1","jtphi1");
  nt->SetAlias("phi2","jtphi2");

  ntMix->SetAlias("pt1","jtpt1");
  ntMix->SetAlias("pt2","jtpt2");
  ntMix->SetAlias("eta1","jteta1");
  ntMix->SetAlias("eta2","jteta2");
  ntMix->SetAlias("phi1","jtphi1");
  ntMix->SetAlias("phi2","jtphi2");


  if(!refOldNtuple){
    ntPythia->SetAlias("pt1","jtpt1");
    ntPythia->SetAlias("pt2","jtpt2");
    ntPythia->SetAlias("eta1","jteta1");
    ntPythia->SetAlias("eta2","jteta2");
    ntPythia->SetAlias("phi1","jtphi1");
    ntPythia->SetAlias("phi2","jtphi2");
  }

  nt->SetAlias("cent","hf");
  ntMix->SetAlias("cent","hf");
  ntPythia->SetAlias("cent","hf");

  nt->SetAlias("dphi","acos(cos(phi1-phi2))");
  ntMix->SetAlias("dphi","acos(cos(phi1-phi2))");
  ntPythia->SetAlias("dphi","acos(cos(phi1-phi2))");

  if(iPlot == 0){
    nt->SetAlias("var","pt2/pt1");
    ntPythia->SetAlias("var","pt2/pt1");
    ntMix->SetAlias("var","pt2/pt1");
  }

  if(iPlot == 2){
    nt->SetAlias("var","(eta1+eta2)/2");
    ntPythia->SetAlias("var","(eta1+eta2)/2");
    ntMix->SetAlias("var","(eta1+eta2)/2");
  }

  if(iPlot == 3){
    nt->SetAlias("var","acos(cos(phi1-phi2))");
    ntPythia->SetAlias("var","acos(cos(phi1-phi2))");
    ntMix->SetAlias("var","acos(cos(phi1-phi2))");
  }

  if(iPlot == 8){
    nt->SetAlias("var","pu1-pu2");
    ntPythia->SetAlias("var","pu1-pu2");
    ntMix->SetAlias("var","pu1-pu2");
  }

  if(iPlot == 11){
    nt->SetAlias("var","pu1");
    ntPythia->SetAlias("var","pu1");
    ntMix->SetAlias("var","pu1");
  }

  if(iPlot == 12){
    nt->SetAlias("var","pu2");
    ntPythia->SetAlias("var","pu2");
    ntMix->SetAlias("var","pu2");
  }

  if(iPlot == 9){
    nt->SetAlias("var","ntrk");
    ntPythia->SetAlias("var","ntrk");
    ntMix->SetAlias("var","ntrk");
  }

  if(iPlot == 21){
    nt->SetAlias("var","eta1");
    ntPythia->SetAlias("var","eta1");
    ntMix->SetAlias("var","eta1");
  }

  if(iPlot == 22){
    nt->SetAlias("var","eta2");
    ntPythia->SetAlias("var","eta2");
    ntMix->SetAlias("var","eta2");
  }

  nt->Draw("var>>hFull",dijet&&noise&&jetID&&centNtrk); 
  nt->Draw("var>>hB",side&&noise&&jetID&&centNtrk);
  nt->Draw("pt1>>hNorm",lead&&noise&&jetID&&centNtrk);
   
  ntMix->Draw("var>>hDataMixFull",weight*(dijet&&jetID&&centHF));
  ntMix->Draw("var>>hDataMixB",weight*(side&&jetID&&centHF));
  ntMix->Draw("pt1>>hNormDataMix",weight*(lead&&jetID&&centHF));
  
  ntPythia->Draw("var>>hPythiaFull",dijet&&noise&&jetID&&centHF);
  ntPythia->Draw("var>>hPythiaB",side&&noise&&jetID&&centHF);
  ntPythia->Draw("pt1>>hNormPythia",lead&&noise&&jetID&&centHF);

  hDataMixB->Scale(sideScale);
  hB->Scale(sideScale);
  hPythiaB->Scale(sideScale);

  hDataMix->Add(hDataMixFull);
  h->Add(hFull);
  hPythia->Add(hPythiaFull);

  if(subtract){
    hDataMix->Add(hDataMixB,-1);
    h->Add(hB,-1);
    hPythia->Add(hPythiaB,-1);
  }

  hB->SetFillStyle(3005);
  hB->SetFillColor(15);

  // calculate the statistical error and normalize
  h->SetLineColor(dataColor);
  h->SetMarkerColor(dataColor);
  h->Sumw2();
  if(normLead){
    h->Scale(1./hNorm->Integral());
    hB->Scale(1./hNorm->Integral());
  }else{
    hB->Scale(1./h->Integral());
    h->Scale(1./h->Integral());
  }
  h->SetMarkerStyle(20);

  if(hPythia->Integral() > 0){
    hPythia->Scale(1./hNormPythia->Integral());
  }

  hPythia->SetLineColor(kBlue);
  hPythia->SetFillColor(kAzure-8);
  hPythia->SetFillStyle(3005);

  if(normLead){
    hDataMixB->Scale(1./hNormDataMix->Integral());
    hDataMix->Scale(1./hNormDataMix->Integral());
  }else{
    hDataMixB->Scale(1./hDataMix->Integral());
    hDataMix->Scale(1./hDataMix->Integral());
  }
  hDataMix->SetLineColor(mixColor);
  hDataMix->SetFillColor(mixColor);
  hDataMix->SetFillStyle(3004);
  
  hDataMix->SetMarkerSize(0);
  hDataMix->SetStats(0);

  hDataMix->GetXaxis()->SetLabelSize(22);
  hDataMix->GetXaxis()->SetLabelFont(43);
  hDataMix->GetXaxis()->SetTitleSize(28);
  hDataMix->GetXaxis()->SetTitleFont(43);
  hDataMix->GetXaxis()->SetTitleOffset(2.2);
  hDataMix->GetXaxis()->CenterTitle();
  
  
  hDataMix->GetYaxis()->SetLabelSize(22);
  hDataMix->GetYaxis()->SetLabelFont(43);
  hDataMix->GetYaxis()->SetTitleSize(28);
  hDataMix->GetYaxis()->SetTitleFont(43);
  hDataMix->GetYaxis()->SetTitleOffset(2.2);
  hDataMix->GetYaxis()->CenterTitle();
  
  if(drawXLabel) hDataMix->SetXTitle("A_{J} = (p_{T,1}-p_{T,2})/(p_{T,1}+p_{T,2})");  
  hDataMix->SetYTitle("Event Fraction");

  if(iPlot==2) hDataMix->SetXTitle("#eta_{dijet} = (#eta_{1}+#eta_{2})/2");

  if(iPlot==8) hDataMix->SetXTitle("p_{T,1}^{background}-p_{T,2}^{background}");
  if(iPlot==9) hDataMix->SetXTitle("N_{trk}^{offline}");

  if(iPlot==11) hDataMix->SetXTitle("p_{T,1}^{background}");
  if(iPlot==12) hDataMix->SetXTitle("p_{T,2}^{background}");

  if(drawXLabel){
    if(iPlot==0) hDataMix->SetXTitle("p_{T,2}/p_{T,1}");
    if(iPlot==3) hDataMix->SetXTitle("#Delta #phi_{1,2}");
  }

  if(iPlot==0) hDataMix->SetMaximum(0.32);

  if(iPlot==21 || iPlot==22){
    hDataMix->SetMaximum(0.3);
    hDataMix->SetMinimum(0);
  }

  if(iPlot==21 || iPlot==22){
    hDataMix->SetMaximum(0.15);
    hDataMix->SetMinimum(0);
  }

  if(iPlot==3){
    hDataMix->SetMaximum(2.52);
    hDataMix->SetMinimum(0.00004);
  }

  if(iPlot==8){
    hDataMix->SetMaximum(10);
    hDataMix->SetMinimum(0.00004);
  }

  if(iPlot==9){
    hDataMix->SetMaximum(0.15);
    hDataMix->SetMinimum(0.);
  }

  if(iPlot==11 || iPlot == 12){
    hDataMix->SetMaximum(10);
    hDataMix->SetMinimum(0.00004);
  }



  //hDataMix->GetXaxis()->SetNdivisions(905,true);
  hDataMix->GetYaxis()->SetNdivisions(505,true);

  hPythia->SetMarkerColor(ppColor);
  hPythia->SetLineColor(ppColor);
  hPythia->SetMarkerStyle(25);

	hDataMix->Draw();//"hist");
	hDataMix->Draw("hist same");
	//	hPythia->Draw("same");

	cout<<"PbPb ENTRIES : "<<endl;
	cout<<hPythia->GetEntries()<<endl;

        cout<<"PbPb integral : "<<endl;
        cout<<hPythia->Integral()<<endl;

	cout<<"pPb integral : "<<endl;
        cout<<h->Integral()<<endl;

	cout<<"Mix integral : "<<endl;
        cout<<hDataMix->Integral()<<endl;

	h->SetLineWidth(1);
	h->Draw("same");
	h->SetLineWidth(2);
	h->Draw("same");

	//	hDataMixB->Draw("same hist");
	//        hB->Draw("same hist");

	 cout<<" mean value of data "<<h->GetMean()<<endl;

  if(drawLeg){
    TLegend *t3=new TLegend(0.06,0.6,0.53,0.95); 

    //   t3->AddEntry(h,Form("%s #mub^{-1}",LUM),"");
    t3->AddEntry(h,"pPb #sqrt{s}=5.02 TeV","p");
    t3->AddEntry(hPythia,"PbPb #sqrt{s}=2.76 TeV","p");
    t3->AddEntry(hDataMix,"PYTHIA+HYDJET 1.8","lf");

    t3->SetFillColor(0);
    t3->SetBorderSize(0);
    t3->SetFillStyle(0);
    t3->SetTextFont(63);
    t3->SetTextSize(15);
    t3->Draw();
  }

}

void drawPatch(float x1, float y1, float x2, float y2){
  TLegend *t1=new TLegend(x1,y1,x2,y2);
  t1->SetFillColor(kWhite);
  t1->SetBorderSize(0);
  t1->SetFillStyle(1001);
  t1->Draw("");
}

void drawText(const char *text, float xp, float yp){
  TLatex *tex = new TLatex(xp,yp,text);
  tex->SetTextFont(63);
  tex->SetTextSize(22);
  //tex->SetTextSize(0.05);
  tex->SetTextColor(kBlack);
  tex->SetLineWidth(1);
  tex->SetNDC();
  tex->Draw();
}


void makeMultiPanelCanvas(TCanvas*& canv,
                          const Int_t columns,
                          const Int_t rows,
                          const Float_t leftOffset,
                          const Float_t bottomOffset,
                          const Float_t leftMargin,
                          const Float_t bottomMargin,
                          const Float_t edge) {
   if (canv==0) {
      Error("makeMultiPanelCanvas","Got null canvas.");
      return;
   }
   canv->Clear();
   
   TPad* pad[columns][rows];

   Float_t Xlow[columns];
   Float_t Xup[columns];
   Float_t Ylow[rows];
   Float_t Yup[rows];
   Float_t PadWidth = 
   (1.0-leftOffset)/((1.0/(1.0-leftMargin)) +
   (1.0/(1.0-edge))+(Float_t)columns-2.0);
   Float_t PadHeight =
   (1.0-bottomOffset)/((1.0/(1.0-bottomMargin)) +
   (1.0/(1.0-edge))+(Float_t)rows-2.0);
   Xlow[0] = leftOffset;
   Xup[0] = leftOffset + PadWidth/(1.0-leftMargin);
   Xup[columns-1] = 1;
   Xlow[columns-1] = 1.0-PadWidth/(1.0-edge);

   Yup[0] = 1;
   Ylow[0] = 1.0-PadHeight/(1.0-edge);
   Ylow[rows-1] = bottomOffset;
   Yup[rows-1] = bottomOffset + PadHeight/(1.0-bottomMargin);

   for(Int_t i=1;i<columns-1;i++) {
      Xlow[i] = Xup[0] + (i-1)*PadWidth;
      Xup[i] = Xup[0] + (i)*PadWidth;
   }
   Int_t ct = 0;
   for(Int_t i=rows-2;i>0;i--) {
      Ylow[i] = Yup[rows-1] + ct*PadHeight;
      Yup[i] = Yup[rows-1] + (ct+1)*PadHeight;
      ct++;
   }

   TString padName;
   for(Int_t i=0;i<columns;i++) {
      for(Int_t j=0;j<rows;j++) {
         canv->cd();
         padName = Form("p_%d_%d",i,j);
         pad[i][j] = new TPad(padName.Data(),padName.Data(),
            Xlow[i],Ylow[j],Xup[i],Yup[j]);
         if(i==0) pad[i][j]->SetLeftMargin(leftMargin);
         else pad[i][j]->SetLeftMargin(0);

         if(i==(columns-1)) pad[i][j]->SetRightMargin(edge);
         else pad[i][j]->SetRightMargin(0);

         if(j==0) pad[i][j]->SetTopMargin(edge);
         else pad[i][j]->SetTopMargin(0);

         if(j==(rows-1)) pad[i][j]->SetBottomMargin(bottomMargin);
         else pad[i][j]->SetBottomMargin(0);

         pad[i][j]->Draw();
         pad[i][j]->cd();
         pad[i][j]->SetNumber(columns*j+i+1);
      }
   }
}


