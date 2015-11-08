//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Jan 23 16:17:05 2013 by ROOT version 5.32/00
// from TTree trackTree/v1
// found on file: root://eoscms//eos/cms/store/caf/user/velicanu/PA2013_merged/pPb_hiForest2_monster_logerrevent_HI2013_express_v1_210634_210635_v14.root
//
// A few data types changed on 11/8/2015 to match changes with RUN2 forest production (A. Baty)
// trkNHit, trkNlayer, trkNdof, trkAlgo, trkNVtx, mtrkNdof
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
   Int_t           N;
   Int_t           nVtx;
   Int_t           nTrk;
   Int_t           maxPtVtx;
   Int_t           maxMultVtx;
   Int_t           nTrkVtx[4];   //[nVtx]
   Float_t         normChi2Vtx[4];   //[nVtx]
   Float_t         sumPtVtx[4];   //[nVtx]
   Float_t         xVtx[4];   //[nVtx]
   Float_t         yVtx[4];   //[nVtx]
   Float_t         zVtx[4];   //[nVtx]
   Float_t         xVtxErr[4];   //[nVtx]
   Float_t         yVtxErr[4];   //[nVtx]
   Float_t         zVtxErr[4];   //[nVtx]
   Float_t         vtxDist2D[4];   //[nVtx]
   Float_t         vtxDist2DErr[4];   //[nVtx]
   Float_t         vtxDist2DSig[4];   //[nVtx]
   Float_t         vtxDist3DErr[4];   //[nVtx]
   Float_t         vtxDist3DSig[4];   //[nVtx]
   Int_t           nVtxSim;
   Float_t         xVtxSim[1039];   //[nVtxSim]
   Float_t         yVtxSim[1039];   //[nVtxSim]
   Float_t         zVtxSim[1039];   //[nVtxSim]
   Float_t         trkPt[maxTracks];   //[nTrk]
   Float_t         trkPtError[maxTracks];   //[nTrk]
   unsigned char           trkNHit[maxTracks];   //[nTrk]
   unsigned char           trkNlayer[maxTracks];   //[nTrk]
   Float_t         trkEta[maxTracks];   //[nTrk]
   Float_t         trkPhi[maxTracks];   //[nTrk]
   Int_t           trkCharge[maxTracks];   //[nTrk]
   unsigned char           trkNVtx[maxTracks];   //[nTrk]
   Int_t           nTrkTimesnVtx;
   Bool_t          trkAssocVtx[maxTracks*4];   //[nTrkTimesnVtx]
   Bool_t          highPurity[maxTracks];   //[nTrk]
   Bool_t          highPuritySetWithPV[maxTracks];   //[nTrk]
   Float_t         trkChi2[maxTracks];   //[nTrk]
   unsigned char         trkNdof[maxTracks];   //[nTrk]
   Float_t         trkDxy1[maxTracks];   //[nTrk]
   Float_t         trkDxyError1[maxTracks];   //[nTrk]
   Float_t         trkDz1[maxTracks];   //[nTrk]
   Float_t         trkDzError1[maxTracks];   //[nTrk]
   Float_t         trkDzError2[maxTracks];   //[nTrk]
   Float_t         trkDxy2[maxTracks];   //[nTrk]
   Float_t         trkDz2[maxTracks];   //[nTrk]
   Float_t         trkDxyError2[maxTracks];   //[nTrk]
   Bool_t          trkFake[maxTracks];   //[nTrk]
   unsigned char         trkAlgo[maxTracks];   //[nTrk]
   Int_t           pfType[maxTracks];   //[nTrk]
   Float_t         pfCandPt[maxTracks];   //[nTrk]
   Float_t         pfSumEcal[maxTracks];   //[nTrk]
   Float_t         pfSumHcal[maxTracks];   //[nTrk]
   Float_t         trkStatus[maxTracks];   //[nTrk]
   Float_t         trkPId[maxTracks];   //[nTrk]
   Float_t         trkMPId[maxTracks];   //[nTrk]
   Float_t         trkGMPId[maxTracks];   //[nTrk]
   Int_t           nParticle;
   Float_t         pStatus[maxTracks];   //[nParticle]
   Float_t         pPId[maxTracks];   //[nParticle]
   Float_t         pEta[maxTracks];   //[nParticle]
   Float_t         pPhi[maxTracks];   //[nParticle]
   Float_t         pPt[maxTracks];   //[nParticle]
   Float_t         pAcc[maxTracks];   //[nParticle]
   Float_t         pAccPair[maxTracks];   //[nParticle]
   Float_t         pNRec[maxTracks];   //[nParticle]
   Int_t           pNHit[maxTracks];   //[nParticle]
   Float_t         mtrkPt[maxTracks];   //[nParticle]
   Float_t         mtrkPtError[maxTracks];   //[nParticle]
   Int_t           mtrkNHit[maxTracks];   //[nParticle]
   Int_t           mtrkNlayer[maxTracks];   //[nParticle]
   Int_t           mtrkNlayer3D[maxTracks];   //[nParticle]
   Int_t           mtrkQual[maxTracks];   //[nParticle]
   Float_t         mtrkChi2[maxTracks];   //[nParticle]
   Int_t         mtrkNdof[maxTracks];   //[nParticle]
   Float_t         mtrkDz1[maxTracks];   //[nParticle]
   Float_t         mtrkDzError1[maxTracks];   //[nParticle]
   Float_t         mtrkDxy1[maxTracks];   //[nParticle]
   Float_t         mtrkDxyError1[maxTracks];   //[nParticle]
   Float_t         mtrkDz2[maxTracks];   //[nParticle]
   Float_t         mtrkDzError2[maxTracks];   //[nParticle]
   Float_t         mtrkDxy2[maxTracks];   //[nParticle]
   Float_t         mtrkDxyError2[maxTracks];   //[nParticle]
   Float_t         mtrkAlgo[maxTracks];   //[nParticle]
   Int_t           mtrkPfType[maxTracks];   //[nParticle]
   Float_t         mtrkPfCandPt[maxTracks];   //[nParticle]
   Float_t         mtrkPfSumEcal[maxTracks];   //[nParticle]
   Float_t         mtrkPfSumHcal[maxTracks];   //[nParticle]



   // List of branches
   TBranch        *b_nEv;   //!
   TBranch        *b_nLumi;   //!
   TBranch        *b_nBX;   //!
   TBranch        *b_nRun;   //!
   TBranch        *b_N;   //!
   TBranch        *b_nVtx;   //!
   TBranch        *b_nTrk;   //!
   TBranch        *b_maxPtVtx;   //!
   TBranch        *b_maxMultVtx;   //!
   TBranch        *b_nTrkVtx;   //!
   TBranch        *b_normChi2Vtx;   //!
   TBranch        *b_sumPtVtx;   //!
   TBranch        *b_xVtx;   //!
   TBranch        *b_yVtx;   //!
   TBranch        *b_zVtx;   //!
   TBranch        *b_xVtxErr;   //!
   TBranch        *b_yVtxErr;   //!
   TBranch        *b_zVtxErr;   //!
   TBranch        *b_vtxDist2DErr;   //!
   TBranch        *b_vtxDist2DSig;   //!
   TBranch        *b_vtxDist2D;   //!
   TBranch        *b_vtxDist3DErr;   //!
   TBranch        *b_vtxDist3DSig;   //!
   TBranch        *b_nVtxSim;   //!
   TBranch        *b_xVtxSim;   //!
   TBranch        *b_yVtxSim;   //!
   TBranch        *b_zVtxSim;   //!
   TBranch        *b_trkPt;   //!
   TBranch        *b_trkPtError;   //!
   TBranch        *b_trkNHit;   //!
   TBranch        *b_trkNlayer;   //!
   TBranch        *b_trkEta;   //!
   TBranch        *b_trkPhi;   //!
   TBranch        *b_trkCharge;   //!
   TBranch        *b_trkNVtx;   //!
   TBranch        *b_nTrkTimesnVtx;   //!
   TBranch        *b_trkAssocVtx;   //!
   TBranch        *b_highPurity;   //!
   TBranch        *b_highPuritySetWithPV;   //!
   TBranch        *b_trkChi2;   //!
   TBranch        *b_trkNdof;   //!
   TBranch        *b_trkDxy1;   //!
   TBranch        *b_trkDxyError1;   //!
   TBranch        *b_trkDz1;   //!
   TBranch        *b_trkDzError1;   //!
   TBranch        *b_trkDzError2;   //!
   TBranch        *b_trkDxy2;   //!
   TBranch        *b_trkDz2;   //!
   TBranch        *b_trkDxyError2;   //!
   TBranch        *b_trkFake;   //!
   TBranch        *b_trkAlgo;   //!
   TBranch        *b_pfType;   //!
   TBranch        *b_pfCandPt;   //!
   TBranch        *b_pfSumEcal;   //!
   TBranch        *b_pfSumHcal;   //!
   TBranch        *b_trkStatus;   //!
   TBranch        *b_trkPId;   //!
   TBranch        *b_trkMPId;   //!
   TBranch        *b_trkGMPId;   //!
   TBranch        *b_nParticle;   //!
   TBranch        *b_pStatus;   //!
   TBranch        *b_pPId;   //!
   TBranch        *b_pEta;   //!
   TBranch        *b_pPhi;   //!
   TBranch        *b_pPt;   //!
   TBranch        *b_pAcc;   //!
   TBranch        *b_pAccPair;   //!
   TBranch        *b_pNRec;   //!
   TBranch        *b_pNHit;   //!
   TBranch        *b_mtrkPt;   //!
   TBranch        *b_mtrkPtError;   //!
   TBranch        *b_mtrkNHit;   //!
   TBranch        *b_mtrkNlayer;   //!
   TBranch        *b_mtrkNlayer3D;   //!
   TBranch        *b_mtrkQual;   //!
   TBranch        *b_mtrkChi2;   //!
   TBranch        *b_mtrkNdof;   //!
   TBranch        *b_mtrkDz1;   //!
   TBranch        *b_mtrkDzError1;   //!
   TBranch        *b_mtrkDxy1;   //!
   TBranch        *b_mtrkDxyError1;   //!
   TBranch        *b_mtrkDz2;   //!
   TBranch        *b_mtrkDzError2;   //!
   TBranch        *b_mtrkDxy2;   //!
   TBranch        *b_mtrkDxyError2;   //!
   TBranch        *b_mtrkAlgo;   //!
   TBranch        *b_mtrkPfType;   //!
   TBranch        *b_mtrkPfCandPt;   //!
   TBranch        *b_mtrkPfSumEcal;   //!
   TBranch        *b_mtrkPfSumHcal;   //!
};


void setupTrackTree(TTree *t,Tracks &tTracks,bool doCheck = 1)
{
   // Set branch addresses and branch pointers

   t->SetBranchAddress("nEv", &tTracks.nEv, &tTracks.b_nEv);
   t->SetBranchAddress("nLumi", &tTracks.nLumi, &tTracks.b_nLumi);
   t->SetBranchAddress("nBX", &tTracks.nBX, &tTracks.b_nBX);
   t->SetBranchAddress("nRun", &tTracks.nRun, &tTracks.b_nRun);
   t->SetBranchAddress("N", &tTracks.N, &tTracks.b_N);
   t->SetBranchAddress("nVtx", &tTracks.nVtx, &tTracks.b_nVtx);
   t->SetBranchAddress("nTrk", &tTracks.nTrk, &tTracks.b_nTrk);
   t->SetBranchAddress("maxPtVtx", &tTracks.maxPtVtx, &tTracks.b_maxPtVtx);
   t->SetBranchAddress("maxMultVtx", &tTracks.maxMultVtx, &tTracks.b_maxMultVtx);
   t->SetBranchAddress("nTrkVtx", tTracks.nTrkVtx, &tTracks.b_nTrkVtx);
   t->SetBranchAddress("normChi2Vtx", tTracks.normChi2Vtx, &tTracks.b_normChi2Vtx);
   t->SetBranchAddress("sumPtVtx", tTracks.sumPtVtx, &tTracks.b_sumPtVtx);
   t->SetBranchAddress("xVtx", tTracks.xVtx, &tTracks.b_xVtx);
   t->SetBranchAddress("yVtx", tTracks.yVtx, &tTracks.b_yVtx);
   t->SetBranchAddress("zVtx", tTracks.zVtx, &tTracks.b_zVtx);
   t->SetBranchAddress("xVtxErr", tTracks.xVtxErr, &tTracks.b_xVtxErr);
   t->SetBranchAddress("yVtxErr", tTracks.yVtxErr, &tTracks.b_yVtxErr);
   t->SetBranchAddress("zVtxErr", tTracks.zVtxErr, &tTracks.b_zVtxErr);
   t->SetBranchAddress("vtxDist2D", tTracks.vtxDist2D, &tTracks.b_vtxDist2D);
   t->SetBranchAddress("vtxDist2DErr", tTracks.vtxDist2DErr, &tTracks.b_vtxDist2DErr);
   t->SetBranchAddress("vtxDist2DSig", tTracks.vtxDist2DSig, &tTracks.b_vtxDist2DSig);
   t->SetBranchAddress("vtxDist3DErr", tTracks.vtxDist3DErr, &tTracks.b_vtxDist3DErr);
   t->SetBranchAddress("vtxDist3DSig", tTracks.vtxDist3DSig, &tTracks.b_vtxDist3DSig);
   t->SetBranchAddress("nVtxSim", &tTracks.nVtxSim, &tTracks.b_nVtxSim);
   t->SetBranchAddress("xVtxSim", tTracks.xVtxSim, &tTracks.b_xVtxSim);
   t->SetBranchAddress("yVtxSim", tTracks.yVtxSim, &tTracks.b_yVtxSim);
   t->SetBranchAddress("zVtxSim", tTracks.zVtxSim, &tTracks.b_zVtxSim);
   t->SetBranchAddress("trkPt", tTracks.trkPt, &tTracks.b_trkPt);
   t->SetBranchAddress("trkPtError", tTracks.trkPtError, &tTracks.b_trkPtError);
   t->SetBranchAddress("trkNHit", tTracks.trkNHit, &tTracks.b_trkNHit);
   t->SetBranchAddress("trkNlayer", tTracks.trkNlayer, &tTracks.b_trkNlayer);
   t->SetBranchAddress("trkEta", tTracks.trkEta, &tTracks.b_trkEta);
   t->SetBranchAddress("trkPhi", tTracks.trkPhi, &tTracks.b_trkPhi);
   t->SetBranchAddress("trkCharge", tTracks.trkCharge, &tTracks.b_trkCharge);
   t->SetBranchAddress("trkNVtx", tTracks.trkNVtx, &tTracks.b_trkNVtx);
   t->SetBranchAddress("nTrkTimesnVtx", &tTracks.nTrkTimesnVtx, &tTracks.b_nTrkTimesnVtx);
   t->SetBranchAddress("trkAssocVtx", tTracks.trkAssocVtx, &tTracks.b_trkAssocVtx);
   t->SetBranchAddress("highPurity", tTracks.highPurity, &tTracks.b_highPurity);
   t->SetBranchAddress("highPuritySetWithPV", tTracks.highPuritySetWithPV, &tTracks.b_highPuritySetWithPV);
   t->SetBranchAddress("trkChi2", tTracks.trkChi2, &tTracks.b_trkChi2);
   t->SetBranchAddress("trkNdof", tTracks.trkNdof, &tTracks.b_trkNdof);
   t->SetBranchAddress("trkDxy1", tTracks.trkDxy1, &tTracks.b_trkDxy1);
   t->SetBranchAddress("trkDxyError1", tTracks.trkDxyError1, &tTracks.b_trkDxyError1);
   t->SetBranchAddress("trkDz1", tTracks.trkDz1, &tTracks.b_trkDz1);
   t->SetBranchAddress("trkDzError1", tTracks.trkDzError1, &tTracks.b_trkDzError1);
   t->SetBranchAddress("trkDzError2", tTracks.trkDzError2, &tTracks.b_trkDzError2);
   t->SetBranchAddress("trkDxy2", tTracks.trkDxy2, &tTracks.b_trkDxy2);
   t->SetBranchAddress("trkDz2", tTracks.trkDz2, &tTracks.b_trkDz2);
   t->SetBranchAddress("trkDxyError2", tTracks.trkDxyError2, &tTracks.b_trkDxyError2);
   t->SetBranchAddress("trkFake", tTracks.trkFake, &tTracks.b_trkFake);
   t->SetBranchAddress("trkAlgo", tTracks.trkAlgo, &tTracks.b_trkAlgo);
   t->SetBranchAddress("pfType", tTracks.pfType, &tTracks.b_pfType);
   t->SetBranchAddress("pfCandPt", tTracks.pfCandPt, &tTracks.b_pfCandPt);
   t->SetBranchAddress("pfSumEcal", tTracks.pfSumEcal, &tTracks.b_pfSumEcal);
   t->SetBranchAddress("pfSumHcal", tTracks.pfSumHcal, &tTracks.b_pfSumHcal);
   t->SetBranchAddress("trkStatus", tTracks.trkStatus, &tTracks.b_trkStatus);
   t->SetBranchAddress("trkPId", tTracks.trkPId, &tTracks.b_trkPId);
   t->SetBranchAddress("trkMPId", tTracks.trkMPId, &tTracks.b_trkMPId);
   t->SetBranchAddress("trkGMPId", tTracks.trkGMPId, &tTracks.b_trkGMPId);
   t->SetBranchAddress("nParticle", &tTracks.nParticle, &tTracks.b_nParticle);
   t->SetBranchAddress("pStatus", tTracks.pStatus, &tTracks.b_pStatus);
   t->SetBranchAddress("pPId", tTracks.pPId, &tTracks.b_pPId);
   t->SetBranchAddress("pEta", tTracks.pEta, &tTracks.b_pEta);
   t->SetBranchAddress("pPhi", tTracks.pPhi, &tTracks.b_pPhi);
   t->SetBranchAddress("pPt", tTracks.pPt, &tTracks.b_pPt);
   t->SetBranchAddress("pAcc", tTracks.pAcc, &tTracks.b_pAcc);
   t->SetBranchAddress("pAccPair", tTracks.pAccPair, &tTracks.b_pAccPair);
   t->SetBranchAddress("pNRec", tTracks.pNRec, &tTracks.b_pNRec);
   t->SetBranchAddress("pNHit", tTracks.pNHit, &tTracks.b_pNHit);
   t->SetBranchAddress("mtrkPt", tTracks.mtrkPt, &tTracks.b_mtrkPt);
   t->SetBranchAddress("mtrkPtError", tTracks.mtrkPtError, &tTracks.b_mtrkPtError);
   t->SetBranchAddress("mtrkNHit", tTracks.mtrkNHit, &tTracks.b_mtrkNHit);
   t->SetBranchAddress("mtrkNlayer", tTracks.mtrkNlayer, &tTracks.b_mtrkNlayer);
   t->SetBranchAddress("mtrkNlayer3D", tTracks.mtrkNlayer3D, &tTracks.b_mtrkNlayer3D);
   t->SetBranchAddress("mtrkQual", tTracks.mtrkQual, &tTracks.b_mtrkQual);
   t->SetBranchAddress("mtrkChi2", tTracks.mtrkChi2, &tTracks.b_mtrkChi2);
   t->SetBranchAddress("mtrkNdof", tTracks.mtrkNdof, &tTracks.b_mtrkNdof);
   t->SetBranchAddress("mtrkDz1", tTracks.mtrkDz1, &tTracks.b_mtrkDz1);
   t->SetBranchAddress("mtrkDzError1", tTracks.mtrkDzError1, &tTracks.b_mtrkDzError1);
   t->SetBranchAddress("mtrkDxy1", tTracks.mtrkDxy1, &tTracks.b_mtrkDxy1);
   t->SetBranchAddress("mtrkDxyError1", tTracks.mtrkDxyError1, &tTracks.b_mtrkDxyError1);
   t->SetBranchAddress("mtrkDz2", tTracks.mtrkDz2, &tTracks.b_mtrkDz2);
   t->SetBranchAddress("mtrkDzError2", tTracks.mtrkDzError2, &tTracks.b_mtrkDzError2);
   t->SetBranchAddress("mtrkDxy2", tTracks.mtrkDxy2, &tTracks.b_mtrkDxy2);
   t->SetBranchAddress("mtrkDxyError2", tTracks.mtrkDxyError2, &tTracks.b_mtrkDxyError2);
   t->SetBranchAddress("mtrkAlgo", tTracks.mtrkAlgo, &tTracks.b_mtrkAlgo);
   t->SetBranchAddress("mtrkPfType", tTracks.mtrkPfType, &tTracks.b_mtrkPfType);
   t->SetBranchAddress("mtrkPfCandPt", tTracks.mtrkPfCandPt, &tTracks.b_mtrkPfCandPt);
   t->SetBranchAddress("mtrkPfSumEcal", tTracks.mtrkPfSumEcal, &tTracks.b_mtrkPfSumEcal);
   t->SetBranchAddress("mtrkPfSumHcal", tTracks.mtrkPfSumHcal, &tTracks.b_mtrkPfSumHcal);

   if (doCheck) {
      if (t->GetMaximum("nv")>4) { cout <<"FATAL ERROR: Arrary size of nv too small!!!  "<<t->GetMaximum("nv")<<endl; exit(1); }
      if (t->GetMaximum("nVtx")>100) {  cout <<"FATAL ERROR: Arrary size of nVtx too small!!!  "<<t->GetMaximum("nVtx")<<endl; exit(1); }
      if (t->GetMaximum("nTrk")>maxTracks) { cout <<"FATAL ERROR: Arrary size of nTrk too small!!!  "<<t->GetMaximum("nTrk")<<endl; exit(1); }
   }
}
