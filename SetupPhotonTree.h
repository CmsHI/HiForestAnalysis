//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Sun Jul  8 19:18:37 2012 by ROOT version 5.27/06b
// from TTree photon/v1
// found on file: /d102/yjlee/hiForest2MC/Pythia80_HydjetDrum_mix01_HiForest2_v20.root
//////////////////////////////////////////////////////////
#include "commonSetup.h"
#include <iostream>
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TTree.h>
#include <TBranch.h>

class Photons {
public :
   Photons(){};
   ~Photons(){};

   // Declaration of leaf types
   Int_t           run;
   Int_t           event;
   Int_t           bunchCrossing;
   Int_t           luminosityBlock;
   Int_t           nPhotons;
   Float_t         pt[126];   //[nPhotons]
   Float_t         energy[126];   //[nPhotons]
   Float_t         rawEnergy[126];   //[nPhotons]
   Float_t         eta[126];   //[nPhotons]
   Float_t         phi[126];   //[nPhotons]
   Float_t         r9[126];   //[nPhotons]
   Bool_t          isEB[126];   //[nPhotons]
   Bool_t          isEBGap[126];   //[nPhotons]
   Bool_t          isEEGap[126];   //[nPhotons]
   Bool_t          isEBEEGap[126];   //[nPhotons]
   Bool_t          isTransGap[126];   //[nPhotons]
   Float_t         preshowerEnergy[126];   //[nPhotons]
   Float_t         numOfPreshClusters[126];   //[nPhotons]
   Float_t         ESRatio[126];   //[nPhotons]
   Float_t         clustersSize[126];   //[nPhotons]
   Float_t         scSize[126];   //[nPhotons]
   Float_t         phiWidth[126];   //[nPhotons]
   Float_t         etaWidth[126];   //[nPhotons]
   Float_t         scEta[126];   //[nPhotons]
   Float_t         scPhi[126];   //[nPhotons]
   Float_t         sigmaEtaEta[126];   //[nPhotons]
   Float_t         sigmaIetaIeta[126];   //[nPhotons]
   Float_t         sigmaIphiIphi[126];   //[nPhotons]
   Float_t         sieie50[126];   //[nPhotons]
   Float_t         sieie45[126];   //[nPhotons]
   Float_t         sieie47[126];   //[nPhotons]
   Float_t         sieie42[126];   //[nPhotons]
   Float_t         sieie39[126];   //[nPhotons]
   Float_t         covPhiPhi[126];   //[nPhotons]
   Float_t         covEtaPhi[126];   //[nPhotons]
   Float_t         covEtaEta[126];   //[nPhotons]
   Float_t         r1x5[126];   //[nPhotons]
   Float_t         r2x5[126];   //[nPhotons]
   Float_t         e1x5[126];   //[nPhotons]
   Float_t         e2x5[126];   //[nPhotons]
   Float_t         eMax[126];   //[nPhotons]
   Float_t         e2nd[126];   //[nPhotons]
   Float_t         e2x2[126];   //[nPhotons]
   Float_t         e3x3[126];   //[nPhotons]
   Float_t         e3x2[126];   //[nPhotons]
   Float_t         e4x4[126];   //[nPhotons]
   Float_t         e5x5[126];   //[nPhotons]
   Float_t         e2overe8[126];   //[nPhotons]
   Float_t         eRight[126];   //[nPhotons]
   Float_t         eLeft[126];   //[nPhotons]
   Float_t         eTop[126];   //[nPhotons]
   Float_t         eBottom[126];   //[nPhotons]
   Float_t         e2x5Right[126];   //[nPhotons]
   Float_t         e2x5Left[126];   //[nPhotons]
   Float_t         e2x5Top[126];   //[nPhotons]
   Float_t         e2x5Bottom[126];   //[nPhotons]
   Float_t         seedTime[126];   //[nPhotons]
   Float_t         seedChi2[126];   //[nPhotons]
   Float_t         seedOutOfTimeChi2[126];   //[nPhotons]
   Float_t         seedRecoFlag[126];   //[nPhotons]
   Float_t         seedSeverity[126];   //[nPhotons]
   Float_t         swissCrx[126];   //[nPhotons]
   Float_t         hadronicOverEm[126];   //[nPhotons]
   Float_t         hadronicDepth1OverEm[126];   //[nPhotons]
   Float_t         hadronicDepth2OverEm[126];   //[nPhotons]
   Float_t         ecalRecHitSumEtConeDR04[126];   //[nPhotons]
   Float_t         hcalTowerSumEtConeDR04[126];   //[nPhotons]
   Float_t         hcalDepth1TowerSumEtConeDR04[126];   //[nPhotons]
   Float_t         hcalDepth2TowerSumEtConeDR04[126];   //[nPhotons]
   Float_t         trkSumPtHollowConeDR04[126];   //[nPhotons]
   Float_t         trkSumPtSolidConeDR04[126];   //[nPhotons]
   Float_t         ecalRecHitSumEtConeDR03[126];   //[nPhotons]
   Float_t         hcalTowerSumEtConeDR03[126];   //[nPhotons]
   Float_t         hcalDepth1TowerSumEtConeDR03[126];   //[nPhotons]
   Float_t         hcalDepth2TowerSumEtConeDR03[126];   //[nPhotons]
   Float_t         trkSumPtHollowConeDR03[126];   //[nPhotons]
   Float_t         trkSumPtSolidConeDR03[126];   //[nPhotons]
   Int_t           isEle[126];   //[nPhotons]
   Int_t           hasPixelSeed[126];   //[nPhotons]
   Float_t         detaEle[126];   //[nPhotons]
   Float_t         dphiEle[126];   //[nPhotons]
   Float_t         eleCharge[126];   //[nPhotons]
   Float_t         eleEoverP[126];   //[nPhotons]
   Float_t         c1[126];   //[nPhotons]
   Float_t         c2[126];   //[nPhotons]
   Float_t         c3[126];   //[nPhotons]
   Float_t         c4[126];   //[nPhotons]
   Float_t         c5[126];   //[nPhotons]
   Float_t         r1[126];   //[nPhotons]
   Float_t         r2[126];   //[nPhotons]
   Float_t         r3[126];   //[nPhotons]
   Float_t         r4[126];   //[nPhotons]
   Float_t         r5[126];   //[nPhotons]
   Float_t         t1[126];   //[nPhotons]
   Float_t         t2[126];   //[nPhotons]
   Float_t         t3[126];   //[nPhotons]
   Float_t         t4[126];   //[nPhotons]
   Float_t         t5[126];   //[nPhotons]
   Float_t         t1PtCut[126];   //[nPhotons]
   Float_t         t2PtCut[126];   //[nPhotons]
   Float_t         t3PtCut[126];   //[nPhotons]
   Float_t         t4PtCut[126];   //[nPhotons]
   Float_t         t5PtCut[126];   //[nPhotons]
   Float_t         cc1[126];   //[nPhotons]
   Float_t         cc2[126];   //[nPhotons]
   Float_t         cc3[126];   //[nPhotons]
   Float_t         cc4[126];   //[nPhotons]
   Float_t         cc4j[126];   //[nPhotons]
   Float_t         cc5[126];   //[nPhotons]
   Float_t         cc05[126];   //[nPhotons]
   Float_t         cr1[126];   //[nPhotons]
   Float_t         cr2[126];   //[nPhotons]
   Float_t         cr3[126];   //[nPhotons]
   Float_t         cr4[126];   //[nPhotons]
   Float_t         cr5[126];   //[nPhotons]
   Float_t         cr4j[126];   //[nPhotons]
   Float_t         ct1[126];   //[nPhotons]
   Float_t         ct2[126];   //[nPhotons]
   Float_t         ct3[126];   //[nPhotons]
   Float_t         ct4[126];   //[nPhotons]
   Float_t         ct5[126];   //[nPhotons]
   Float_t         ct1PtCut20[126];   //[nPhotons]
   Float_t         ct2PtCut20[126];   //[nPhotons]
   Float_t         ct3PtCut20[126];   //[nPhotons]
   Float_t         ct4PtCut20[126];   //[nPhotons]
   Float_t         ct5PtCut20[126];   //[nPhotons]
   Float_t         ct4j20[126];   //[nPhotons]
   Float_t         ct4j10[126];   //[nPhotons]
   Float_t         ct4j15[126];   //[nPhotons]
   Float_t         ct4j[126];   //[nPhotons]
   Float_t         dr11[126];   //[nPhotons]
   Float_t         dr21[126];   //[nPhotons]
   Float_t         dr31[126];   //[nPhotons]
   Float_t         dr41[126];   //[nPhotons]
   Float_t         dr12[126];   //[nPhotons]
   Float_t         dr22[126];   //[nPhotons]
   Float_t         dr32[126];   //[nPhotons]
   Float_t         dr42[126];   //[nPhotons]
   Float_t         dr13[126];   //[nPhotons]
   Float_t         dr23[126];   //[nPhotons]
   Float_t         dr33[126];   //[nPhotons]
   Float_t         dr43[126];   //[nPhotons]
   Float_t         dr14[126];   //[nPhotons]
   Float_t         dr24[126];   //[nPhotons]
   Float_t         dr34[126];   //[nPhotons]
   Float_t         dr44[126];   //[nPhotons]
   Float_t         t11[126];   //[nPhotons]
   Float_t         t21[126];   //[nPhotons]
   Float_t         t31[126];   //[nPhotons]
   Float_t         t41[126];   //[nPhotons]
   Float_t         t12[126];   //[nPhotons]
   Float_t         t22[126];   //[nPhotons]
   Float_t         t32[126];   //[nPhotons]
   Float_t         t42[126];   //[nPhotons]
   Float_t         t13[126];   //[nPhotons]
   Float_t         t23[126];   //[nPhotons]
   Float_t         t33[126];   //[nPhotons]
   Float_t         t43[126];   //[nPhotons]
   Float_t         t14[126];   //[nPhotons]
   Float_t         t24[126];   //[nPhotons]
   Float_t         t34[126];   //[nPhotons]
   Float_t         t44[126];   //[nPhotons]
   Int_t           isGenMatched[126];   //[nPhotons]
   Int_t           genMatchedCollId[126];   //[nPhotons]
   Float_t         genMatchedPt[126];   //[nPhotons]
   Float_t         genMatchedEta[126];   //[nPhotons]
   Float_t         genMatchedPhi[126];   //[nPhotons]
   Int_t           genMomId[126];   //[nPhotons]
   Int_t           genGrandMomId[126];   //[nPhotons]
   Int_t           genNSiblings[126];   //[nPhotons]
   Float_t         genCalIsoDR03[126];   //[nPhotons]
   Float_t         genCalIsoDR04[126];   //[nPhotons]
   Float_t         genTrkIsoDR03[126];   //[nPhotons]
   Float_t         genTrkIsoDR04[126];   //[nPhotons]
   Int_t           nGp;
   Float_t         simVtxX;
   Float_t         simVtxY;
   Float_t         simVtxZ;
   Float_t         ptHat;
   Float_t         gpEt[230];   //[nGp]
   Float_t         gpEta[230];   //[nGp]
   Float_t         gpCalIsoDR04[230];   //[nGp]
   Float_t         gpCalIsoDR03[230];   //[nGp]
   Float_t         gpTrkIsoDR03[230];   //[nGp]
   Float_t         gpTrkIsoDR04[230];   //[nGp]
   Int_t           gpStatus[230];   //[nGp]
   Int_t           gpCollId[230];   //[nGp]
   Int_t           gpId[230];   //[nGp]
   Int_t           gpMomId[230];   //[nGp]

   // List of branches
   TBranch        *b_run;   //!
   TBranch        *b_event;   //!
   TBranch        *b_bunchCrossing;   //!
   TBranch        *b_luminosityBlock;   //!
   TBranch        *b_nPhotons;   //!
   TBranch        *b_pt;   //!
   TBranch        *b_energy;   //!
   TBranch        *b_rawEnergy;   //!
   TBranch        *b_eta;   //!
   TBranch        *b_phi;   //!
   TBranch        *b_r9;   //!
   TBranch        *b_isEB;   //!
   TBranch        *b_isEBGap;   //!
   TBranch        *b_isEEGap;   //!
   TBranch        *b_isEBEEGap;   //!
   TBranch        *b_isTransGap;   //!
   TBranch        *b_preshowerEnergy;   //!
   TBranch        *b_numOfPreshClusters;   //!
   TBranch        *b_ESRatio;   //!
   TBranch        *b_clustersSize;   //!
   TBranch        *b_scSize;   //!
   TBranch        *b_phiWidth;   //!
   TBranch        *b_etaWidth;   //!
   TBranch        *b_scEta;   //!
   TBranch        *b_scPhi;   //!
   TBranch        *b_sigmaEtaEta;   //!
   TBranch        *b_sigmaIetaIeta;   //!
   TBranch        *b_sigmaIphiIphi;   //!
   TBranch        *b_sieie50;   //!
   TBranch        *b_sieie45;   //!
   TBranch        *b_sieie47;   //!
   TBranch        *b_sieie42;   //!
   TBranch        *b_sieie39;   //!
   TBranch        *b_covPhiPhi;   //!
   TBranch        *b_covEtaPhi;   //!
   TBranch        *b_covEtaEta;   //!
   TBranch        *b_r1x5;   //!
   TBranch        *b_r2x5;   //!
   TBranch        *b_e1x5;   //!
   TBranch        *b_e2x5;   //!
   TBranch        *b_eMax;   //!
   TBranch        *b_e2nd;   //!
   TBranch        *b_e2x2;   //!
   TBranch        *b_e3x3;   //!
   TBranch        *b_e3x2;   //!
   TBranch        *b_e4x4;   //!
   TBranch        *b_e5x5;   //!
   TBranch        *b_e2overe8;   //!
   TBranch        *b_eRight;   //!
   TBranch        *b_eLeft;   //!
   TBranch        *b_eTop;   //!
   TBranch        *b_eBottom;   //!
   TBranch        *b_e2x5Right;   //!
   TBranch        *b_e2x5Left;   //!
   TBranch        *b_e2x5Top;   //!
   TBranch        *b_e2x5Bottom;   //!
   TBranch        *b_seedTime;   //!
   TBranch        *b_seedChi2;   //!
   TBranch        *b_seedOutOfTimeChi2;   //!
   TBranch        *b_seedRecoFlag;   //!
   TBranch        *b_seedSeverity;   //!
   TBranch        *b_swissCrx;   //!
   TBranch        *b_hadronicOverEm;   //!
   TBranch        *b_hadronicDepth1OverEm;   //!
   TBranch        *b_hadronicDepth2OverEm;   //!
   TBranch        *b_ecalRecHitSumEtConeDR04;   //!
   TBranch        *b_hcalTowerSumEtConeDR04;   //!
   TBranch        *b_hcalDepth1TowerSumEtConeDR04;   //!
   TBranch        *b_hcalDepth2TowerSumEtConeDR04;   //!
   TBranch        *b_trkSumPtHollowConeDR04;   //!
   TBranch        *b_trkSumPtSolidConeDR04;   //!
   TBranch        *b_ecalRecHitSumEtConeDR03;   //!
   TBranch        *b_hcalTowerSumEtConeDR03;   //!
   TBranch        *b_hcalDepth1TowerSumEtConeDR03;   //!
   TBranch        *b_hcalDepth2TowerSumEtConeDR03;   //!
   TBranch        *b_trkSumPtHollowConeDR03;   //!
   TBranch        *b_trkSumPtSolidConeDR03;   //!
   TBranch        *b_isEle;   //!
   TBranch        *b_hasPixelSeed;   //!
   TBranch        *b_detaEle;   //!
   TBranch        *b_dphiEle;   //!
   TBranch        *b_eleCharge;   //!
   TBranch        *b_eleEoverP;   //!
   TBranch        *b_c1;   //!
   TBranch        *b_c2;   //!
   TBranch        *b_c3;   //!
   TBranch        *b_c4;   //!
   TBranch        *b_c5;   //!
   TBranch        *b_r1;   //!
   TBranch        *b_r2;   //!
   TBranch        *b_r3;   //!
   TBranch        *b_r4;   //!
   TBranch        *b_r5;   //!
   TBranch        *b_t1;   //!
   TBranch        *b_t2;   //!
   TBranch        *b_t3;   //!
   TBranch        *b_t4;   //!
   TBranch        *b_t5;   //!
   TBranch        *b_t1PtCut;   //!
   TBranch        *b_t2PtCut;   //!
   TBranch        *b_t3PtCut;   //!
   TBranch        *b_t4PtCut;   //!
   TBranch        *b_t5PtCut;   //!
   TBranch        *b_cc1;   //!
   TBranch        *b_cc2;   //!
   TBranch        *b_cc3;   //!
   TBranch        *b_cc4;   //!
   TBranch        *b_cc4j;   //!
   TBranch        *b_cc5;   //!
   TBranch        *b_cc05;   //!
   TBranch        *b_cr1;   //!
   TBranch        *b_cr2;   //!
   TBranch        *b_cr3;   //!
   TBranch        *b_cr4;   //!
   TBranch        *b_cr5;   //!
   TBranch        *b_cr4j;   //!
   TBranch        *b_ct1;   //!
   TBranch        *b_ct2;   //!
   TBranch        *b_ct3;   //!
   TBranch        *b_ct4;   //!
   TBranch        *b_ct5;   //!
   TBranch        *b_ct1PtCut20;   //!
   TBranch        *b_ct2PtCut20;   //!
   TBranch        *b_ct3PtCut20;   //!
   TBranch        *b_ct4PtCut20;   //!
   TBranch        *b_ct5PtCut20;   //!
   TBranch        *b_ct4j20;   //!
   TBranch        *b_ct4j10;   //!
   TBranch        *b_ct4j15;   //!
   TBranch        *b_ct4j;   //!
   TBranch        *b_dr11;   //!
   TBranch        *b_dr21;   //!
   TBranch        *b_dr31;   //!
   TBranch        *b_dr41;   //!
   TBranch        *b_dr12;   //!
   TBranch        *b_dr22;   //!
   TBranch        *b_dr32;   //!
   TBranch        *b_dr42;   //!
   TBranch        *b_dr13;   //!
   TBranch        *b_dr23;   //!
   TBranch        *b_dr33;   //!
   TBranch        *b_dr43;   //!
   TBranch        *b_dr14;   //!
   TBranch        *b_dr24;   //!
   TBranch        *b_dr34;   //!
   TBranch        *b_dr44;   //!
   TBranch        *b_t11;   //!
   TBranch        *b_t21;   //!
   TBranch        *b_t31;   //!
   TBranch        *b_t41;   //!
   TBranch        *b_t12;   //!
   TBranch        *b_t22;   //!
   TBranch        *b_t32;   //!
   TBranch        *b_t42;   //!
   TBranch        *b_t13;   //!
   TBranch        *b_t23;   //!
   TBranch        *b_t33;   //!
   TBranch        *b_t43;   //!
   TBranch        *b_t14;   //!
   TBranch        *b_t24;   //!
   TBranch        *b_t34;   //!
   TBranch        *b_t44;   //!
   TBranch        *b_isGenMatched;   //!
   TBranch        *b_genMatchedCollId;   //!
   TBranch        *b_genMatchedPt;   //!
   TBranch        *b_genMatchedEta;   //!
   TBranch        *b_genMatchedPhi;   //!
   TBranch        *b_genMomId;   //!
   TBranch        *b_genGrandMomId;   //!
   TBranch        *b_genNSiblings;   //!
   TBranch        *b_genCalIsoDR03;   //!
   TBranch        *b_genCalIsoDR04;   //!
   TBranch        *b_genTrkIsoDR03;   //!
   TBranch        *b_genTrkIsoDR04;   //!
   TBranch        *b_nGp;   //!
   TBranch        *b_simVtxX;   //!
   TBranch        *b_simVtxY;   //!
   TBranch        *b_simVtxZ;   //!
   TBranch        *b_ptHat;   //!
   TBranch        *b_gpEt;   //!
   TBranch        *b_gpEta;   //!
   TBranch        *b_gpCalIsoDR04;   //!
   TBranch        *b_gpCalIsoDR03;   //!
   TBranch        *b_gpTrkIsoDR03;   //!
   TBranch        *b_gpTrkIsoDR04;   //!
   TBranch        *b_gpStatus;   //!
   TBranch        *b_gpCollId;   //!
   TBranch        *b_gpId;   //!
   TBranch        *b_gpMomId;   //!

};


void setupPhotonTree(TTree *t,Photons &tPhotons,bool doCheck = 0)
{
   // Set branch addresses and branch pointers
   if (t->GetBranch("run")) t->SetBranchAddress("run", &tPhotons.run, &tPhotons.b_run);
   if (t->GetBranch("event")) t->SetBranchAddress("event", &tPhotons.event, &tPhotons.b_event);
   if (t->GetBranch("bunchCrossing")) t->SetBranchAddress("bunchCrossing", &tPhotons.bunchCrossing, &tPhotons.b_bunchCrossing);
   if (t->GetBranch("luminosityBlock")) t->SetBranchAddress("luminosityBlock", &tPhotons.luminosityBlock, &tPhotons.b_luminosityBlock);
   if (t->GetBranch("nPhotons")) t->SetBranchAddress("nPhotons", &tPhotons.nPhotons, &tPhotons.b_nPhotons);
   if (t->GetBranch("pt")) t->SetBranchAddress("pt", tPhotons.pt, &tPhotons.b_pt);
   if (t->GetBranch("energy")) t->SetBranchAddress("energy", tPhotons.energy, &tPhotons.b_energy);
   if (t->GetBranch("rawEnergy")) t->SetBranchAddress("rawEnergy", tPhotons.rawEnergy, &tPhotons.b_rawEnergy);
   if (t->GetBranch("eta")) t->SetBranchAddress("eta", tPhotons.eta, &tPhotons.b_eta);
   if (t->GetBranch("phi")) t->SetBranchAddress("phi", tPhotons.phi, &tPhotons.b_phi);
   if (t->GetBranch("r9")) t->SetBranchAddress("r9", tPhotons.r9, &tPhotons.b_r9);
   if (t->GetBranch("isEB")) t->SetBranchAddress("isEB", tPhotons.isEB, &tPhotons.b_isEB);
   if (t->GetBranch("isEBGap")) t->SetBranchAddress("isEBGap", tPhotons.isEBGap, &tPhotons.b_isEBGap);
   if (t->GetBranch("isEEGap")) t->SetBranchAddress("isEEGap", tPhotons.isEEGap, &tPhotons.b_isEEGap);
   if (t->GetBranch("isEBEEGap")) t->SetBranchAddress("isEBEEGap", tPhotons.isEBEEGap, &tPhotons.b_isEBEEGap);
   if (t->GetBranch("isTransGap")) t->SetBranchAddress("isTransGap", tPhotons.isTransGap, &tPhotons.b_isTransGap);
   if (t->GetBranch("preshowerEnergy")) t->SetBranchAddress("preshowerEnergy", tPhotons.preshowerEnergy, &tPhotons.b_preshowerEnergy);
   if (t->GetBranch("numOfPreshClusters")) t->SetBranchAddress("numOfPreshClusters", tPhotons.numOfPreshClusters, &tPhotons.b_numOfPreshClusters);
   if (t->GetBranch("ESRatio")) t->SetBranchAddress("ESRatio", tPhotons.ESRatio, &tPhotons.b_ESRatio);
   if (t->GetBranch("clustersSize")) t->SetBranchAddress("clustersSize", tPhotons.clustersSize, &tPhotons.b_clustersSize);
   if (t->GetBranch("scSize")) t->SetBranchAddress("scSize", tPhotons.scSize, &tPhotons.b_scSize);
   if (t->GetBranch("phiWidth")) t->SetBranchAddress("phiWidth", tPhotons.phiWidth, &tPhotons.b_phiWidth);
   if (t->GetBranch("etaWidth")) t->SetBranchAddress("etaWidth", tPhotons.etaWidth, &tPhotons.b_etaWidth);
   if (t->GetBranch("scEta")) t->SetBranchAddress("scEta", tPhotons.scEta, &tPhotons.b_scEta);
   if (t->GetBranch("scPhi")) t->SetBranchAddress("scPhi", tPhotons.scPhi, &tPhotons.b_scPhi);
   if (t->GetBranch("sigmaEtaEta")) t->SetBranchAddress("sigmaEtaEta", tPhotons.sigmaEtaEta, &tPhotons.b_sigmaEtaEta);
   if (t->GetBranch("sigmaIetaIeta")) t->SetBranchAddress("sigmaIetaIeta", tPhotons.sigmaIetaIeta, &tPhotons.b_sigmaIetaIeta);
   if (t->GetBranch("sigmaIphiIphi")) t->SetBranchAddress("sigmaIphiIphi", tPhotons.sigmaIphiIphi, &tPhotons.b_sigmaIphiIphi);
   if (t->GetBranch("sieie50")) t->SetBranchAddress("sieie50", tPhotons.sieie50, &tPhotons.b_sieie50);
   if (t->GetBranch("sieie45")) t->SetBranchAddress("sieie45", tPhotons.sieie45, &tPhotons.b_sieie45);
   if (t->GetBranch("sieie47")) t->SetBranchAddress("sieie47", tPhotons.sieie47, &tPhotons.b_sieie47);
   if (t->GetBranch("sieie42")) t->SetBranchAddress("sieie42", tPhotons.sieie42, &tPhotons.b_sieie42);
   if (t->GetBranch("sieie39")) t->SetBranchAddress("sieie39", tPhotons.sieie39, &tPhotons.b_sieie39);
   if (t->GetBranch("covPhiPhi")) t->SetBranchAddress("covPhiPhi", tPhotons.covPhiPhi, &tPhotons.b_covPhiPhi);
   if (t->GetBranch("covEtaPhi")) t->SetBranchAddress("covEtaPhi", tPhotons.covEtaPhi, &tPhotons.b_covEtaPhi);
   if (t->GetBranch("covEtaEta")) t->SetBranchAddress("covEtaEta", tPhotons.covEtaEta, &tPhotons.b_covEtaEta);
   if (t->GetBranch("r1x5")) t->SetBranchAddress("r1x5", tPhotons.r1x5, &tPhotons.b_r1x5);
   if (t->GetBranch("r2x5")) t->SetBranchAddress("r2x5", tPhotons.r2x5, &tPhotons.b_r2x5);
   if (t->GetBranch("e1x5")) t->SetBranchAddress("e1x5", tPhotons.e1x5, &tPhotons.b_e1x5);
   if (t->GetBranch("e2x5")) t->SetBranchAddress("e2x5", tPhotons.e2x5, &tPhotons.b_e2x5);
   if (t->GetBranch("eMax")) t->SetBranchAddress("eMax", tPhotons.eMax, &tPhotons.b_eMax);
   if (t->GetBranch("e2nd")) t->SetBranchAddress("e2nd", tPhotons.e2nd, &tPhotons.b_e2nd);
   if (t->GetBranch("e2x2")) t->SetBranchAddress("e2x2", tPhotons.e2x2, &tPhotons.b_e2x2);
   if (t->GetBranch("e3x3")) t->SetBranchAddress("e3x3", tPhotons.e3x3, &tPhotons.b_e3x3);
   if (t->GetBranch("e3x2")) t->SetBranchAddress("e3x2", tPhotons.e3x2, &tPhotons.b_e3x2);
   if (t->GetBranch("e4x4")) t->SetBranchAddress("e4x4", tPhotons.e4x4, &tPhotons.b_e4x4);
   if (t->GetBranch("e5x5")) t->SetBranchAddress("e5x5", tPhotons.e5x5, &tPhotons.b_e5x5);
   if (t->GetBranch("e2overe8")) t->SetBranchAddress("e2overe8", tPhotons.e2overe8, &tPhotons.b_e2overe8);
   if (t->GetBranch("eRight")) t->SetBranchAddress("eRight", tPhotons.eRight, &tPhotons.b_eRight);
   if (t->GetBranch("eLeft")) t->SetBranchAddress("eLeft", tPhotons.eLeft, &tPhotons.b_eLeft);
   if (t->GetBranch("eTop")) t->SetBranchAddress("eTop", tPhotons.eTop, &tPhotons.b_eTop);
   if (t->GetBranch("eBottom")) t->SetBranchAddress("eBottom", tPhotons.eBottom, &tPhotons.b_eBottom);
   if (t->GetBranch("e2x5Right")) t->SetBranchAddress("e2x5Right", tPhotons.e2x5Right, &tPhotons.b_e2x5Right);
   if (t->GetBranch("e2x5Left")) t->SetBranchAddress("e2x5Left", tPhotons.e2x5Left, &tPhotons.b_e2x5Left);
   if (t->GetBranch("e2x5Top")) t->SetBranchAddress("e2x5Top", tPhotons.e2x5Top, &tPhotons.b_e2x5Top);
   if (t->GetBranch("e2x5Bottom")) t->SetBranchAddress("e2x5Bottom", tPhotons.e2x5Bottom, &tPhotons.b_e2x5Bottom);
   if (t->GetBranch("seedTime")) t->SetBranchAddress("seedTime", tPhotons.seedTime, &tPhotons.b_seedTime);
   if (t->GetBranch("seedChi2")) t->SetBranchAddress("seedChi2", tPhotons.seedChi2, &tPhotons.b_seedChi2);
   if (t->GetBranch("seedOutOfTimeChi2")) t->SetBranchAddress("seedOutOfTimeChi2", tPhotons.seedOutOfTimeChi2, &tPhotons.b_seedOutOfTimeChi2);
   if (t->GetBranch("seedRecoFlag")) t->SetBranchAddress("seedRecoFlag", tPhotons.seedRecoFlag, &tPhotons.b_seedRecoFlag);
   if (t->GetBranch("seedSeverity")) t->SetBranchAddress("seedSeverity", tPhotons.seedSeverity, &tPhotons.b_seedSeverity);
   if (t->GetBranch("swissCrx")) t->SetBranchAddress("swissCrx", tPhotons.swissCrx, &tPhotons.b_swissCrx);
   if (t->GetBranch("hadronicOverEm")) t->SetBranchAddress("hadronicOverEm", tPhotons.hadronicOverEm, &tPhotons.b_hadronicOverEm);
   if (t->GetBranch("hadronicDepth1OverEm")) t->SetBranchAddress("hadronicDepth1OverEm", tPhotons.hadronicDepth1OverEm, &tPhotons.b_hadronicDepth1OverEm);
   if (t->GetBranch("hadronicDepth2OverEm")) t->SetBranchAddress("hadronicDepth2OverEm", tPhotons.hadronicDepth2OverEm, &tPhotons.b_hadronicDepth2OverEm);
   if (t->GetBranch("ecalRecHitSumEtConeDR04")) t->SetBranchAddress("ecalRecHitSumEtConeDR04", tPhotons.ecalRecHitSumEtConeDR04, &tPhotons.b_ecalRecHitSumEtConeDR04);
   if (t->GetBranch("hcalTowerSumEtConeDR04")) t->SetBranchAddress("hcalTowerSumEtConeDR04", tPhotons.hcalTowerSumEtConeDR04, &tPhotons.b_hcalTowerSumEtConeDR04);
   if (t->GetBranch("hcalDepth1TowerSumEtConeDR04")) t->SetBranchAddress("hcalDepth1TowerSumEtConeDR04", tPhotons.hcalDepth1TowerSumEtConeDR04, &tPhotons.b_hcalDepth1TowerSumEtConeDR04);
   if (t->GetBranch("hcalDepth2TowerSumEtConeDR04")) t->SetBranchAddress("hcalDepth2TowerSumEtConeDR04", tPhotons.hcalDepth2TowerSumEtConeDR04, &tPhotons.b_hcalDepth2TowerSumEtConeDR04);
   if (t->GetBranch("trkSumPtHollowConeDR04")) t->SetBranchAddress("trkSumPtHollowConeDR04", tPhotons.trkSumPtHollowConeDR04, &tPhotons.b_trkSumPtHollowConeDR04);
   if (t->GetBranch("trkSumPtSolidConeDR04")) t->SetBranchAddress("trkSumPtSolidConeDR04", tPhotons.trkSumPtSolidConeDR04, &tPhotons.b_trkSumPtSolidConeDR04);
   if (t->GetBranch("ecalRecHitSumEtConeDR03")) t->SetBranchAddress("ecalRecHitSumEtConeDR03", tPhotons.ecalRecHitSumEtConeDR03, &tPhotons.b_ecalRecHitSumEtConeDR03);
   if (t->GetBranch("hcalTowerSumEtConeDR03")) t->SetBranchAddress("hcalTowerSumEtConeDR03", tPhotons.hcalTowerSumEtConeDR03, &tPhotons.b_hcalTowerSumEtConeDR03);
   if (t->GetBranch("hcalDepth1TowerSumEtConeDR03")) t->SetBranchAddress("hcalDepth1TowerSumEtConeDR03", tPhotons.hcalDepth1TowerSumEtConeDR03, &tPhotons.b_hcalDepth1TowerSumEtConeDR03);
   if (t->GetBranch("hcalDepth2TowerSumEtConeDR03")) t->SetBranchAddress("hcalDepth2TowerSumEtConeDR03", tPhotons.hcalDepth2TowerSumEtConeDR03, &tPhotons.b_hcalDepth2TowerSumEtConeDR03);
   if (t->GetBranch("trkSumPtHollowConeDR03")) t->SetBranchAddress("trkSumPtHollowConeDR03", tPhotons.trkSumPtHollowConeDR03, &tPhotons.b_trkSumPtHollowConeDR03);
   if (t->GetBranch("trkSumPtSolidConeDR03")) t->SetBranchAddress("trkSumPtSolidConeDR03", tPhotons.trkSumPtSolidConeDR03, &tPhotons.b_trkSumPtSolidConeDR03);
   if (t->GetBranch("isEle")) t->SetBranchAddress("isEle", tPhotons.isEle, &tPhotons.b_isEle);
   if (t->GetBranch("hasPixelSeed")) t->SetBranchAddress("hasPixelSeed", tPhotons.hasPixelSeed, &tPhotons.b_hasPixelSeed);
   if (t->GetBranch("detaEle")) t->SetBranchAddress("detaEle", tPhotons.detaEle, &tPhotons.b_detaEle);
   if (t->GetBranch("dphiEle")) t->SetBranchAddress("dphiEle", tPhotons.dphiEle, &tPhotons.b_dphiEle);
   if (t->GetBranch("eleCharge")) t->SetBranchAddress("eleCharge", tPhotons.eleCharge, &tPhotons.b_eleCharge);
   if (t->GetBranch("eleEoverP")) t->SetBranchAddress("eleEoverP", tPhotons.eleEoverP, &tPhotons.b_eleEoverP);
   if (t->GetBranch("c1")) t->SetBranchAddress("c1", tPhotons.c1, &tPhotons.b_c1);
   if (t->GetBranch("c2")) t->SetBranchAddress("c2", tPhotons.c2, &tPhotons.b_c2);
   if (t->GetBranch("c3")) t->SetBranchAddress("c3", tPhotons.c3, &tPhotons.b_c3);
   if (t->GetBranch("c4")) t->SetBranchAddress("c4", tPhotons.c4, &tPhotons.b_c4);
   if (t->GetBranch("c5")) t->SetBranchAddress("c5", tPhotons.c5, &tPhotons.b_c5);
   if (t->GetBranch("r1")) t->SetBranchAddress("r1", tPhotons.r1, &tPhotons.b_r1);
   if (t->GetBranch("r2")) t->SetBranchAddress("r2", tPhotons.r2, &tPhotons.b_r2);
   if (t->GetBranch("r3")) t->SetBranchAddress("r3", tPhotons.r3, &tPhotons.b_r3);
   if (t->GetBranch("r4")) t->SetBranchAddress("r4", tPhotons.r4, &tPhotons.b_r4);
   if (t->GetBranch("r5")) t->SetBranchAddress("r5", tPhotons.r5, &tPhotons.b_r5);
   if (t->GetBranch("t1")) t->SetBranchAddress("t1", tPhotons.t1, &tPhotons.b_t1);
   if (t->GetBranch("t2")) t->SetBranchAddress("t2", tPhotons.t2, &tPhotons.b_t2);
   if (t->GetBranch("t3")) t->SetBranchAddress("t3", tPhotons.t3, &tPhotons.b_t3);
   if (t->GetBranch("t4")) t->SetBranchAddress("t4", tPhotons.t4, &tPhotons.b_t4);
   if (t->GetBranch("t5")) t->SetBranchAddress("t5", tPhotons.t5, &tPhotons.b_t5);
   if (t->GetBranch("t1PtCut")) t->SetBranchAddress("t1PtCut", tPhotons.t1PtCut, &tPhotons.b_t1PtCut);
   if (t->GetBranch("t2PtCut")) t->SetBranchAddress("t2PtCut", tPhotons.t2PtCut, &tPhotons.b_t2PtCut);
   if (t->GetBranch("t3PtCut")) t->SetBranchAddress("t3PtCut", tPhotons.t3PtCut, &tPhotons.b_t3PtCut);
   if (t->GetBranch("t4PtCut")) t->SetBranchAddress("t4PtCut", tPhotons.t4PtCut, &tPhotons.b_t4PtCut);
   if (t->GetBranch("t5PtCut")) t->SetBranchAddress("t5PtCut", tPhotons.t5PtCut, &tPhotons.b_t5PtCut);
   if (t->GetBranch("cc1")) t->SetBranchAddress("cc1", tPhotons.cc1, &tPhotons.b_cc1);
   if (t->GetBranch("cc2")) t->SetBranchAddress("cc2", tPhotons.cc2, &tPhotons.b_cc2);
   if (t->GetBranch("cc3")) t->SetBranchAddress("cc3", tPhotons.cc3, &tPhotons.b_cc3);
   if (t->GetBranch("cc4")) t->SetBranchAddress("cc4", tPhotons.cc4, &tPhotons.b_cc4);
   if (t->GetBranch("cc4j")) t->SetBranchAddress("cc4j", tPhotons.cc4j, &tPhotons.b_cc4j);
   if (t->GetBranch("cc5")) t->SetBranchAddress("cc5", tPhotons.cc5, &tPhotons.b_cc5);
   if (t->GetBranch("cc05")) t->SetBranchAddress("cc05", tPhotons.cc05, &tPhotons.b_cc05);
   if (t->GetBranch("cr1")) t->SetBranchAddress("cr1", tPhotons.cr1, &tPhotons.b_cr1);
   if (t->GetBranch("cr2")) t->SetBranchAddress("cr2", tPhotons.cr2, &tPhotons.b_cr2);
   if (t->GetBranch("cr3")) t->SetBranchAddress("cr3", tPhotons.cr3, &tPhotons.b_cr3);
   if (t->GetBranch("cr4")) t->SetBranchAddress("cr4", tPhotons.cr4, &tPhotons.b_cr4);
   if (t->GetBranch("cr5")) t->SetBranchAddress("cr5", tPhotons.cr5, &tPhotons.b_cr5);
   if (t->GetBranch("cr4j")) t->SetBranchAddress("cr4j", tPhotons.cr4j, &tPhotons.b_cr4j);
   if (t->GetBranch("ct1")) t->SetBranchAddress("ct1", tPhotons.ct1, &tPhotons.b_ct1);
   if (t->GetBranch("ct2")) t->SetBranchAddress("ct2", tPhotons.ct2, &tPhotons.b_ct2);
   if (t->GetBranch("ct3")) t->SetBranchAddress("ct3", tPhotons.ct3, &tPhotons.b_ct3);
   if (t->GetBranch("ct4")) t->SetBranchAddress("ct4", tPhotons.ct4, &tPhotons.b_ct4);
   if (t->GetBranch("ct5")) t->SetBranchAddress("ct5", tPhotons.ct5, &tPhotons.b_ct5);
   if (t->GetBranch("ct1PtCut20")) t->SetBranchAddress("ct1PtCut20", tPhotons.ct1PtCut20, &tPhotons.b_ct1PtCut20);
   if (t->GetBranch("ct2PtCut20")) t->SetBranchAddress("ct2PtCut20", tPhotons.ct2PtCut20, &tPhotons.b_ct2PtCut20);
   if (t->GetBranch("ct3PtCut20")) t->SetBranchAddress("ct3PtCut20", tPhotons.ct3PtCut20, &tPhotons.b_ct3PtCut20);
   if (t->GetBranch("ct4PtCut20")) t->SetBranchAddress("ct4PtCut20", tPhotons.ct4PtCut20, &tPhotons.b_ct4PtCut20);
   if (t->GetBranch("ct5PtCut20")) t->SetBranchAddress("ct5PtCut20", tPhotons.ct5PtCut20, &tPhotons.b_ct5PtCut20);
   if (t->GetBranch("ct4j20")) t->SetBranchAddress("ct4j20", tPhotons.ct4j20, &tPhotons.b_ct4j20);
   if (t->GetBranch("ct4j10")) t->SetBranchAddress("ct4j10", tPhotons.ct4j10, &tPhotons.b_ct4j10);
   if (t->GetBranch("ct4j15")) t->SetBranchAddress("ct4j15", tPhotons.ct4j15, &tPhotons.b_ct4j15);
   if (t->GetBranch("ct4j")) t->SetBranchAddress("ct4j", tPhotons.ct4j, &tPhotons.b_ct4j);
   if (t->GetBranch("dr11")) t->SetBranchAddress("dr11", tPhotons.dr11, &tPhotons.b_dr11);
   if (t->GetBranch("dr21")) t->SetBranchAddress("dr21", tPhotons.dr21, &tPhotons.b_dr21);
   if (t->GetBranch("dr31")) t->SetBranchAddress("dr31", tPhotons.dr31, &tPhotons.b_dr31);
   if (t->GetBranch("dr41")) t->SetBranchAddress("dr41", tPhotons.dr41, &tPhotons.b_dr41);
   if (t->GetBranch("dr12")) t->SetBranchAddress("dr12", tPhotons.dr12, &tPhotons.b_dr12);
   if (t->GetBranch("dr22")) t->SetBranchAddress("dr22", tPhotons.dr22, &tPhotons.b_dr22);
   if (t->GetBranch("dr32")) t->SetBranchAddress("dr32", tPhotons.dr32, &tPhotons.b_dr32);
   if (t->GetBranch("dr42")) t->SetBranchAddress("dr42", tPhotons.dr42, &tPhotons.b_dr42);
   if (t->GetBranch("dr13")) t->SetBranchAddress("dr13", tPhotons.dr13, &tPhotons.b_dr13);
   if (t->GetBranch("dr23")) t->SetBranchAddress("dr23", tPhotons.dr23, &tPhotons.b_dr23);
   if (t->GetBranch("dr33")) t->SetBranchAddress("dr33", tPhotons.dr33, &tPhotons.b_dr33);
   if (t->GetBranch("dr43")) t->SetBranchAddress("dr43", tPhotons.dr43, &tPhotons.b_dr43);
   if (t->GetBranch("dr14")) t->SetBranchAddress("dr14", tPhotons.dr14, &tPhotons.b_dr14);
   if (t->GetBranch("dr24")) t->SetBranchAddress("dr24", tPhotons.dr24, &tPhotons.b_dr24);
   if (t->GetBranch("dr34")) t->SetBranchAddress("dr34", tPhotons.dr34, &tPhotons.b_dr34);
   if (t->GetBranch("dr44")) t->SetBranchAddress("dr44", tPhotons.dr44, &tPhotons.b_dr44);
   if (t->GetBranch("t11")) t->SetBranchAddress("t11", tPhotons.t11, &tPhotons.b_t11);
   if (t->GetBranch("t21")) t->SetBranchAddress("t21", tPhotons.t21, &tPhotons.b_t21);
   if (t->GetBranch("t31")) t->SetBranchAddress("t31", tPhotons.t31, &tPhotons.b_t31);
   if (t->GetBranch("t41")) t->SetBranchAddress("t41", tPhotons.t41, &tPhotons.b_t41);
   if (t->GetBranch("t12")) t->SetBranchAddress("t12", tPhotons.t12, &tPhotons.b_t12);
   if (t->GetBranch("t22")) t->SetBranchAddress("t22", tPhotons.t22, &tPhotons.b_t22);
   if (t->GetBranch("t32")) t->SetBranchAddress("t32", tPhotons.t32, &tPhotons.b_t32);
   if (t->GetBranch("t42")) t->SetBranchAddress("t42", tPhotons.t42, &tPhotons.b_t42);
   if (t->GetBranch("t13")) t->SetBranchAddress("t13", tPhotons.t13, &tPhotons.b_t13);
   if (t->GetBranch("t23")) t->SetBranchAddress("t23", tPhotons.t23, &tPhotons.b_t23);
   if (t->GetBranch("t33")) t->SetBranchAddress("t33", tPhotons.t33, &tPhotons.b_t33);
   if (t->GetBranch("t43")) t->SetBranchAddress("t43", tPhotons.t43, &tPhotons.b_t43);
   if (t->GetBranch("t14")) t->SetBranchAddress("t14", tPhotons.t14, &tPhotons.b_t14);
   if (t->GetBranch("t24")) t->SetBranchAddress("t24", tPhotons.t24, &tPhotons.b_t24);
   if (t->GetBranch("t34")) t->SetBranchAddress("t34", tPhotons.t34, &tPhotons.b_t34);
   if (t->GetBranch("t44")) t->SetBranchAddress("t44", tPhotons.t44, &tPhotons.b_t44);
   if (t->GetBranch("isGenMatched")) t->SetBranchAddress("isGenMatched", tPhotons.isGenMatched, &tPhotons.b_isGenMatched);
   if (t->GetBranch("genMatchedCollId")) t->SetBranchAddress("genMatchedCollId", tPhotons.genMatchedCollId, &tPhotons.b_genMatchedCollId);
   if (t->GetBranch("genMatchedPt")) t->SetBranchAddress("genMatchedPt", tPhotons.genMatchedPt, &tPhotons.b_genMatchedPt);
   if (t->GetBranch("genMatchedEta")) t->SetBranchAddress("genMatchedEta", tPhotons.genMatchedEta, &tPhotons.b_genMatchedEta);
   if (t->GetBranch("genMatchedPhi")) t->SetBranchAddress("genMatchedPhi", tPhotons.genMatchedPhi, &tPhotons.b_genMatchedPhi);
   if (t->GetBranch("genMomId")) t->SetBranchAddress("genMomId", tPhotons.genMomId, &tPhotons.b_genMomId);
   if (t->GetBranch("genGrandMomId")) t->SetBranchAddress("genGrandMomId", tPhotons.genGrandMomId, &tPhotons.b_genGrandMomId);
   if (t->GetBranch("genNSiblings")) t->SetBranchAddress("genNSiblings", tPhotons.genNSiblings, &tPhotons.b_genNSiblings);
   if (t->GetBranch("genCalIsoDR03")) t->SetBranchAddress("genCalIsoDR03", tPhotons.genCalIsoDR03, &tPhotons.b_genCalIsoDR03);
   if (t->GetBranch("genCalIsoDR04")) t->SetBranchAddress("genCalIsoDR04", tPhotons.genCalIsoDR04, &tPhotons.b_genCalIsoDR04);
   if (t->GetBranch("genTrkIsoDR03")) t->SetBranchAddress("genTrkIsoDR03", tPhotons.genTrkIsoDR03, &tPhotons.b_genTrkIsoDR03);
   if (t->GetBranch("genTrkIsoDR04")) t->SetBranchAddress("genTrkIsoDR04", tPhotons.genTrkIsoDR04, &tPhotons.b_genTrkIsoDR04);
   if (t->GetBranch("nGp")) t->SetBranchAddress("nGp", &tPhotons.nGp, &tPhotons.b_nGp);
   if (t->GetBranch("simVtxX")) t->SetBranchAddress("simVtxX", &tPhotons.simVtxX, &tPhotons.b_simVtxX);
   if (t->GetBranch("simVtxY")) t->SetBranchAddress("simVtxY", &tPhotons.simVtxY, &tPhotons.b_simVtxY);
   if (t->GetBranch("simVtxZ")) t->SetBranchAddress("simVtxZ", &tPhotons.simVtxZ, &tPhotons.b_simVtxZ);
   if (t->GetBranch("ptHat")) t->SetBranchAddress("ptHat", &tPhotons.ptHat, &tPhotons.b_ptHat);
   if (t->GetBranch("gpEt")) t->SetBranchAddress("gpEt", tPhotons.gpEt, &tPhotons.b_gpEt);
   if (t->GetBranch("gpEta")) t->SetBranchAddress("gpEta", tPhotons.gpEta, &tPhotons.b_gpEta);
   if (t->GetBranch("gpCalIsoDR04")) t->SetBranchAddress("gpCalIsoDR04", tPhotons.gpCalIsoDR04, &tPhotons.b_gpCalIsoDR04);
   if (t->GetBranch("gpCalIsoDR03")) t->SetBranchAddress("gpCalIsoDR03", tPhotons.gpCalIsoDR03, &tPhotons.b_gpCalIsoDR03);
   if (t->GetBranch("gpTrkIsoDR03")) t->SetBranchAddress("gpTrkIsoDR03", tPhotons.gpTrkIsoDR03, &tPhotons.b_gpTrkIsoDR03);
   if (t->GetBranch("gpTrkIsoDR04")) t->SetBranchAddress("gpTrkIsoDR04", tPhotons.gpTrkIsoDR04, &tPhotons.b_gpTrkIsoDR04);
   if (t->GetBranch("gpStatus")) t->SetBranchAddress("gpStatus", tPhotons.gpStatus, &tPhotons.b_gpStatus);
   if (t->GetBranch("gpCollId")) t->SetBranchAddress("gpCollId", tPhotons.gpCollId, &tPhotons.b_gpCollId);
   if (t->GetBranch("gpId")) t->SetBranchAddress("gpId", tPhotons.gpId, &tPhotons.b_gpId);
   if (t->GetBranch("gpMomId")) t->SetBranchAddress("gpMomId", tPhotons.gpMomId, &tPhotons.b_gpMomId);
   if (doCheck) {
      if (t->GetMaximum("nPhotons")>126) { cout <<"FATAL ERROR: Arrary size of nPhotons too small!!!  "<<t->GetMaximum("nPhotons")<<endl; exit(0);
 }      if (t->GetMaximum("nGp")>230) { cout <<"FATAL ERROR: Arrary size of nGp too small!!!  "<<t->GetMaximum("nGp")<<endl; exit(0);
 }   }
}

