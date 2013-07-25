#include <iostream>
#include "TCanvas.h"
#include "TError.h"
#include "TPad.h"
#include "TString.h"
#include "TRandom.h"
#include "TH1F.h"
#include "TMath.h"
#include "TF1.h"

#include "TFile.h"
#include "TTree.h"
#include "TH1D.h"
#include "TH2D.h"
#include "TCanvas.h"
#include "TLegend.h"
#include "TLatex.h"
#include "TString.h"
#include "TChain.h"

#include "TCut.h"
#include "TNtuple.h"

#include "THStack.h"

using namespace std;

static bool subtract = 0;
static int QID = 3;

static TString weightString;

static bool normLead = 0;

static int mixColor = 2;
static int dataColor = 1;
static int ppColor = 4;

static int centralBin = 8;
static int leadCut = 120;
static int subleadCut = 30;

static double sideMin = 0.1;
static double sideMax = TMath::Pi()/3 + 0.1;

static double sideCorrect = 1;

static const char* LUM = "#int L dt=150";

static bool plotSubtraction = 0;

static bool reweightCentrality = 1;

static const double pi = TMath::Pi();


void weightSample(
		  bool mix = 1,
		  bool PbPb2011 = 0,
		  int entryType = 2
		  ){


  TH1::SetDefaultSumw2();
  bool validate = 1;
  //  validate = 0;

  int Npt = 9;

  double pthatBins2013[] = {15,30,50,80,120,170,220,280,370,9999};
  double xs2013[] = {5.335E-01,3.378E-02,3.778E-03,4.412E-04,6.147E-05,1.018E-05,2.477E-06,6.160E-07,1.088E-07};

  double pthatBins2011[] = {15,30,50,80,100,120,170,200,250,300,9999};
  double xs2011[] = {2.03E-01,1.079E-02,1.021E-03,9.913E-05,3.069E-05,1.128E-05,1.470E-06,5.310E-07,1.192E-07,3.176E-08};

  double *xs;
  double *pthats;
  int nev[20];
  int n[20];

  if(PbPb2011){
    Npt = 10;
    xs = xs2011;
    pthats = pthatBins2011;
  }else{
    xs = xs2013;
    pthats = pthatBins2013;
  }

  for(int i = 0; i < Npt-1; ++i){
    xs[i] -= xs[i+1];
  }

  TChain* nt;
  TFile* outf;

  string ntwNames[] = {"ntw","ntjetw","nttrkw"};
  string ntevtNames[] = {"ntevt","ntjet","nttrk"};

  if(mix){
    if(PbPb2011){
      outf = new TFile(Form("weights_hydjet_i%d.root",entryType),"recreate");
      nt = new TChain(ntevtNames[entryType].data());
    }else{
      outf = new TFile(Form("weights_hijing_i%d.root",entryType),"recreate");
      if(0){
	nt = new TChain("ak5PFJetAnalyzer/t");
      }else{
	nt = new TChain(ntevtNames[entryType].data());
      }
    }
  }else{
    outf = new TFile(Form("weights_signal_i%d.root",entryType),"recreate");
    nt = new TChain("ak5PFJetAnalyzer/t");
  }

  TNtuple* ntw = new TNtuple(Form("%s",ntwNames[entryType].data()),"","weight:ptweight:cweight:varpthat");

  float varpthat, varbin;
  //  TNtuple* nt = (TNtuple*)(new TFile("mix.root"))->Get("nt");


  if(PbPb2011){
    nt->AddFile("mix_hydjet.root");
  }else{

    if(0){
      for(int ip = 0; ip < 6; ++ip){
	int forestversion = 2;
	if(ip  >= 5) forestversion = 1;	
	if(mix){	  
	  nt->AddFile(Form("root://eoscms//eos/cms/store/caf/user/dgulhan/pPb/HP03/prod09/Hijing_Pythia_pt%d/HiForest_v55_v04_merged01/pt%d_HP03_prod09_merged_forest_0.root",(int)pthats[ip],(int)pthats[ip]));	  	  
	}else{      
	  forestversion =1;
	  nt->AddFile(Form("root://eoscms//eos/cms/store/caf/user/dgulhan/pPb_A03/Signal_Pythia%d/JEC_merged02/merged_forest_0.root",(int)pthats[ip]));      
	}	
      }
    }else{
      nt->AddFile("mix_hijing.root");
    }

  }
    
  nt->SetBranchAddress("pthat",&varpthat);
  if(0){
    nt->SetBranchAddress("bin",&varbin);
  }else{
    varbin = 0;
  }

  for(int i = 0; i < Npt; ++i){
    TCut pthatCut(Form("pthat >= %f && pthat < %f",pthats[i],pthats[i+1]));


    n[i] = nt->GetEntries(pthatCut);
  }

  for(int ie = 0; ie < nt->GetEntries(); ++ie){
    nt->GetEntry(ie);
    double pthatweight = 0;

    for(int i = 0; i < Npt; ++i){
      if(n[i] > 0 && varpthat >= pthats[i]) pthatweight = xs[i]/n[i]*10000;
    }

    double cweight = exp(-  pow(varbin+1.11957e+01,2)  /    pow(1.34120e+01,2) / 2);
    ntw->Fill(pthatweight*cweight,pthatweight,cweight,varpthat);
  }

  outf->cd();
  ntw->Write();
  outf->Write();

}

void weightMix(int isample = 0){

  weightSample(1,isample,2);
  weightSample(1,isample,1);
  weightSample(1,isample,0);

}

