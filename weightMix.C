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


void weightMix(){


  TH1::SetDefaultSumw2();

  int Npt = 9;

  // https://twiki.cern.ch/twiki/bin/viewauth/CMS/HiForestPA2013#Dijet_Cross_Sections_for_reweigh
  double pthatBins2011[] = {30,50,80,120,170,220,9999};
  double xs2011[] = {1.075E-02,1.025E-03,9.865E-05,1.129E-05,1.465E-06,2.837E-07};

  double *xs;
  double *pthats;
  int nev[20];
  int n[20];

  Npt = 6;
  xs = xs2011;
  pthats = pthatBins2011;

  for(int i = 0; i < Npt-1; ++i){
    xs[i] -= xs[i+1];
  }

  TChain* nt;
  TFile* outf;

  string ntwNames[] = {"ntw","ntjetw","nttrkw"};
  string ntevtNames[] = {"ntevt","ntjet","nttrk"};

  nt = new TChain("akPu3PFJetAnalyzer/t");
  // Order of files matters a lot!
  nt->AddFile("/Users/yetkinyilmaz/analysis/data/mc/pthat30/HiForest_103_1_1Kh.root");
  nt->AddFile("/Users/yetkinyilmaz/analysis/data/mc/pthat30/HiForest_104_1_HZZ.root");
  nt->AddFile("/Users/yetkinyilmaz/analysis/data/mc/pthat30/HiForest_105_1_UAy.root");
  nt->AddFile("/Users/yetkinyilmaz/analysis/data/mc/pthat30/HiForest_106_1_auT.root");
  nt->AddFile("/Users/yetkinyilmaz/analysis/data/mc/pthat30/HiForest_10_1_MBR.root");

  nt->AddFile("/Users/yetkinyilmaz/analysis/data/mc/pthat50/HiForest_100_1_SOu.root");
  nt->AddFile("/Users/yetkinyilmaz/analysis/data/mc/pthat50/HiForest_101_1_W2S.root");
  nt->AddFile("/Users/yetkinyilmaz/analysis/data/mc/pthat50/HiForest_102_1_thH.root");
  nt->AddFile("/Users/yetkinyilmaz/analysis/data/mc/pthat50/HiForest_104_1_vVK.root");
  nt->AddFile("/Users/yetkinyilmaz/analysis/data/mc/pthat50/HiForest_105_1_DZB.root");
  nt->AddFile("/Users/yetkinyilmaz/analysis/data/mc/pthat50/HiForest_10_1_S9B.root");

  nt->AddFile("/Users/yetkinyilmaz/analysis/data/mc/pthat80/hiForest_DijetpT370_Hydjet1p8_STARTHI53_LV1_v15_100_1_rEg.root");
  nt->AddFile("/Users/yetkinyilmaz/analysis/data/mc/pthat80/hiForest_DijetpT370_Hydjet1p8_STARTHI53_LV1_v15_101_1_WDk.root");
  nt->AddFile("/Users/yetkinyilmaz/analysis/data/mc/pthat80/hiForest_DijetpT370_Hydjet1p8_STARTHI53_LV1_v15_102_1_GIg.root");
  nt->AddFile("/Users/yetkinyilmaz/analysis/data/mc/pthat80/hiForest_DijetpT370_Hydjet1p8_STARTHI53_LV1_v15_103_1_ZXv.root");
  nt->AddFile("/Users/yetkinyilmaz/analysis/data/mc/pthat80/hiForest_DijetpT370_Hydjet1p8_STARTHI53_LV1_v15_104_1_0Jr.root");
  nt->AddFile("/Users/yetkinyilmaz/analysis/data/mc/pthat80/hiForest_DijetpT370_Hydjet1p8_STARTHI53_LV1_v15_10_1_bxy.root");

  nt->AddFile("/Users/yetkinyilmaz/analysis/data/mc/pthat120/hiForest_DijetpT370_Hydjet1p8_STARTHI53_LV1_v15_101_1_Jvo.root");
  nt->AddFile("/Users/yetkinyilmaz/analysis/data/mc/pthat120/hiForest_DijetpT370_Hydjet1p8_STARTHI53_LV1_v15_103_1_Jnf.root");
  nt->AddFile("/Users/yetkinyilmaz/analysis/data/mc/pthat120/hiForest_DijetpT370_Hydjet1p8_STARTHI53_LV1_v15_10_1_Ull.root");

  nt->AddFile("/Users/yetkinyilmaz/analysis/data/mc/pthat170/HiForest_211_1_tWC.root");
  nt->AddFile("/Users/yetkinyilmaz/analysis/data/mc/pthat170/HiForest_32_1_8L1.root");
  nt->AddFile("/Users/yetkinyilmaz/analysis/data/mc/pthat170/HiForest_331_1_EFf.root");
  nt->AddFile("/Users/yetkinyilmaz/analysis/data/mc/pthat170/HiForest_336_1_Los.root");
  nt->AddFile("/Users/yetkinyilmaz/analysis/data/mc/pthat170/HiForest_343_1_BfL.root");

  nt->AddFile("/Users/yetkinyilmaz/analysis/data/mc/pthat220/HiForest_100_1_R7V.root");
  nt->AddFile("/Users/yetkinyilmaz/analysis/data/mc/pthat220/HiForest_101_1_su9.root");
  nt->AddFile("/Users/yetkinyilmaz/analysis/data/mc/pthat220/HiForest_102_1_cMj.root");
  nt->AddFile("/Users/yetkinyilmaz/analysis/data/mc/pthat220/HiForest_10_1_JKD.root");


  outf = new TFile(Form("weights.root"),"recreate");
  TNtuple* ntw = new TNtuple("weights","","weight:ptweight:cweight:varpthat");
  float varpthat, varbin;

    
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


