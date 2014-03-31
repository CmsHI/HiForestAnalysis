#include "TCanvas.h"
#include "TH2F.h"
#include "TH1F.h"
#include "TH2D.h"
#include "TH3D.h"
#include "TH1D.h"
#include "TNtuple.h"
#include "TMath.h"
#include "TFile.h"

#include "TCut.h"
#include <string>

using namespace std;



TH1* plot(
	  const char* infile = "/mnt/hadoop/cms/store/user/velicanu/14Mar2014ReReco_forest_merged/0.root",
	  string var = "", TCut evtSel = "", TCut cut = ""
	  ){


   TFile * inf = new TFile(infile);
   
   TTree* t;
   int nbin = 100;
   double min = 0;
   double max = 200;

   if(var == "jtpt" || var == "rawpt" || var == "jteta"){
      t = (TTree*)inf->Get("akVs3PFJetAnalyzer/t");
      if(var == "jteta"){
	 min = -2.5;
	 max = 2.5;
      }
   }else{
      t = (TTree*)inf->Get("anaTrack/trackTree");
      if(var == "trkEta"){
         min = -2.5;
         max = 2.5;
      }
      if(var == "trkPt"){
	 max = 50;
      }
      if(var == "vz[1]"){
	 min = -30;
         max = 30;
      }
      if(var == "vx[1]"){
         min = 0.05;
         max = 0.15;
      }
      if(var == "vy[1]"){
         min = 0.02;
         max = 0.12;
      }

   }




   TTree* t1 = (TTree*)inf->Get("hltanalysis/HltTree");
   TTree* t2 = (TTree*)inf->Get("skimanalysis/HltTree");
   t->AddFriend(t1);
   t->AddFriend(t2);


   TH1D* h = new TH1D("h","",nbin,min,max);

   t->Draw(Form("%s>>h",var.data()),evtSel&&cut,"");

   h->Scale(1./t->GetEntries(evtSel));
   //   h->Scale(1./1000.);

   return h;

}



TH1D* validate(string var = "", TCut evtSel = "", TCut cut = ""){

   TH1::SetDefaultSumw2();

   //   const char* infile0 = "/mnt/hadoop/cms/store/user/velicanu/hiForest_Jet55or65_GR_R_53_LV6_25Mar2014_0200CET_Track8_Jet26/0.root";
   const char* infile0 = "/mnt/hadoop/cms/store/user/velicanu/hiForest_Jet80or95_GR_R_53_LV6_03Mar2014_1600CET_CMSSW_5_3_16_merged/0.root";
   const char* infile1 = "/mnt/hadoop/cms/store/user/velicanu/14Mar2014ReReco_forest_merged/0.root";

   TH1* h0 = plot(infile0,var,evtSel,cut);
   TH1* h1 = plot(infile1,var,evtSel,cut);

   h0->Draw("hist");
   h1->Draw("same");

   TH1D* hr = (TH1D*)h1->Clone("hr");
   hr->Divide(h0);

   return hr;
}



void quickValidate(){

   TCut cut("abs(jteta) < 2");
   TCut trigger("HLT_HIJet80_v1");
   TCut evtSel("pcollisionEventSelection");
   evtSel = evtSel && trigger;

   TH1D* hr = 0;
   TCanvas* c1 = new TCanvas("c1","",800,400);
   c1->Divide(2,1);

   string var = "";

   cut = "";

   var = "vz[1]";
   c1->cd(1)->SetLogy(0);
   hr = validate(var,evtSel,cut);
   c1->cd(2);
   hr->SetMaximum(3);
   hr->Draw();
   c1->Print(Form("figure_%s_%s.png","vtxZ",(const char*)trigger));


   var = "vx[1]";
   c1->cd(1)->SetLogy(0);
   hr = validate(var,evtSel,cut);
   c1->cd(2);
   hr->SetMaximum(2);
   hr->Draw();
   c1->Print(Form("figure_%s_%s.png","vtxX",(const char*)trigger));

   var = "vy[1]";
   c1->cd(1)->SetLogy(0);   
   hr = validate(var,evtSel,cut);
   c1->cd(2);
   hr->SetMaximum(2);
   hr->Draw();
   c1->Print(Form("figure_%s_%s.png","vtxY",(const char*)trigger));

   return;

 
   var = "jtpt";
   cut = "abs(jteta) < 2";

   c1->cd(1)->SetLogy();
   hr = validate(var,evtSel,cut);
   c1->cd(2);
   hr->Draw();
   c1->Print(Form("figure_%s_%s.png",var.data(),(const char*)trigger));

   var = "rawpt";
   c1->cd(1)->SetLogy();
   hr = validate(var,evtSel,cut);
   c1->cd(2);
   hr->SetMaximum(2.);
   hr->Draw();

   c1->Print(Form("figure_%s_%s.png",var.data(),(const char*)trigger));

   var = "jteta";
   cut = "jtpt > 30";
   c1->cd(1)->SetLogy(0);
   hr = validate(var,evtSel,cut);
   c1->cd(2);
   hr->SetMaximum(2.);
   hr->Draw();

   c1->Print(Form("figure_%s_%s.png",var.data(),(const char*)trigger));

   var = "trkPt";
   cut = "abs(trkEta < 5)";

   c1->cd(1)->SetLogy();
   hr = validate(var,evtSel,cut);
   c1->cd(2);
   hr->Draw();


   c1->Print(Form("figure_allTracks_%s_%s.png",var.data(),(const char*)trigger));

   var = "trkPt";
   cut = "abs(trkEta < 5) && highPurity";

   c1->cd(1)->SetLogy();
   hr = validate(var,evtSel,cut);
   c1->cd(2);
   hr->Draw();


   c1->Print(Form("figure_highPurity_%s_%s.png",var.data(),(const char*)trigger));

   var = "trkEta";
   cut = "abs(trkEta < 5)";

   c1->cd(1)->SetLogy(0);
   hr = validate(var,evtSel,cut);
   c1->cd(2);
   hr->Draw();


   c1->Print(Form("figure_allTracks_%s_%s.png",var.data(),(const char*)trigger));

   var = "trkEta";
   cut = "abs(trkEta < 5) && highPurity";
   c1->cd(1)->SetLogy(0);
   hr = validate(var,evtSel,cut);
   c1->cd(2);
   hr->Draw();

   c1->Print(Form("figure_highPurity_%s_%s.png",var.data(),(const char*)trigger));

}






