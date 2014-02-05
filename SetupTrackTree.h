//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Jan 23 16:17:05 2013 by ROOT version 5.32/00
// from TTree trackTree/v1
// found on file: root://eoscms//eos/cms/store/caf/user/velicanu/PA2013_merged/pPb_hiForest2_monster_logerrevent_HI2013_express_v1_210634_210635_v14.root
//////////////////////////////////////////////////////////
#include "commonSetup.h"
#include <iostream>
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TTree.h>
#include <TBranch.h>

using namespace std;

class Tracks {
public :
   Tracks(){};
   ~Tracks(){};

   // Declaration of leaf types
   Int_t           nEv;
   Int_t           nLumi;
   Int_t           nBX;
   Int_t           nRun;
   Int_t           nv;
   Float_t         vx[4];   //[nv]
   Float_t         vy[4];   //[nv]
   Float_t         vz[4];   //[nv]
   Float_t         vxErr[4];   //[nv]
   Float_t         vyErr[4];   //[nv]
   Float_t         vzErr[4];   //[nv]
   Int_t           nDaugher[4];   //[nv]
   Int_t           nVtx;
   Int_t           maxVtx;
   Int_t           nTrkVtx[2];   //[nVtx]
   Float_t         xVtx[2];   //[nVtx]
   Float_t         yVtx[2];   //[nVtx]
   Float_t         zVtx[2];   //[nVtx]
   Float_t         xVtxErr[2];   //[nVtx]
   Float_t         yVtxErr[2];   //[nVtx]
   Float_t         zVtxErr[2];   //[nVtx]
   Int_t           nTrk;
   Float_t         trkPt[2302];   //[nTrk]
   Float_t         trkPtError[2302];   //[nTrk]
   Int_t           trkNHit[2302];   //[nTrk]
   Int_t           trkNlayer[2302];   //[nTrk]
   Float_t         trkEta[2302];   //[nTrk]
   Float_t         trkPhi[2302];   //[nTrk]
   Int_t           trkCharge[2302];   //[nTrk]
   Bool_t          highPurity[2302];   //[nTrk]
   Bool_t          highPuritySetWithPV[2302];   //[nTrk]
   Float_t         trkChi2[2302];   //[nTrk]
   Float_t         trkNdof[2302];   //[nTrk]
   Float_t         trkDxy1[2302];   //[nTrk]
   Float_t         trkDxyError1[2302];   //[nTrk]
   Float_t         trkDz1[2302];   //[nTrk]
   Float_t         trkDzError1[2302];   //[nTrk]
   Bool_t          trkFake[2302];   //[nTrk]
   Float_t         trkAlgo[2302];   //[nTrk]
   Int_t           pfType[2302];   //[nTrk]
   Float_t         pfCandPt[2302];   //[nTrk]
   Float_t         pfSumEcal[2302];   //[nTrk]
   Float_t         pfSumHcal[2302];   //[nTrk]

   // List of branches
   TBranch        *b_nEv;   //!
   TBranch        *b_nLumi;   //!
   TBranch        *b_nBX;   //!
   TBranch        *b_nRun;   //!
   TBranch        *b_nv;   //!
   TBranch        *b_vx;   //!
   TBranch        *b_vy;   //!
   TBranch        *b_vz;   //!
   TBranch        *b_vxErr;   //!
   TBranch        *b_vyErr;   //!
   TBranch        *b_vzErr;   //!
   TBranch        *b_nDaugher;   //!
   TBranch        *b_nVtx;   //!
   TBranch        *b_maxVtx;   //!
   TBranch        *b_nTrkVtx;   //!
   TBranch        *b_xVtx;   //!
   TBranch        *b_yVtx;   //!
   TBranch        *b_zVtx;   //!
   TBranch        *b_xVtxErr;   //!
   TBranch        *b_yVtxErr;   //!
   TBranch        *b_zVtxErr;   //!
   TBranch        *b_nTrk;   //!
   TBranch        *b_trkPt;   //!
   TBranch        *b_trkPtError;   //!
   TBranch        *b_trkNHit;   //!
   TBranch        *b_trkNlayer;   //!
   TBranch        *b_trkEta;   //!
   TBranch        *b_trkPhi;   //!
   TBranch        *b_trkCharge;   //!
   TBranch        *b_highPurity;   //!
   TBranch        *b_highPuritySetWithPV;   //!
   TBranch        *b_trkChi2;   //!
   TBranch        *b_trkNdof;   //!
   TBranch        *b_trkDxy1;   //!
   TBranch        *b_trkDxyError1;   //!
   TBranch        *b_trkDz1;   //!
   TBranch        *b_trkDzError1;   //!
   TBranch        *b_trkFake;   //!
   TBranch        *b_trkAlgo;   //!
   TBranch        *b_pfType;   //!
   TBranch        *b_pfCandPt;   //!
   TBranch        *b_pfSumEcal;   //!
   TBranch        *b_pfSumHcal;   //!

};


void setupTrackTree(TTree *t,Tracks &tTracks,bool doCheck = 1)
{
   // Set branch addresses and branch pointers
   t->SetBranchAddress("nEv", &tTracks.nEv, &tTracks.b_nEv);
   t->SetBranchAddress("nLumi", &tTracks.nLumi, &tTracks.b_nLumi);
   t->SetBranchAddress("nBX", &tTracks.nBX, &tTracks.b_nBX);
   t->SetBranchAddress("nRun", &tTracks.nRun, &tTracks.b_nRun);
   t->SetBranchAddress("nv", &tTracks.nv, &tTracks.b_nv);
   t->SetBranchAddress("vx", tTracks.vx, &tTracks.b_vx);
   t->SetBranchAddress("vy", tTracks.vy, &tTracks.b_vy);
   t->SetBranchAddress("vz", tTracks.vz, &tTracks.b_vz);
   t->SetBranchAddress("vxErr", tTracks.vxErr, &tTracks.b_vxErr);
   t->SetBranchAddress("vyErr", tTracks.vyErr, &tTracks.b_vyErr);
   t->SetBranchAddress("vzErr", tTracks.vzErr, &tTracks.b_vzErr);
   t->SetBranchAddress("nDaugher", tTracks.nDaugher, &tTracks.b_nDaugher);
   t->SetBranchAddress("nVtx", &tTracks.nVtx, &tTracks.b_nVtx);
   t->SetBranchAddress("maxVtx", &tTracks.maxVtx, &tTracks.b_maxVtx);
   t->SetBranchAddress("nTrkVtx", tTracks.nTrkVtx, &tTracks.b_nTrkVtx);
   t->SetBranchAddress("xVtx", tTracks.xVtx, &tTracks.b_xVtx);
   t->SetBranchAddress("yVtx", tTracks.yVtx, &tTracks.b_yVtx);
   t->SetBranchAddress("zVtx", tTracks.zVtx, &tTracks.b_zVtx);
   t->SetBranchAddress("xVtxErr", tTracks.xVtxErr, &tTracks.b_xVtxErr);
   t->SetBranchAddress("yVtxErr", tTracks.yVtxErr, &tTracks.b_yVtxErr);
   t->SetBranchAddress("zVtxErr", tTracks.zVtxErr, &tTracks.b_zVtxErr);
   t->SetBranchAddress("nTrk", &tTracks.nTrk, &tTracks.b_nTrk);
   t->SetBranchAddress("trkPt", tTracks.trkPt, &tTracks.b_trkPt);
   t->SetBranchAddress("trkPtError", tTracks.trkPtError, &tTracks.b_trkPtError);
   t->SetBranchAddress("trkNHit", tTracks.trkNHit, &tTracks.b_trkNHit);
   t->SetBranchAddress("trkNlayer", tTracks.trkNlayer, &tTracks.b_trkNlayer);
   t->SetBranchAddress("trkEta", tTracks.trkEta, &tTracks.b_trkEta);
   t->SetBranchAddress("trkPhi", tTracks.trkPhi, &tTracks.b_trkPhi);
   t->SetBranchAddress("trkCharge", tTracks.trkCharge, &tTracks.b_trkCharge);
   t->SetBranchAddress("highPurity", tTracks.highPurity, &tTracks.b_highPurity);
   t->SetBranchAddress("highPuritySetWithPV", tTracks.highPuritySetWithPV, &tTracks.b_highPuritySetWithPV);
   t->SetBranchAddress("trkChi2", tTracks.trkChi2, &tTracks.b_trkChi2);
   t->SetBranchAddress("trkNdof", tTracks.trkNdof, &tTracks.b_trkNdof);
   t->SetBranchAddress("trkDxy1", tTracks.trkDxy1, &tTracks.b_trkDxy1);
   t->SetBranchAddress("trkDxyError1", tTracks.trkDxyError1, &tTracks.b_trkDxyError1);
   t->SetBranchAddress("trkDz1", tTracks.trkDz1, &tTracks.b_trkDz1);
   t->SetBranchAddress("trkDzError1", tTracks.trkDzError1, &tTracks.b_trkDzError1);
   t->SetBranchAddress("trkFake", tTracks.trkFake, &tTracks.b_trkFake);
   t->SetBranchAddress("trkAlgo", tTracks.trkAlgo, &tTracks.b_trkAlgo);
   t->SetBranchAddress("pfType", tTracks.pfType, &tTracks.b_pfType);
   t->SetBranchAddress("pfCandPt", tTracks.pfCandPt, &tTracks.b_pfCandPt);
   t->SetBranchAddress("pfSumEcal", tTracks.pfSumEcal, &tTracks.b_pfSumEcal);
   t->SetBranchAddress("pfSumHcal", tTracks.pfSumHcal, &tTracks.b_pfSumHcal);
   if (doCheck) {
      if (t->GetMaximum("nv")>4) cout <<"FATAL ERROR: Arrary size of nv too small!!!  "<<t->GetMaximum("nv")<<endl;
      if (t->GetMaximum("nVtx")>2) cout <<"FATAL ERROR: Arrary size of nVtx too small!!!  "<<t->GetMaximum("nVtx")<<endl;
      if (t->GetMaximum("nTrk")>2302) cout <<"FATAL ERROR: Arrary size of nTrk too small!!!  "<<t->GetMaximum("nTrk")<<endl;
   }
}

