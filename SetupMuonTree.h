//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Jan 23 16:17:05 2013 by ROOT version 5.32/00
// from TTree HLTMuTree/HLTMuTree
// found on file: root://eoscms//eos/cms/store/caf/user/velicanu/PA2013_merged/pPb_hiForest2_monster_logerrevent_HI2013_express_v1_210634_210635_v14.root
//////////////////////////////////////////////////////////
#include "commonSetup.h"
#include <iostream>
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TTree.h>
#include <TBranch.h>

class Muons {
public :
   Muons(){};
   ~Muons(){};

   // Declaration of leaf types
   Int_t           Run;
   Int_t           Event;
   Int_t           Lumi;
   Int_t           CentBin;
   Float_t         vx;
   Float_t         vy;
   Float_t         vz;
   Int_t           Gen_nptl;
   Int_t           Gen_pid[2];   //[Gen_nptl]
   Int_t           Gen_mom[2];   //[Gen_nptl]
   Int_t           Gen_status[2];   //[Gen_nptl]
   Float_t         Gen_p[2];   //[Gen_nptl]
   Float_t         Gen_pt[2];   //[Gen_nptl]
   Float_t         Gen_eta[2];   //[Gen_nptl]
   Float_t         Gen_phi[2];   //[Gen_nptl]
   Int_t           Glb_nptl;
   Int_t           Glb_charge[2];   //[Glb_nptl]
   Float_t         Glb_p[2];   //[Glb_nptl]
   Float_t         Glb_pt[2];   //[Glb_nptl]
   Float_t         Glb_eta[2];   //[Glb_nptl]
   Float_t         Glb_phi[2];   //[Glb_nptl]
   Float_t         Glb_dxy[2];   //[Glb_nptl]
   Float_t         Glb_dz[2];   //[Glb_nptl]
   Int_t           Glb_nValMuHits[2];   //[Glb_nptl]
   Int_t           Glb_nValTrkHits[2];   //[Glb_nptl]
   Int_t           Glb_nValPixHits[2];   //[Glb_nptl]
   Int_t           Glb_trkLayerWMeas[2];   //[Glb_nptl]
   Int_t           Glb_nMatchedStations[2];   //[Glb_nptl]
   Int_t           Glb_nTrkFound[2];   //[Glb_nptl]
   Float_t         Glb_glbChi2_ndof[2];   //[Glb_nptl]
   Float_t         Glb_trkChi2_ndof[2];   //[Glb_nptl]
   Int_t           Glb_pixLayerWMeas[2];   //[Glb_nptl]
   Float_t         Glb_trkDxy[2];   //[Glb_nptl]
   Float_t         Glb_trkDz[2];   //[Glb_nptl]
   Int_t           Sta_nptl;
   Int_t           Sta_charge[2];   //[Sta_nptl]
   Float_t         Sta_p[2];   //[Sta_nptl]
   Float_t         Sta_pt[2];   //[Sta_nptl]
   Float_t         Sta_eta[2];   //[Sta_nptl]
   Float_t         Sta_phi[2];   //[Sta_nptl]
   Float_t         Sta_dxy[2];   //[Sta_nptl]
   Float_t         Sta_dz[2];   //[Sta_nptl]
   Int_t           Glb_isArbitrated[2];   //[Glb_nptl]
   Int_t           Di_npair;
   Float_t         Di_vProb[2];   //[Di_npair]
   Float_t         Di_mass[2];   //[Di_npair]
   Float_t         Di_e[2];   //[Di_npair]
   Float_t         Di_pt[2];   //[Di_npair]
   Float_t         Di_pt1[2];   //[Di_npair]
   Float_t         Di_pt2[2];   //[Di_npair]
   Float_t         Di_eta[2];   //[Di_npair]
   Float_t         Di_eta1[2];   //[Di_npair]
   Float_t         Di_eta2[2];   //[Di_npair]
   Float_t         Di_phi[2];   //[Di_npair]
   Float_t         Di_phi1[2];   //[Di_npair]
   Float_t         Di_phi2[2];   //[Di_npair]
   Int_t           Di_charge1[2];   //[Di_npair]
   Int_t           Di_charge2[2];   //[Di_npair]
   Int_t           Di_isArb1[2];   //[Di_npair]
   Int_t           Di_isArb2[2];   //[Di_npair]
   Float_t         Di_nTrkHit1[2];   //[Di_npair]
   Float_t         Di_nTrkHit2[2];   //[Di_npair]
   Float_t         Di_trkChi2_1[2];   //[Di_npair]
   Float_t         Di_trkChi2_2[2];   //[Di_npair]
   Float_t         Di_glbChi2_1[2];   //[Di_npair]
   Float_t         Di_glbChi2_2[2];   //[Di_npair]
   Float_t         Di_dxy1[2];   //[Di_npair]
   Float_t         Di_dxy2[2];   //[Di_npair]
   Float_t         Di_dz1[2];   //[Di_npair]
   Float_t         Di_dz2[2];   //[Di_npair]

   // List of branches
   TBranch        *b_run;   //!
   TBranch        *b_event;   //!
   TBranch        *b_lumi;   //!
   TBranch        *b_cbin;   //!
   TBranch        *b_vx;   //!
   TBranch        *b_vy;   //!
   TBranch        *b_vz;   //!
   TBranch        *b_Gen_nptl;   //!
   TBranch        *b_Gen_pid;   //!
   TBranch        *b_Gen_mom;   //!
   TBranch        *b_Gen_status;   //!
   TBranch        *b_Gen_p;   //!
   TBranch        *b_Gen_pt;   //!
   TBranch        *b_Gen_eta;   //!
   TBranch        *b_Gen_phi;   //!
   TBranch        *b_Glb_nptl;   //!
   TBranch        *b_Glb_charge;   //!
   TBranch        *b_Glb_p;   //!
   TBranch        *b_Glb_pt;   //!
   TBranch        *b_Glb_eta;   //!
   TBranch        *b_Glb_phi;   //!
   TBranch        *b_Glb_dxy;   //!
   TBranch        *b_Glb_dz;   //!
   TBranch        *b_Glb_nValMuHits;   //!
   TBranch        *b_Glb_nValTrkHits;   //!
   TBranch        *b_Glb_nValPixHits;   //!
   TBranch        *b_Glb_trkLayerWMeas;   //!
   TBranch        *b_Glb_nMatchedStations;   //!
   TBranch        *b_Glb_nTrkFound;   //!
   TBranch        *b_Glb_glbChi2_ndof;   //!
   TBranch        *b_Glb_trkChi2_ndof;   //!
   TBranch        *b_Glb_pixLayerWMeas;   //!
   TBranch        *b_Glb_trkDxy;   //!
   TBranch        *b_Glb_trkDz;   //!
   TBranch        *b_Sta_nptl;   //!
   TBranch        *b_Sta_charge;   //!
   TBranch        *b_Sta_p;   //!
   TBranch        *b_Sta_pt;   //!
   TBranch        *b_Sta_eta;   //!
   TBranch        *b_Sta_phi;   //!
   TBranch        *b_Sta_dxy;   //!
   TBranch        *b_Sta_dz;   //!
   TBranch        *b_Glb_isArbitrated;   //!
   TBranch        *b_Di_npair;   //!
   TBranch        *b_Di_vProb;   //!
   TBranch        *b_Di_mass;   //!
   TBranch        *b_Di_e;   //!
   TBranch        *b_Di_pt;   //!
   TBranch        *b_Di_pt1;   //!
   TBranch        *b_Di_pt2;   //!
   TBranch        *b_Di_eta;   //!
   TBranch        *b_Di_eta1;   //!
   TBranch        *b_Di_eta2;   //!
   TBranch        *b_Di_phi;   //!
   TBranch        *b_Di_phi1;   //!
   TBranch        *b_Di_phi2;   //!
   TBranch        *b_Di_charge1;   //!
   TBranch        *b_Di_charge2;   //!
   TBranch        *b_Di_isArb1;   //!
   TBranch        *b_Di_isArb2;   //!
   TBranch        *b_Di_nTrkHit1;   //!
   TBranch        *b_Di_nTrkHit2;   //!
   TBranch        *b_Di_trkChi2_1;   //!
   TBranch        *b_Di_trkChi2_2;   //!
   TBranch        *b_Di_glbChi2_1;   //!
   TBranch        *b_Di_glbChi2_2;   //!
   TBranch        *b_Di_dxy1;   //!
   TBranch        *b_Di_dxy2;   //!
   TBranch        *b_Di_dz1;   //!
   TBranch        *b_Di_dz2;   //!

};


void setupMuonTree(TTree *t,Muons &tMuons,bool doCheck = 1)
{
   // Set branch addresses and branch pointers
   t->SetBranchAddress("Run", &tMuons.Run, &tMuons.b_run);
   t->SetBranchAddress("Event", &tMuons.Event, &tMuons.b_event);
   t->SetBranchAddress("Lumi", &tMuons.Lumi, &tMuons.b_lumi);
   t->SetBranchAddress("CentBin", &tMuons.CentBin, &tMuons.b_cbin);
   t->SetBranchAddress("vx", &tMuons.vx, &tMuons.b_vx);
   t->SetBranchAddress("vy", &tMuons.vy, &tMuons.b_vy);
   t->SetBranchAddress("vz", &tMuons.vz, &tMuons.b_vz);
   t->SetBranchAddress("Gen_nptl", &tMuons.Gen_nptl, &tMuons.b_Gen_nptl);
   t->SetBranchAddress("Gen_pid", &tMuons.Gen_pid, &tMuons.b_Gen_pid);
   t->SetBranchAddress("Gen_mom", &tMuons.Gen_mom, &tMuons.b_Gen_mom);
   t->SetBranchAddress("Gen_status", &tMuons.Gen_status, &tMuons.b_Gen_status);
   t->SetBranchAddress("Gen_p", &tMuons.Gen_p, &tMuons.b_Gen_p);
   t->SetBranchAddress("Gen_pt", &tMuons.Gen_pt, &tMuons.b_Gen_pt);
   t->SetBranchAddress("Gen_eta", &tMuons.Gen_eta, &tMuons.b_Gen_eta);
   t->SetBranchAddress("Gen_phi", &tMuons.Gen_phi, &tMuons.b_Gen_phi);
   t->SetBranchAddress("Glb_nptl", &tMuons.Glb_nptl, &tMuons.b_Glb_nptl);
   t->SetBranchAddress("Glb_charge", &tMuons.Glb_charge, &tMuons.b_Glb_charge);
   t->SetBranchAddress("Glb_p", &tMuons.Glb_p, &tMuons.b_Glb_p);
   t->SetBranchAddress("Glb_pt", &tMuons.Glb_pt, &tMuons.b_Glb_pt);
   t->SetBranchAddress("Glb_eta", &tMuons.Glb_eta, &tMuons.b_Glb_eta);
   t->SetBranchAddress("Glb_phi", &tMuons.Glb_phi, &tMuons.b_Glb_phi);
   t->SetBranchAddress("Glb_dxy", &tMuons.Glb_dxy, &tMuons.b_Glb_dxy);
   t->SetBranchAddress("Glb_dz", &tMuons.Glb_dz, &tMuons.b_Glb_dz);
   t->SetBranchAddress("Glb_nValMuHits", &tMuons.Glb_nValMuHits, &tMuons.b_Glb_nValMuHits);
   t->SetBranchAddress("Glb_nValTrkHits", &tMuons.Glb_nValTrkHits, &tMuons.b_Glb_nValTrkHits);
   t->SetBranchAddress("Glb_nValPixHits", &tMuons.Glb_nValPixHits, &tMuons.b_Glb_nValPixHits);
   t->SetBranchAddress("Glb_trkLayerWMeas", &tMuons.Glb_trkLayerWMeas, &tMuons.b_Glb_trkLayerWMeas);
   t->SetBranchAddress("Glb_nMatchedStations", &tMuons.Glb_nMatchedStations, &tMuons.b_Glb_nMatchedStations);
   t->SetBranchAddress("Glb_nTrkFound", &tMuons.Glb_nTrkFound, &tMuons.b_Glb_nTrkFound);
   t->SetBranchAddress("Glb_glbChi2_ndof", &tMuons.Glb_glbChi2_ndof, &tMuons.b_Glb_glbChi2_ndof);
   t->SetBranchAddress("Glb_trkChi2_ndof", &tMuons.Glb_trkChi2_ndof, &tMuons.b_Glb_trkChi2_ndof);
   t->SetBranchAddress("Glb_pixLayerWMeas", &tMuons.Glb_pixLayerWMeas, &tMuons.b_Glb_pixLayerWMeas);
   t->SetBranchAddress("Glb_trkDxy", &tMuons.Glb_trkDxy, &tMuons.b_Glb_trkDxy);
   t->SetBranchAddress("Glb_trkDz", &tMuons.Glb_trkDz, &tMuons.b_Glb_trkDz);
   t->SetBranchAddress("Sta_nptl", &tMuons.Sta_nptl, &tMuons.b_Sta_nptl);
   t->SetBranchAddress("Sta_charge", tMuons.Sta_charge, &tMuons.b_Sta_charge);
   t->SetBranchAddress("Sta_p", tMuons.Sta_p, &tMuons.b_Sta_p);
   t->SetBranchAddress("Sta_pt", tMuons.Sta_pt, &tMuons.b_Sta_pt);
   t->SetBranchAddress("Sta_eta", tMuons.Sta_eta, &tMuons.b_Sta_eta);
   t->SetBranchAddress("Sta_phi", tMuons.Sta_phi, &tMuons.b_Sta_phi);
   t->SetBranchAddress("Sta_dxy", tMuons.Sta_dxy, &tMuons.b_Sta_dxy);
   t->SetBranchAddress("Sta_dz", tMuons.Sta_dz, &tMuons.b_Sta_dz);
   t->SetBranchAddress("Glb_isArbitrated", &tMuons.Glb_isArbitrated, &tMuons.b_Glb_isArbitrated);
   t->SetBranchAddress("Di_npair", &tMuons.Di_npair, &tMuons.b_Di_npair);
   t->SetBranchAddress("Di_vProb", &tMuons.Di_vProb, &tMuons.b_Di_vProb);
   t->SetBranchAddress("Di_mass", &tMuons.Di_mass, &tMuons.b_Di_mass);
   t->SetBranchAddress("Di_e", &tMuons.Di_e, &tMuons.b_Di_e);
   t->SetBranchAddress("Di_pt", &tMuons.Di_pt, &tMuons.b_Di_pt);
   t->SetBranchAddress("Di_pt1", &tMuons.Di_pt1, &tMuons.b_Di_pt1);
   t->SetBranchAddress("Di_pt2", &tMuons.Di_pt2, &tMuons.b_Di_pt2);
   t->SetBranchAddress("Di_eta", &tMuons.Di_eta, &tMuons.b_Di_eta);
   t->SetBranchAddress("Di_eta1", &tMuons.Di_eta1, &tMuons.b_Di_eta1);
   t->SetBranchAddress("Di_eta2", &tMuons.Di_eta2, &tMuons.b_Di_eta2);
   t->SetBranchAddress("Di_phi", &tMuons.Di_phi, &tMuons.b_Di_phi);
   t->SetBranchAddress("Di_phi1", &tMuons.Di_phi1, &tMuons.b_Di_phi1);
   t->SetBranchAddress("Di_phi2", &tMuons.Di_phi2, &tMuons.b_Di_phi2);
   t->SetBranchAddress("Di_charge1", &tMuons.Di_charge1, &tMuons.b_Di_charge1);
   t->SetBranchAddress("Di_charge2", &tMuons.Di_charge2, &tMuons.b_Di_charge2);
   t->SetBranchAddress("Di_isArb1", &tMuons.Di_isArb1, &tMuons.b_Di_isArb1);
   t->SetBranchAddress("Di_isArb2", &tMuons.Di_isArb2, &tMuons.b_Di_isArb2);
   t->SetBranchAddress("Di_nTrkHit1", &tMuons.Di_nTrkHit1, &tMuons.b_Di_nTrkHit1);
   t->SetBranchAddress("Di_nTrkHit2", &tMuons.Di_nTrkHit2, &tMuons.b_Di_nTrkHit2);
   t->SetBranchAddress("Di_trkChi2_1", &tMuons.Di_trkChi2_1, &tMuons.b_Di_trkChi2_1);
   t->SetBranchAddress("Di_trkChi2_2", &tMuons.Di_trkChi2_2, &tMuons.b_Di_trkChi2_2);
   t->SetBranchAddress("Di_glbChi2_1", &tMuons.Di_glbChi2_1, &tMuons.b_Di_glbChi2_1);
   t->SetBranchAddress("Di_glbChi2_2", &tMuons.Di_glbChi2_2, &tMuons.b_Di_glbChi2_2);
   t->SetBranchAddress("Di_dxy1", &tMuons.Di_dxy1, &tMuons.b_Di_dxy1);
   t->SetBranchAddress("Di_dxy2", &tMuons.Di_dxy2, &tMuons.b_Di_dxy2);
   t->SetBranchAddress("Di_dz1", &tMuons.Di_dz1, &tMuons.b_Di_dz1);
   t->SetBranchAddress("Di_dz2", &tMuons.Di_dz2, &tMuons.b_Di_dz2);
   if (doCheck) {
      if (t->GetMaximum("Gen_nptl")>2) cout <<"FATAL ERROR: Arrary size of Gen_nptl too small!!!  "<<t->GetMaximum("Gen_nptl")<<endl;
      if (t->GetMaximum("Glb_nptl")>2) cout <<"FATAL ERROR: Arrary size of Glb_nptl too small!!!  "<<t->GetMaximum("Glb_nptl")<<endl;
      if (t->GetMaximum("Sta_nptl")>2) cout <<"FATAL ERROR: Arrary size of Sta_nptl too small!!!  "<<t->GetMaximum("Sta_nptl")<<endl;
      if (t->GetMaximum("Di_npair")>2) cout <<"FATAL ERROR: Arrary size of Di_npair too small!!!  "<<t->GetMaximum("Di_npair")<<endl;
   }
}

