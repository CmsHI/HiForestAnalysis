//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Sat Oct 24 17:09:15 2015 by ROOT version 5.32/00
// from TTree EventTree/Event data
// found on file: ../../HiForest2015/Pyquen_Unquenched_AllQCDPhoton30_PhotonFilter20GeV_eta24_TuneZ2_PbPb_5020GeV_0.root
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
   Photons(){
      nPU = 0;
   puBX = 0;
   puTrue = 0;
   mcPID = 0;
   mcStatus = 0;
   mcVtx_x = 0;
   mcVtx_y = 0;
   mcVtx_z = 0;
   mcPt = 0;
   mcEta = 0;
   mcPhi = 0;
   mcE = 0;
   mcEt = 0;
   mcMass = 0;
   mcParentage = 0;
   mcMomPID = 0;
   mcMomPt = 0;
   mcMomEta = 0;
   mcMomPhi = 0;
   mcMomMass = 0;
   mcGMomPID = 0;
   mcIndex = 0;
   mcCalIsoDR03 = 0;
   mcCalIsoDR04 = 0;
   mcTrkIsoDR03 = 0;
   mcTrkIsoDR04 = 0;
   eleCharge = 0;
   eleChargeConsistent = 0;
   eleEn = 0;
   eleD0 = 0;
   eleDz = 0;
   eleD0Err = 0;
   eleDzErr = 0;
   eleTrkPt = 0;
   eleTrkEta = 0;
   eleTrkPhi = 0;
   eleTrkCharge = 0;
   eleTrkChi2 = 0;
   eleTrkNdof = 0;
   eleTrkNormalizedChi2 = 0;
   elePt = 0;
   eleEta = 0;
   elePhi = 0;
   eleSCEn = 0;
   eleESEn = 0;
   eleSCEta = 0;
   eleSCPhi = 0;
   eleSCRawEn = 0;
   eleSCEtaWidth = 0;
   eleSCPhiWidth = 0;
   eleHoverE = 0;
   eleEoverP = 0;
   eleEoverPInv = 0;
   eleBrem = 0;
   eledEtaAtVtx = 0;
   eledPhiAtVtx = 0;
   eleSigmaIEtaIEta = 0;
   eleSigmaIEtaIEta_2012 = 0;
   eleSigmaIPhiIPhi = 0;
   eleMissHits = 0;
   eleESEffSigmaRR = 0;
   elePFChIso = 0;
   elePFPhoIso = 0;
   elePFNeuIso = 0;
   elePFPUIso = 0;
   eleBC1E = 0;
   eleBC1Eta = 0;
   eleBC2E = 0;
   eleBC2Eta = 0;
   phoE = 0;
   phoEt = 0;
   phoEta = 0;
   phoPhi = 0;
   phoSCE = 0;
   phoSCRawE = 0;
   phoESEn = 0;
   phoSCEta = 0;
   phoSCPhi = 0;
   phoSCEtaWidth = 0;
   phoSCPhiWidth = 0;
   phoSCBrem = 0;
   phohasPixelSeed = 0;
   phoR9 = 0;
   phoHoverE = 0;
   phoSigmaIEtaIEta = 0;
   phoE1x3 = 0;
   phoE2x2 = 0;
   phoE2x5Max = 0;
   phoE5x5 = 0;
   phoESEffSigmaRR = 0;
   phoSigmaIEtaIEta_2012 = 0;
   phoSigmaIEtaIPhi_2012 = 0;
   phoSigmaIPhiIPhi_2012 = 0;
   phoE1x3_2012 = 0;
   phoE2x2_2012 = 0;
   phoE2x5Max_2012 = 0;
   phoE5x5_2012 = 0;
   phoBC1E = 0;
   phoBC1Eta = 0;
   phoBC2E = 0;
   phoBC2Eta = 0;
   pho_ecalClusterIsoR2 = 0;
   pho_ecalClusterIsoR3 = 0;
   pho_ecalClusterIsoR4 = 0;
   pho_ecalClusterIsoR5 = 0;
   pho_hcalRechitIsoR1 = 0;
   pho_hcalRechitIsoR2 = 0;
   pho_hcalRechitIsoR3 = 0;
   pho_hcalRechitIsoR4 = 0;
   pho_hcalRechitIsoR5 = 0;
   pho_trackIsoR1PtCut20 = 0;
   pho_trackIsoR2PtCut20 = 0;
   pho_trackIsoR3PtCut20 = 0;
   pho_trackIsoR4PtCut20 = 0;
   pho_trackIsoR5PtCut20 = 0;
   pho_swissCrx = 0;
   pho_seedTime = 0;
   pfcIso1 = 0;
   pfcIso2 = 0;
   pfcIso3 = 0;
   pfcIso4 = 0;
   pfcIso5 = 0;
   pfpIso1 = 0;
   pfpIso2 = 0;
   pfpIso3 = 0;
   pfpIso4 = 0;
   pfpIso5 = 0;
   pfnIso1 = 0;
   pfnIso2 = 0;
   pfnIso3 = 0;
   pfnIso4 = 0;
   pfnIso5 = 0;
   pfcVsIso1 = 0;
   pfcVsIso2 = 0;
   pfcVsIso3 = 0;
   pfcVsIso4 = 0;
   pfcVsIso5 = 0;
   pfcVsIso1th1 = 0;
   pfcVsIso2th1 = 0;
   pfcVsIso3th1 = 0;
   pfcVsIso4th1 = 0;
   pfcVsIso5th1 = 0;
   pfcVsIso1th2 = 0;
   pfcVsIso2th2 = 0;
   pfcVsIso3th2 = 0;
   pfcVsIso4th2 = 0;
   pfcVsIso5th2 = 0;
   pfnVsIso1 = 0;
   pfnVsIso2 = 0;
   pfnVsIso3 = 0;
   pfnVsIso4 = 0;
   pfnVsIso5 = 0;
   pfnVsIso1th1 = 0;
   pfnVsIso2th1 = 0;
   pfnVsIso3th1 = 0;
   pfnVsIso4th1 = 0;
   pfnVsIso5th1 = 0;
   pfnVsIso1th2 = 0;
   pfnVsIso2th2 = 0;
   pfnVsIso3th2 = 0;
   pfnVsIso4th2 = 0;
   pfnVsIso5th2 = 0;
   pfpVsIso1 = 0;
   pfpVsIso2 = 0;
   pfpVsIso3 = 0;
   pfpVsIso4 = 0;
   pfpVsIso5 = 0;
   pfpVsIso1th1 = 0;
   pfpVsIso2th1 = 0;
   pfpVsIso3th1 = 0;
   pfpVsIso4th1 = 0;
   pfpVsIso5th1 = 0;
   pfpVsIso1th2 = 0;
   pfpVsIso2th2 = 0;
   pfpVsIso3th2 = 0;
   pfpVsIso4th2 = 0;
   pfpVsIso5th2 = 0;
   towerIso1 = 0;
   towerIso2 = 0;
   towerIso3 = 0;
   towerIso4 = 0;
   towerIso5 = 0;
   towerVsIso1 = 0;
   towerVsIso2 = 0;
   towerVsIso3 = 0;
   towerVsIso4 = 0;
   towerVsIso5 = 0;
   towerVsSubIso1 = 0;
   towerVsSubIso2 = 0;
   towerVsSubIso3 = 0;
   towerVsSubIso4 = 0;
   towerVsSubIso5 = 0;
   muPt = 0;
   muEta = 0;
   muPhi = 0;
   muCharge = 0;
   muType = 0;
   muIsGood = 0;
   muD0 = 0;
   muDz = 0;
   muChi2NDF = 0;
   muInnerD0 = 0;
   muInnerDz = 0;
   muTrkLayers = 0;
   muPixelLayers = 0;
   muPixelHits = 0;
   muMuonHits = 0;
   muTrkQuality = 0;
   muStations = 0;
   muIsoTrk = 0;
   muPFChIso = 0;
   muPFPhoIso = 0;
   muPFNeuIso = 0;
   muPFPUIso = 0;

   };
   ~Photons(){};

   // Declaration of leaf types
   Int_t           run;
   Long64_t        event;
   Int_t           lumis;
   Bool_t          isData;
   Int_t           nPUInfo;
   vector<int>     *nPU;
   vector<int>     *puBX;
   vector<float>   *puTrue;
   Int_t           nMC;
   vector<int>     *mcPID;
   vector<int>     *mcStatus;
   vector<float>   *mcVtx_x;
   vector<float>   *mcVtx_y;
   vector<float>   *mcVtx_z;
   vector<float>   *mcPt;
   vector<float>   *mcEta;
   vector<float>   *mcPhi;
   vector<float>   *mcE;
   vector<float>   *mcEt;
   vector<float>   *mcMass;
   vector<int>     *mcParentage;
   vector<int>     *mcMomPID;
   vector<float>   *mcMomPt;
   vector<float>   *mcMomEta;
   vector<float>   *mcMomPhi;
   vector<float>   *mcMomMass;
   vector<int>     *mcGMomPID;
   vector<int>     *mcIndex;
   vector<float>   *mcCalIsoDR03;
   vector<float>   *mcCalIsoDR04;
   vector<float>   *mcTrkIsoDR03;
   vector<float>   *mcTrkIsoDR04;
   Int_t           nEle;
   vector<int>     *eleCharge;
   vector<int>     *eleChargeConsistent;
   vector<float>   *eleEn;
   vector<float>   *eleD0;
   vector<float>   *eleDz;
   vector<float>   *eleD0Err;
   vector<float>   *eleDzErr;
   vector<float>   *eleTrkPt;
   vector<float>   *eleTrkEta;
   vector<float>   *eleTrkPhi;
   vector<int>     *eleTrkCharge;
   vector<float>   *eleTrkChi2;
   vector<float>   *eleTrkNdof;
   vector<float>   *eleTrkNormalizedChi2;
   vector<float>   *elePt;
   vector<float>   *eleEta;
   vector<float>   *elePhi;
   vector<float>   *eleSCEn;
   vector<float>   *eleESEn;
   vector<float>   *eleSCEta;
   vector<float>   *eleSCPhi;
   vector<float>   *eleSCRawEn;
   vector<float>   *eleSCEtaWidth;
   vector<float>   *eleSCPhiWidth;
   vector<float>   *eleHoverE;
   vector<float>   *eleEoverP;
   vector<float>   *eleEoverPInv;
   vector<float>   *eleBrem;
   vector<float>   *eledEtaAtVtx;
   vector<float>   *eledPhiAtVtx;
   vector<float>   *eleSigmaIEtaIEta;
   vector<float>   *eleSigmaIEtaIEta_2012;
   vector<float>   *eleSigmaIPhiIPhi;
   vector<int>     *eleMissHits;
   vector<float>   *eleESEffSigmaRR;
   vector<float>   *elePFChIso;
   vector<float>   *elePFPhoIso;
   vector<float>   *elePFNeuIso;
   vector<float>   *elePFPUIso;
   vector<float>   *eleBC1E;
   vector<float>   *eleBC1Eta;
   vector<float>   *eleBC2E;
   vector<float>   *eleBC2Eta;
   Int_t           nPho;
   vector<float>   *phoE;
   vector<float>   *phoEt;
   vector<float>   *phoEta;
   vector<float>   *phoPhi;
   vector<float>   *phoSCE;
   vector<float>   *phoSCRawE;
   vector<float>   *phoESEn;
   vector<float>   *phoSCEta;
   vector<float>   *phoSCPhi;
   vector<float>   *phoSCEtaWidth;
   vector<float>   *phoSCPhiWidth;
   vector<float>   *phoSCBrem;
   vector<int>     *phohasPixelSeed;
   vector<float>   *phoR9;
   vector<float>   *phoHoverE;
   vector<float>   *phoSigmaIEtaIEta;
   vector<float>   *phoE1x3;
   vector<float>   *phoE2x2;
   vector<float>   *phoE2x5Max;
   vector<float>   *phoE5x5;
   vector<float>   *phoESEffSigmaRR;
   vector<float>   *phoSigmaIEtaIEta_2012;
   vector<float>   *phoSigmaIEtaIPhi_2012;
   vector<float>   *phoSigmaIPhiIPhi_2012;
   vector<float>   *phoE1x3_2012;
   vector<float>   *phoE2x2_2012;
   vector<float>   *phoE2x5Max_2012;
   vector<float>   *phoE5x5_2012;
   vector<float>   *phoBC1E;
   vector<float>   *phoBC1Eta;
   vector<float>   *phoBC2E;
   vector<float>   *phoBC2Eta;
   vector<float>   *pho_ecalClusterIsoR2;
   vector<float>   *pho_ecalClusterIsoR3;
   vector<float>   *pho_ecalClusterIsoR4;
   vector<float>   *pho_ecalClusterIsoR5;
   vector<float>   *pho_hcalRechitIsoR1;
   vector<float>   *pho_hcalRechitIsoR2;
   vector<float>   *pho_hcalRechitIsoR3;
   vector<float>   *pho_hcalRechitIsoR4;
   vector<float>   *pho_hcalRechitIsoR5;
   vector<float>   *pho_trackIsoR1PtCut20;
   vector<float>   *pho_trackIsoR2PtCut20;
   vector<float>   *pho_trackIsoR3PtCut20;
   vector<float>   *pho_trackIsoR4PtCut20;
   vector<float>   *pho_trackIsoR5PtCut20;
   vector<float>   *pho_swissCrx;
   vector<float>   *pho_seedTime;
   vector<float>   *pfcIso1;
   vector<float>   *pfcIso2;
   vector<float>   *pfcIso3;
   vector<float>   *pfcIso4;
   vector<float>   *pfcIso5;
   vector<float>   *pfpIso1;
   vector<float>   *pfpIso2;
   vector<float>   *pfpIso3;
   vector<float>   *pfpIso4;
   vector<float>   *pfpIso5;
   vector<float>   *pfnIso1;
   vector<float>   *pfnIso2;
   vector<float>   *pfnIso3;
   vector<float>   *pfnIso4;
   vector<float>   *pfnIso5;
   vector<float>   *pfcVsIso1;
   vector<float>   *pfcVsIso2;
   vector<float>   *pfcVsIso3;
   vector<float>   *pfcVsIso4;
   vector<float>   *pfcVsIso5;
   vector<float>   *pfcVsIso1th1;
   vector<float>   *pfcVsIso2th1;
   vector<float>   *pfcVsIso3th1;
   vector<float>   *pfcVsIso4th1;
   vector<float>   *pfcVsIso5th1;
   vector<float>   *pfcVsIso1th2;
   vector<float>   *pfcVsIso2th2;
   vector<float>   *pfcVsIso3th2;
   vector<float>   *pfcVsIso4th2;
   vector<float>   *pfcVsIso5th2;
   vector<float>   *pfnVsIso1;
   vector<float>   *pfnVsIso2;
   vector<float>   *pfnVsIso3;
   vector<float>   *pfnVsIso4;
   vector<float>   *pfnVsIso5;
   vector<float>   *pfnVsIso1th1;
   vector<float>   *pfnVsIso2th1;
   vector<float>   *pfnVsIso3th1;
   vector<float>   *pfnVsIso4th1;
   vector<float>   *pfnVsIso5th1;
   vector<float>   *pfnVsIso1th2;
   vector<float>   *pfnVsIso2th2;
   vector<float>   *pfnVsIso3th2;
   vector<float>   *pfnVsIso4th2;
   vector<float>   *pfnVsIso5th2;
   vector<float>   *pfpVsIso1;
   vector<float>   *pfpVsIso2;
   vector<float>   *pfpVsIso3;
   vector<float>   *pfpVsIso4;
   vector<float>   *pfpVsIso5;
   vector<float>   *pfpVsIso1th1;
   vector<float>   *pfpVsIso2th1;
   vector<float>   *pfpVsIso3th1;
   vector<float>   *pfpVsIso4th1;
   vector<float>   *pfpVsIso5th1;
   vector<float>   *pfpVsIso1th2;
   vector<float>   *pfpVsIso2th2;
   vector<float>   *pfpVsIso3th2;
   vector<float>   *pfpVsIso4th2;
   vector<float>   *pfpVsIso5th2;
   vector<float>   *towerIso1;
   vector<float>   *towerIso2;
   vector<float>   *towerIso3;
   vector<float>   *towerIso4;
   vector<float>   *towerIso5;
   vector<float>   *towerVsIso1;
   vector<float>   *towerVsIso2;
   vector<float>   *towerVsIso3;
   vector<float>   *towerVsIso4;
   vector<float>   *towerVsIso5;
   vector<float>   *towerVsSubIso1;
   vector<float>   *towerVsSubIso2;
   vector<float>   *towerVsSubIso3;
   vector<float>   *towerVsSubIso4;
   vector<float>   *towerVsSubIso5;
   Int_t           nMu;
   vector<float>   *muPt;
   vector<float>   *muEta;
   vector<float>   *muPhi;
   vector<int>     *muCharge;
   vector<int>     *muType;
   vector<int>     *muIsGood;
   vector<float>   *muD0;
   vector<float>   *muDz;
   vector<float>   *muChi2NDF;
   vector<float>   *muInnerD0;
   vector<float>   *muInnerDz;
   vector<int>     *muTrkLayers;
   vector<int>     *muPixelLayers;
   vector<int>     *muPixelHits;
   vector<int>     *muMuonHits;
   vector<int>     *muTrkQuality;
   vector<int>     *muStations;
   vector<float>   *muIsoTrk;
   vector<float>   *muPFChIso;
   vector<float>   *muPFPhoIso;
   vector<float>   *muPFNeuIso;
   vector<float>   *muPFPUIso;
   vector<bool>    *isGenMatched; // added by hand
   vector<int>     *genMatchedIdx; // added by hand
   
   // List of branches
   TBranch        *b_run;   //!
   TBranch        *b_event;   //!
   TBranch        *b_lumis;   //!
   TBranch        *b_isData;   //!
   TBranch        *b_nPUInfo;   //!
   TBranch        *b_nPU;   //!
   TBranch        *b_puBX;   //!
   TBranch        *b_puTrue;   //!
   TBranch        *b_nMC;   //!
   TBranch        *b_mcPID;   //!
   TBranch        *b_mcStatus;   //!
   TBranch        *b_mcVtx_x;   //!
   TBranch        *b_mcVtx_y;   //!
   TBranch        *b_mcVtx_z;   //!
   TBranch        *b_mcPt;   //!
   TBranch        *b_mcEta;   //!
   TBranch        *b_mcPhi;   //!
   TBranch        *b_mcE;   //!
   TBranch        *b_mcEt;   //!
   TBranch        *b_mcMass;   //!
   TBranch        *b_mcParentage;   //!
   TBranch        *b_mcMomPID;   //!
   TBranch        *b_mcMomPt;   //!
   TBranch        *b_mcMomEta;   //!
   TBranch        *b_mcMomPhi;   //!
   TBranch        *b_mcMomMass;   //!
   TBranch        *b_mcGMomPID;   //!
   TBranch        *b_mcIndex;   //!
   TBranch        *b_mcCalIsoDR03;   //!
   TBranch        *b_mcCalIsoDR04;   //!
   TBranch        *b_mcTrkIsoDR03;   //!
   TBranch        *b_mcTrkIsoDR04;   //!
   TBranch        *b_nEle;   //!
   TBranch        *b_eleCharge;   //!
   TBranch        *b_eleChargeConsistent;   //!
   TBranch        *b_eleEn;   //!
   TBranch        *b_eleD0;   //!
   TBranch        *b_eleDz;   //!
   TBranch        *b_eleD0Err;   //!
   TBranch        *b_eleDzErr;   //!
   TBranch        *b_eleTrkPt;   //!
   TBranch        *b_eleTrkEta;   //!
   TBranch        *b_eleTrkPhi;   //!
   TBranch        *b_eleTrkCharge;   //!
   TBranch        *b_eleTrkChi2;   //!
   TBranch        *b_eleTrkNdof;   //!
   TBranch        *b_eleTrkNormalizedChi2;   //!
   TBranch        *b_elePt;   //!
   TBranch        *b_eleEta;   //!
   TBranch        *b_elePhi;   //!
   TBranch        *b_eleSCEn;   //!
   TBranch        *b_eleESEn;   //!
   TBranch        *b_eleSCEta;   //!
   TBranch        *b_eleSCPhi;   //!
   TBranch        *b_eleSCRawEn;   //!
   TBranch        *b_eleSCEtaWidth;   //!
   TBranch        *b_eleSCPhiWidth;   //!
   TBranch        *b_eleHoverE;   //!
   TBranch        *b_eleEoverP;   //!
   TBranch        *b_eleEoverPInv;   //!
   TBranch        *b_eleBrem;   //!
   TBranch        *b_eledEtaAtVtx;   //!
   TBranch        *b_eledPhiAtVtx;   //!
   TBranch        *b_eleSigmaIEtaIEta;   //!
   TBranch        *b_eleSigmaIEtaIEta_2012;   //!
   TBranch        *b_eleSigmaIPhiIPhi;   //!
   TBranch        *b_eleMissHits;   //!
   TBranch        *b_eleESEffSigmaRR;   //!
   TBranch        *b_elePFChIso;   //!
   TBranch        *b_elePFPhoIso;   //!
   TBranch        *b_elePFNeuIso;   //!
   TBranch        *b_elePFPUIso;   //!
   TBranch        *b_eleBC1E;   //!
   TBranch        *b_eleBC1Eta;   //!
   TBranch        *b_eleBC2E;   //!
   TBranch        *b_eleBC2Eta;   //!
   TBranch        *b_nPho;   //!
   TBranch        *b_phoE;   //!
   TBranch        *b_phoEt;   //!
   TBranch        *b_phoEta;   //!
   TBranch        *b_phoPhi;   //!
   TBranch        *b_phoSCE;   //!
   TBranch        *b_phoSCRawE;   //!
   TBranch        *b_phoESEn;   //!
   TBranch        *b_phoSCEta;   //!
   TBranch        *b_phoSCPhi;   //!
   TBranch        *b_phoSCEtaWidth;   //!
   TBranch        *b_phoSCPhiWidth;   //!
   TBranch        *b_phoSCBrem;   //!
   TBranch        *b_phohasPixelSeed;   //!
   TBranch        *b_phoR9;   //!
   TBranch        *b_phoHoverE;   //!
   TBranch        *b_phoSigmaIEtaIEta;   //!
   TBranch        *b_phoE1x3;   //!
   TBranch        *b_phoE2x2;   //!
   TBranch        *b_phoE2x5Max;   //!
   TBranch        *b_phoE5x5;   //!
   TBranch        *b_phoESEffSigmaRR;   //!
   TBranch        *b_phoSigmaIEtaIEta_2012;   //!
   TBranch        *b_phoSigmaIEtaIPhi_2012;   //!
   TBranch        *b_phoSigmaIPhiIPhi_2012;   //!
   TBranch        *b_phoE1x3_2012;   //!
   TBranch        *b_phoE2x2_2012;   //!
   TBranch        *b_phoE2x5Max_2012;   //!
   TBranch        *b_phoE5x5_2012;   //!
   TBranch        *b_phoBC1E;   //!
   TBranch        *b_phoBC1Eta;   //!
   TBranch        *b_phoBC2E;   //!
   TBranch        *b_phoBC2Eta;   //!
   TBranch        *b_pho_ecalClusterIsoR2;   //!
   TBranch        *b_pho_ecalClusterIsoR3;   //!
   TBranch        *b_pho_ecalClusterIsoR4;   //!
   TBranch        *b_pho_ecalClusterIsoR5;   //!
   TBranch        *b_pho_hcalRechitIsoR1;   //!
   TBranch        *b_pho_hcalRechitIsoR2;   //!
   TBranch        *b_pho_hcalRechitIsoR3;   //!
   TBranch        *b_pho_hcalRechitIsoR4;   //!
   TBranch        *b_pho_hcalRechitIsoR5;   //!
   TBranch        *b_pho_trackIsoR1PtCut20;   //!
   TBranch        *b_pho_trackIsoR2PtCut20;   //!
   TBranch        *b_pho_trackIsoR3PtCut20;   //!
   TBranch        *b_pho_trackIsoR4PtCut20;   //!
   TBranch        *b_pho_trackIsoR5PtCut20;   //!
   TBranch        *b_pho_swissCrx;   //!
   TBranch        *b_pho_seedTime;   //!
   TBranch        *b_pfcIso1;   //!
   TBranch        *b_pfcIso2;   //!
   TBranch        *b_pfcIso3;   //!
   TBranch        *b_pfcIso4;   //!
   TBranch        *b_pfcIso5;   //!
   TBranch        *b_pfpIso1;   //!
   TBranch        *b_pfpIso2;   //!
   TBranch        *b_pfpIso3;   //!
   TBranch        *b_pfpIso4;   //!
   TBranch        *b_pfpIso5;   //!
   TBranch        *b_pfnIso1;   //!
   TBranch        *b_pfnIso2;   //!
   TBranch        *b_pfnIso3;   //!
   TBranch        *b_pfnIso4;   //!
   TBranch        *b_pfnIso5;   //!
   TBranch        *b_pfcVsIso1;   //!
   TBranch        *b_pfcVsIso2;   //!
   TBranch        *b_pfcVsIso3;   //!
   TBranch        *b_pfcVsIso4;   //!
   TBranch        *b_pfcVsIso5;   //!
   TBranch        *b_pfcVsIso1th1;   //!
   TBranch        *b_pfcVsIso2th1;   //!
   TBranch        *b_pfcVsIso3th1;   //!
   TBranch        *b_pfcVsIso4th1;   //!
   TBranch        *b_pfcVsIso5th1;   //!
   TBranch        *b_pfcVsIso1th2;   //!
   TBranch        *b_pfcVsIso2th2;   //!
   TBranch        *b_pfcVsIso3th2;   //!
   TBranch        *b_pfcVsIso4th2;   //!
   TBranch        *b_pfcVsIso5th2;   //!
   TBranch        *b_pfnVsIso1;   //!
   TBranch        *b_pfnVsIso2;   //!
   TBranch        *b_pfnVsIso3;   //!
   TBranch        *b_pfnVsIso4;   //!
   TBranch        *b_pfnVsIso5;   //!
   TBranch        *b_pfnVsIso1th1;   //!
   TBranch        *b_pfnVsIso2th1;   //!
   TBranch        *b_pfnVsIso3th1;   //!
   TBranch        *b_pfnVsIso4th1;   //!
   TBranch        *b_pfnVsIso5th1;   //!
   TBranch        *b_pfnVsIso1th2;   //!
   TBranch        *b_pfnVsIso2th2;   //!
   TBranch        *b_pfnVsIso3th2;   //!
   TBranch        *b_pfnVsIso4th2;   //!
   TBranch        *b_pfnVsIso5th2;   //!
   TBranch        *b_pfpVsIso1;   //!
   TBranch        *b_pfpVsIso2;   //!
   TBranch        *b_pfpVsIso3;   //!
   TBranch        *b_pfpVsIso4;   //!
   TBranch        *b_pfpVsIso5;   //!
   TBranch        *b_pfpVsIso1th1;   //!
   TBranch        *b_pfpVsIso2th1;   //!
   TBranch        *b_pfpVsIso3th1;   //!
   TBranch        *b_pfpVsIso4th1;   //!
   TBranch        *b_pfpVsIso5th1;   //!
   TBranch        *b_pfpVsIso1th2;   //!
   TBranch        *b_pfpVsIso2th2;   //!
   TBranch        *b_pfpVsIso3th2;   //!
   TBranch        *b_pfpVsIso4th2;   //!
   TBranch        *b_pfpVsIso5th2;   //!
   TBranch        *b_towerIso1;   //!
   TBranch        *b_towerIso2;   //!
   TBranch        *b_towerIso3;   //!
   TBranch        *b_towerIso4;   //!
   TBranch        *b_towerIso5;   //!
   TBranch        *b_towerVsIso1;   //!
   TBranch        *b_towerVsIso2;   //!
   TBranch        *b_towerVsIso3;   //!
   TBranch        *b_towerVsIso4;   //!
   TBranch        *b_towerVsIso5;   //!
   TBranch        *b_towerVsSubIso1;   //!
   TBranch        *b_towerVsSubIso2;   //!
   TBranch        *b_towerVsSubIso3;   //!
   TBranch        *b_towerVsSubIso4;   //!
   TBranch        *b_towerVsSubIso5;   //!
   TBranch        *b_nMu;   //!
   TBranch        *b_muPt;   //!
   TBranch        *b_muEta;   //!
   TBranch        *b_muPhi;   //!
   TBranch        *b_muCharge;   //!
   TBranch        *b_muType;   //!
   TBranch        *b_muIsGood;   //!
   TBranch        *b_muD0;   //!
   TBranch        *b_muDz;   //!
   TBranch        *b_muChi2NDF;   //!
   TBranch        *b_muInnerD0;   //!
   TBranch        *b_muInnerDz;   //!
   TBranch        *b_muTrkLayers;   //!
   TBranch        *b_muPixelLayers;   //!
   TBranch        *b_muPixelHits;   //!
   TBranch        *b_muMuonHits;   //!
   TBranch        *b_muTrkQuality;   //!
   TBranch        *b_muStations;   //!
   TBranch        *b_muIsoTrk;   //!
   TBranch        *b_muPFChIso;   //!
   TBranch        *b_muPFPhoIso;   //!
   TBranch        *b_muPFNeuIso;   //!
   TBranch        *b_muPFPUIso;   //!

};


void setupPhotonTree(TTree *t,Photons &tPhotons,bool doCheck = 1)
{
   // Set branch addresses and branch pointers
   t->SetBranchAddress("run", &tPhotons.run, &tPhotons.b_run);
   t->SetBranchAddress("event", &tPhotons.event, &tPhotons.b_event);
   t->SetBranchAddress("lumis", &tPhotons.lumis, &tPhotons.b_lumis);
   t->SetBranchAddress("isData", &tPhotons.isData, &tPhotons.b_isData);
   t->SetBranchAddress("nPUInfo", &tPhotons.nPUInfo, &tPhotons.b_nPUInfo);
   t->SetBranchAddress("nPU", &tPhotons.nPU, &tPhotons.b_nPU);
   t->SetBranchAddress("puBX", &tPhotons.puBX, &tPhotons.b_puBX);
   t->SetBranchAddress("puTrue", &tPhotons.puTrue, &tPhotons.b_puTrue);
   t->SetBranchAddress("nMC", &tPhotons.nMC, &tPhotons.b_nMC);
   t->SetBranchAddress("mcPID", &tPhotons.mcPID, &tPhotons.b_mcPID);
   t->SetBranchAddress("mcStatus", &tPhotons.mcStatus, &tPhotons.b_mcStatus);
   t->SetBranchAddress("mcVtx_x", &tPhotons.mcVtx_x, &tPhotons.b_mcVtx_x);
   t->SetBranchAddress("mcVtx_y", &tPhotons.mcVtx_y, &tPhotons.b_mcVtx_y);
   t->SetBranchAddress("mcVtx_z", &tPhotons.mcVtx_z, &tPhotons.b_mcVtx_z);
   t->SetBranchAddress("mcPt", &tPhotons.mcPt, &tPhotons.b_mcPt);
   t->SetBranchAddress("mcEta", &tPhotons.mcEta, &tPhotons.b_mcEta);
   t->SetBranchAddress("mcPhi", &tPhotons.mcPhi, &tPhotons.b_mcPhi);
   t->SetBranchAddress("mcE", &tPhotons.mcE, &tPhotons.b_mcE);
   t->SetBranchAddress("mcEt", &tPhotons.mcEt, &tPhotons.b_mcEt);
   t->SetBranchAddress("mcMass", &tPhotons.mcMass, &tPhotons.b_mcMass);
   t->SetBranchAddress("mcParentage", &tPhotons.mcParentage, &tPhotons.b_mcParentage);
   t->SetBranchAddress("mcMomPID", &tPhotons.mcMomPID, &tPhotons.b_mcMomPID);
   t->SetBranchAddress("mcMomPt", &tPhotons.mcMomPt, &tPhotons.b_mcMomPt);
   t->SetBranchAddress("mcMomEta", &tPhotons.mcMomEta, &tPhotons.b_mcMomEta);
   t->SetBranchAddress("mcMomPhi", &tPhotons.mcMomPhi, &tPhotons.b_mcMomPhi);
   t->SetBranchAddress("mcMomMass", &tPhotons.mcMomMass, &tPhotons.b_mcMomMass);
   t->SetBranchAddress("mcGMomPID", &tPhotons.mcGMomPID, &tPhotons.b_mcGMomPID);
   t->SetBranchAddress("mcIndex", &tPhotons.mcIndex, &tPhotons.b_mcIndex);
   t->SetBranchAddress("mcCalIsoDR03", &tPhotons.mcCalIsoDR03, &tPhotons.b_mcCalIsoDR03);
   t->SetBranchAddress("mcCalIsoDR04", &tPhotons.mcCalIsoDR04, &tPhotons.b_mcCalIsoDR04);
   t->SetBranchAddress("mcTrkIsoDR03", &tPhotons.mcTrkIsoDR03, &tPhotons.b_mcTrkIsoDR03);
   t->SetBranchAddress("mcTrkIsoDR04", &tPhotons.mcTrkIsoDR04, &tPhotons.b_mcTrkIsoDR04);
   t->SetBranchAddress("nEle", &tPhotons.nEle, &tPhotons.b_nEle);
   t->SetBranchAddress("eleCharge", &tPhotons.eleCharge, &tPhotons.b_eleCharge);
   t->SetBranchAddress("eleChargeConsistent", &tPhotons.eleChargeConsistent, &tPhotons.b_eleChargeConsistent);
   t->SetBranchAddress("eleEn", &tPhotons.eleEn, &tPhotons.b_eleEn);
   t->SetBranchAddress("eleD0", &tPhotons.eleD0, &tPhotons.b_eleD0);
   t->SetBranchAddress("eleDz", &tPhotons.eleDz, &tPhotons.b_eleDz);
   t->SetBranchAddress("eleD0Err", &tPhotons.eleD0Err, &tPhotons.b_eleD0Err);
   t->SetBranchAddress("eleDzErr", &tPhotons.eleDzErr, &tPhotons.b_eleDzErr);
   t->SetBranchAddress("eleTrkPt", &tPhotons.eleTrkPt, &tPhotons.b_eleTrkPt);
   t->SetBranchAddress("eleTrkEta", &tPhotons.eleTrkEta, &tPhotons.b_eleTrkEta);
   t->SetBranchAddress("eleTrkPhi", &tPhotons.eleTrkPhi, &tPhotons.b_eleTrkPhi);
   t->SetBranchAddress("eleTrkCharge", &tPhotons.eleTrkCharge, &tPhotons.b_eleTrkCharge);
   t->SetBranchAddress("eleTrkChi2", &tPhotons.eleTrkChi2, &tPhotons.b_eleTrkChi2);
   t->SetBranchAddress("eleTrkNdof", &tPhotons.eleTrkNdof, &tPhotons.b_eleTrkNdof);
   t->SetBranchAddress("eleTrkNormalizedChi2", &tPhotons.eleTrkNormalizedChi2, &tPhotons.b_eleTrkNormalizedChi2);
   t->SetBranchAddress("elePt", &tPhotons.elePt, &tPhotons.b_elePt);
   t->SetBranchAddress("eleEta", &tPhotons.eleEta, &tPhotons.b_eleEta);
   t->SetBranchAddress("elePhi", &tPhotons.elePhi, &tPhotons.b_elePhi);
   t->SetBranchAddress("eleSCEn", &tPhotons.eleSCEn, &tPhotons.b_eleSCEn);
   t->SetBranchAddress("eleESEn", &tPhotons.eleESEn, &tPhotons.b_eleESEn);
   t->SetBranchAddress("eleSCEta", &tPhotons.eleSCEta, &tPhotons.b_eleSCEta);
   t->SetBranchAddress("eleSCPhi", &tPhotons.eleSCPhi, &tPhotons.b_eleSCPhi);
   t->SetBranchAddress("eleSCRawEn", &tPhotons.eleSCRawEn, &tPhotons.b_eleSCRawEn);
   t->SetBranchAddress("eleSCEtaWidth", &tPhotons.eleSCEtaWidth, &tPhotons.b_eleSCEtaWidth);
   t->SetBranchAddress("eleSCPhiWidth", &tPhotons.eleSCPhiWidth, &tPhotons.b_eleSCPhiWidth);
   t->SetBranchAddress("eleHoverE", &tPhotons.eleHoverE, &tPhotons.b_eleHoverE);
   t->SetBranchAddress("eleEoverP", &tPhotons.eleEoverP, &tPhotons.b_eleEoverP);
   t->SetBranchAddress("eleEoverPInv", &tPhotons.eleEoverPInv, &tPhotons.b_eleEoverPInv);
   t->SetBranchAddress("eleBrem", &tPhotons.eleBrem, &tPhotons.b_eleBrem);
   t->SetBranchAddress("eledEtaAtVtx", &tPhotons.eledEtaAtVtx, &tPhotons.b_eledEtaAtVtx);
   t->SetBranchAddress("eledPhiAtVtx", &tPhotons.eledPhiAtVtx, &tPhotons.b_eledPhiAtVtx);
   t->SetBranchAddress("eleSigmaIEtaIEta", &tPhotons.eleSigmaIEtaIEta, &tPhotons.b_eleSigmaIEtaIEta);
   t->SetBranchAddress("eleSigmaIEtaIEta_2012", &tPhotons.eleSigmaIEtaIEta_2012, &tPhotons.b_eleSigmaIEtaIEta_2012);
   t->SetBranchAddress("eleSigmaIPhiIPhi", &tPhotons.eleSigmaIPhiIPhi, &tPhotons.b_eleSigmaIPhiIPhi);
   t->SetBranchAddress("eleMissHits", &tPhotons.eleMissHits, &tPhotons.b_eleMissHits);
   t->SetBranchAddress("eleESEffSigmaRR", &tPhotons.eleESEffSigmaRR, &tPhotons.b_eleESEffSigmaRR);
   t->SetBranchAddress("elePFChIso", &tPhotons.elePFChIso, &tPhotons.b_elePFChIso);
   t->SetBranchAddress("elePFPhoIso", &tPhotons.elePFPhoIso, &tPhotons.b_elePFPhoIso);
   t->SetBranchAddress("elePFNeuIso", &tPhotons.elePFNeuIso, &tPhotons.b_elePFNeuIso);
   t->SetBranchAddress("elePFPUIso", &tPhotons.elePFPUIso, &tPhotons.b_elePFPUIso);
   t->SetBranchAddress("eleBC1E", &tPhotons.eleBC1E, &tPhotons.b_eleBC1E);
   t->SetBranchAddress("eleBC1Eta", &tPhotons.eleBC1Eta, &tPhotons.b_eleBC1Eta);
   t->SetBranchAddress("eleBC2E", &tPhotons.eleBC2E, &tPhotons.b_eleBC2E);
   t->SetBranchAddress("eleBC2Eta", &tPhotons.eleBC2Eta, &tPhotons.b_eleBC2Eta);
   t->SetBranchAddress("nPho", &tPhotons.nPho, &tPhotons.b_nPho);
   t->SetBranchAddress("phoE", &tPhotons.phoE, &tPhotons.b_phoE);
   t->SetBranchAddress("phoEt", &tPhotons.phoEt, &tPhotons.b_phoEt);
   t->SetBranchAddress("phoEta", &tPhotons.phoEta, &tPhotons.b_phoEta);
   t->SetBranchAddress("phoPhi", &tPhotons.phoPhi, &tPhotons.b_phoPhi);
   t->SetBranchAddress("phoSCE", &tPhotons.phoSCE, &tPhotons.b_phoSCE);
   t->SetBranchAddress("phoSCRawE", &tPhotons.phoSCRawE, &tPhotons.b_phoSCRawE);
   t->SetBranchAddress("phoESEn", &tPhotons.phoESEn, &tPhotons.b_phoESEn);
   t->SetBranchAddress("phoSCEta", &tPhotons.phoSCEta, &tPhotons.b_phoSCEta);
   t->SetBranchAddress("phoSCPhi", &tPhotons.phoSCPhi, &tPhotons.b_phoSCPhi);
   t->SetBranchAddress("phoSCEtaWidth", &tPhotons.phoSCEtaWidth, &tPhotons.b_phoSCEtaWidth);
   t->SetBranchAddress("phoSCPhiWidth", &tPhotons.phoSCPhiWidth, &tPhotons.b_phoSCPhiWidth);
   t->SetBranchAddress("phoSCBrem", &tPhotons.phoSCBrem, &tPhotons.b_phoSCBrem);
   t->SetBranchAddress("phohasPixelSeed", &tPhotons.phohasPixelSeed, &tPhotons.b_phohasPixelSeed);
   t->SetBranchAddress("phoR9", &tPhotons.phoR9, &tPhotons.b_phoR9);
   t->SetBranchAddress("phoHoverE", &tPhotons.phoHoverE, &tPhotons.b_phoHoverE);
   t->SetBranchAddress("phoSigmaIEtaIEta", &tPhotons.phoSigmaIEtaIEta, &tPhotons.b_phoSigmaIEtaIEta);
   t->SetBranchAddress("phoE1x3", &tPhotons.phoE1x3, &tPhotons.b_phoE1x3);
   t->SetBranchAddress("phoE2x2", &tPhotons.phoE2x2, &tPhotons.b_phoE2x2);
   t->SetBranchAddress("phoE2x5Max", &tPhotons.phoE2x5Max, &tPhotons.b_phoE2x5Max);
   t->SetBranchAddress("phoE5x5", &tPhotons.phoE5x5, &tPhotons.b_phoE5x5);
   t->SetBranchAddress("phoESEffSigmaRR", &tPhotons.phoESEffSigmaRR, &tPhotons.b_phoESEffSigmaRR);
   t->SetBranchAddress("phoSigmaIEtaIEta_2012", &tPhotons.phoSigmaIEtaIEta_2012, &tPhotons.b_phoSigmaIEtaIEta_2012);
   t->SetBranchAddress("phoSigmaIEtaIPhi_2012", &tPhotons.phoSigmaIEtaIPhi_2012, &tPhotons.b_phoSigmaIEtaIPhi_2012);
   t->SetBranchAddress("phoSigmaIPhiIPhi_2012", &tPhotons.phoSigmaIPhiIPhi_2012, &tPhotons.b_phoSigmaIPhiIPhi_2012);
   t->SetBranchAddress("phoE1x3_2012", &tPhotons.phoE1x3_2012, &tPhotons.b_phoE1x3_2012);
   t->SetBranchAddress("phoE2x2_2012", &tPhotons.phoE2x2_2012, &tPhotons.b_phoE2x2_2012);
   t->SetBranchAddress("phoE2x5Max_2012", &tPhotons.phoE2x5Max_2012, &tPhotons.b_phoE2x5Max_2012);
   t->SetBranchAddress("phoE5x5_2012", &tPhotons.phoE5x5_2012, &tPhotons.b_phoE5x5_2012);
   t->SetBranchAddress("phoBC1E", &tPhotons.phoBC1E, &tPhotons.b_phoBC1E);
   t->SetBranchAddress("phoBC1Eta", &tPhotons.phoBC1Eta, &tPhotons.b_phoBC1Eta);
   t->SetBranchAddress("phoBC2E", &tPhotons.phoBC2E, &tPhotons.b_phoBC2E);
   t->SetBranchAddress("phoBC2Eta", &tPhotons.phoBC2Eta, &tPhotons.b_phoBC2Eta);
   t->SetBranchAddress("pho_ecalClusterIsoR2", &tPhotons.pho_ecalClusterIsoR2, &tPhotons.b_pho_ecalClusterIsoR2);
   t->SetBranchAddress("pho_ecalClusterIsoR3", &tPhotons.pho_ecalClusterIsoR3, &tPhotons.b_pho_ecalClusterIsoR3);
   t->SetBranchAddress("pho_ecalClusterIsoR4", &tPhotons.pho_ecalClusterIsoR4, &tPhotons.b_pho_ecalClusterIsoR4);
   t->SetBranchAddress("pho_ecalClusterIsoR5", &tPhotons.pho_ecalClusterIsoR5, &tPhotons.b_pho_ecalClusterIsoR5);
   t->SetBranchAddress("pho_hcalRechitIsoR1", &tPhotons.pho_hcalRechitIsoR1, &tPhotons.b_pho_hcalRechitIsoR1);
   t->SetBranchAddress("pho_hcalRechitIsoR2", &tPhotons.pho_hcalRechitIsoR2, &tPhotons.b_pho_hcalRechitIsoR2);
   t->SetBranchAddress("pho_hcalRechitIsoR3", &tPhotons.pho_hcalRechitIsoR3, &tPhotons.b_pho_hcalRechitIsoR3);
   t->SetBranchAddress("pho_hcalRechitIsoR4", &tPhotons.pho_hcalRechitIsoR4, &tPhotons.b_pho_hcalRechitIsoR4);
   t->SetBranchAddress("pho_hcalRechitIsoR5", &tPhotons.pho_hcalRechitIsoR5, &tPhotons.b_pho_hcalRechitIsoR5);
   t->SetBranchAddress("pho_trackIsoR1PtCut20", &tPhotons.pho_trackIsoR1PtCut20, &tPhotons.b_pho_trackIsoR1PtCut20);
   t->SetBranchAddress("pho_trackIsoR2PtCut20", &tPhotons.pho_trackIsoR2PtCut20, &tPhotons.b_pho_trackIsoR2PtCut20);
   t->SetBranchAddress("pho_trackIsoR3PtCut20", &tPhotons.pho_trackIsoR3PtCut20, &tPhotons.b_pho_trackIsoR3PtCut20);
   t->SetBranchAddress("pho_trackIsoR4PtCut20", &tPhotons.pho_trackIsoR4PtCut20, &tPhotons.b_pho_trackIsoR4PtCut20);
   t->SetBranchAddress("pho_trackIsoR5PtCut20", &tPhotons.pho_trackIsoR5PtCut20, &tPhotons.b_pho_trackIsoR5PtCut20);
   t->SetBranchAddress("pho_swissCrx", &tPhotons.pho_swissCrx, &tPhotons.b_pho_swissCrx);
   t->SetBranchAddress("pho_seedTime", &tPhotons.pho_seedTime, &tPhotons.b_pho_seedTime);
   t->SetBranchAddress("pfcIso1", &tPhotons.pfcIso1, &tPhotons.b_pfcIso1);
   t->SetBranchAddress("pfcIso2", &tPhotons.pfcIso2, &tPhotons.b_pfcIso2);
   t->SetBranchAddress("pfcIso3", &tPhotons.pfcIso3, &tPhotons.b_pfcIso3);
   t->SetBranchAddress("pfcIso4", &tPhotons.pfcIso4, &tPhotons.b_pfcIso4);
   t->SetBranchAddress("pfcIso5", &tPhotons.pfcIso5, &tPhotons.b_pfcIso5);
   t->SetBranchAddress("pfpIso1", &tPhotons.pfpIso1, &tPhotons.b_pfpIso1);
   t->SetBranchAddress("pfpIso2", &tPhotons.pfpIso2, &tPhotons.b_pfpIso2);
   t->SetBranchAddress("pfpIso3", &tPhotons.pfpIso3, &tPhotons.b_pfpIso3);
   t->SetBranchAddress("pfpIso4", &tPhotons.pfpIso4, &tPhotons.b_pfpIso4);
   t->SetBranchAddress("pfpIso5", &tPhotons.pfpIso5, &tPhotons.b_pfpIso5);
   t->SetBranchAddress("pfnIso1", &tPhotons.pfnIso1, &tPhotons.b_pfnIso1);
   t->SetBranchAddress("pfnIso2", &tPhotons.pfnIso2, &tPhotons.b_pfnIso2);
   t->SetBranchAddress("pfnIso3", &tPhotons.pfnIso3, &tPhotons.b_pfnIso3);
   t->SetBranchAddress("pfnIso4", &tPhotons.pfnIso4, &tPhotons.b_pfnIso4);
   t->SetBranchAddress("pfnIso5", &tPhotons.pfnIso5, &tPhotons.b_pfnIso5);
   t->SetBranchAddress("pfcVsIso1", &tPhotons.pfcVsIso1, &tPhotons.b_pfcVsIso1);
   t->SetBranchAddress("pfcVsIso2", &tPhotons.pfcVsIso2, &tPhotons.b_pfcVsIso2);
   t->SetBranchAddress("pfcVsIso3", &tPhotons.pfcVsIso3, &tPhotons.b_pfcVsIso3);
   t->SetBranchAddress("pfcVsIso4", &tPhotons.pfcVsIso4, &tPhotons.b_pfcVsIso4);
   t->SetBranchAddress("pfcVsIso5", &tPhotons.pfcVsIso5, &tPhotons.b_pfcVsIso5);
   t->SetBranchAddress("pfcVsIso1th1", &tPhotons.pfcVsIso1th1, &tPhotons.b_pfcVsIso1th1);
   t->SetBranchAddress("pfcVsIso2th1", &tPhotons.pfcVsIso2th1, &tPhotons.b_pfcVsIso2th1);
   t->SetBranchAddress("pfcVsIso3th1", &tPhotons.pfcVsIso3th1, &tPhotons.b_pfcVsIso3th1);
   t->SetBranchAddress("pfcVsIso4th1", &tPhotons.pfcVsIso4th1, &tPhotons.b_pfcVsIso4th1);
   t->SetBranchAddress("pfcVsIso5th1", &tPhotons.pfcVsIso5th1, &tPhotons.b_pfcVsIso5th1);
   t->SetBranchAddress("pfcVsIso1th2", &tPhotons.pfcVsIso1th2, &tPhotons.b_pfcVsIso1th2);
   t->SetBranchAddress("pfcVsIso2th2", &tPhotons.pfcVsIso2th2, &tPhotons.b_pfcVsIso2th2);
   t->SetBranchAddress("pfcVsIso3th2", &tPhotons.pfcVsIso3th2, &tPhotons.b_pfcVsIso3th2);
   t->SetBranchAddress("pfcVsIso4th2", &tPhotons.pfcVsIso4th2, &tPhotons.b_pfcVsIso4th2);
   t->SetBranchAddress("pfcVsIso5th2", &tPhotons.pfcVsIso5th2, &tPhotons.b_pfcVsIso5th2);
   t->SetBranchAddress("pfnVsIso1", &tPhotons.pfnVsIso1, &tPhotons.b_pfnVsIso1);
   t->SetBranchAddress("pfnVsIso2", &tPhotons.pfnVsIso2, &tPhotons.b_pfnVsIso2);
   t->SetBranchAddress("pfnVsIso3", &tPhotons.pfnVsIso3, &tPhotons.b_pfnVsIso3);
   t->SetBranchAddress("pfnVsIso4", &tPhotons.pfnVsIso4, &tPhotons.b_pfnVsIso4);
   t->SetBranchAddress("pfnVsIso5", &tPhotons.pfnVsIso5, &tPhotons.b_pfnVsIso5);
   t->SetBranchAddress("pfnVsIso1th1", &tPhotons.pfnVsIso1th1, &tPhotons.b_pfnVsIso1th1);
   t->SetBranchAddress("pfnVsIso2th1", &tPhotons.pfnVsIso2th1, &tPhotons.b_pfnVsIso2th1);
   t->SetBranchAddress("pfnVsIso3th1", &tPhotons.pfnVsIso3th1, &tPhotons.b_pfnVsIso3th1);
   t->SetBranchAddress("pfnVsIso4th1", &tPhotons.pfnVsIso4th1, &tPhotons.b_pfnVsIso4th1);
   t->SetBranchAddress("pfnVsIso5th1", &tPhotons.pfnVsIso5th1, &tPhotons.b_pfnVsIso5th1);
   t->SetBranchAddress("pfnVsIso1th2", &tPhotons.pfnVsIso1th2, &tPhotons.b_pfnVsIso1th2);
   t->SetBranchAddress("pfnVsIso2th2", &tPhotons.pfnVsIso2th2, &tPhotons.b_pfnVsIso2th2);
   t->SetBranchAddress("pfnVsIso3th2", &tPhotons.pfnVsIso3th2, &tPhotons.b_pfnVsIso3th2);
   t->SetBranchAddress("pfnVsIso4th2", &tPhotons.pfnVsIso4th2, &tPhotons.b_pfnVsIso4th2);
   t->SetBranchAddress("pfnVsIso5th2", &tPhotons.pfnVsIso5th2, &tPhotons.b_pfnVsIso5th2);
   t->SetBranchAddress("pfpVsIso1", &tPhotons.pfpVsIso1, &tPhotons.b_pfpVsIso1);
   t->SetBranchAddress("pfpVsIso2", &tPhotons.pfpVsIso2, &tPhotons.b_pfpVsIso2);
   t->SetBranchAddress("pfpVsIso3", &tPhotons.pfpVsIso3, &tPhotons.b_pfpVsIso3);
   t->SetBranchAddress("pfpVsIso4", &tPhotons.pfpVsIso4, &tPhotons.b_pfpVsIso4);
   t->SetBranchAddress("pfpVsIso5", &tPhotons.pfpVsIso5, &tPhotons.b_pfpVsIso5);
   t->SetBranchAddress("pfpVsIso1th1", &tPhotons.pfpVsIso1th1, &tPhotons.b_pfpVsIso1th1);
   t->SetBranchAddress("pfpVsIso2th1", &tPhotons.pfpVsIso2th1, &tPhotons.b_pfpVsIso2th1);
   t->SetBranchAddress("pfpVsIso3th1", &tPhotons.pfpVsIso3th1, &tPhotons.b_pfpVsIso3th1);
   t->SetBranchAddress("pfpVsIso4th1", &tPhotons.pfpVsIso4th1, &tPhotons.b_pfpVsIso4th1);
   t->SetBranchAddress("pfpVsIso5th1", &tPhotons.pfpVsIso5th1, &tPhotons.b_pfpVsIso5th1);
   t->SetBranchAddress("pfpVsIso1th2", &tPhotons.pfpVsIso1th2, &tPhotons.b_pfpVsIso1th2);
   t->SetBranchAddress("pfpVsIso2th2", &tPhotons.pfpVsIso2th2, &tPhotons.b_pfpVsIso2th2);
   t->SetBranchAddress("pfpVsIso3th2", &tPhotons.pfpVsIso3th2, &tPhotons.b_pfpVsIso3th2);
   t->SetBranchAddress("pfpVsIso4th2", &tPhotons.pfpVsIso4th2, &tPhotons.b_pfpVsIso4th2);
   t->SetBranchAddress("pfpVsIso5th2", &tPhotons.pfpVsIso5th2, &tPhotons.b_pfpVsIso5th2);
   t->SetBranchAddress("towerIso1", &tPhotons.towerIso1, &tPhotons.b_towerIso1);
   t->SetBranchAddress("towerIso2", &tPhotons.towerIso2, &tPhotons.b_towerIso2);
   t->SetBranchAddress("towerIso3", &tPhotons.towerIso3, &tPhotons.b_towerIso3);
   t->SetBranchAddress("towerIso4", &tPhotons.towerIso4, &tPhotons.b_towerIso4);
   t->SetBranchAddress("towerIso5", &tPhotons.towerIso5, &tPhotons.b_towerIso5);
   t->SetBranchAddress("towerVsIso1", &tPhotons.towerVsIso1, &tPhotons.b_towerVsIso1);
   t->SetBranchAddress("towerVsIso2", &tPhotons.towerVsIso2, &tPhotons.b_towerVsIso2);
   t->SetBranchAddress("towerVsIso3", &tPhotons.towerVsIso3, &tPhotons.b_towerVsIso3);
   t->SetBranchAddress("towerVsIso4", &tPhotons.towerVsIso4, &tPhotons.b_towerVsIso4);
   t->SetBranchAddress("towerVsIso5", &tPhotons.towerVsIso5, &tPhotons.b_towerVsIso5);
   t->SetBranchAddress("towerVsSubIso1", &tPhotons.towerVsSubIso1, &tPhotons.b_towerVsSubIso1);
   t->SetBranchAddress("towerVsSubIso2", &tPhotons.towerVsSubIso2, &tPhotons.b_towerVsSubIso2);
   t->SetBranchAddress("towerVsSubIso3", &tPhotons.towerVsSubIso3, &tPhotons.b_towerVsSubIso3);
   t->SetBranchAddress("towerVsSubIso4", &tPhotons.towerVsSubIso4, &tPhotons.b_towerVsSubIso4);
   t->SetBranchAddress("towerVsSubIso5", &tPhotons.towerVsSubIso5, &tPhotons.b_towerVsSubIso5);
   t->SetBranchAddress("nMu", &tPhotons.nMu, &tPhotons.b_nMu);
   t->SetBranchAddress("muPt", &tPhotons.muPt, &tPhotons.b_muPt);
   t->SetBranchAddress("muEta", &tPhotons.muEta, &tPhotons.b_muEta);
   t->SetBranchAddress("muPhi", &tPhotons.muPhi, &tPhotons.b_muPhi);
   t->SetBranchAddress("muCharge", &tPhotons.muCharge, &tPhotons.b_muCharge);
   t->SetBranchAddress("muType", &tPhotons.muType, &tPhotons.b_muType);
   t->SetBranchAddress("muIsGood", &tPhotons.muIsGood, &tPhotons.b_muIsGood);
   t->SetBranchAddress("muD0", &tPhotons.muD0, &tPhotons.b_muD0);
   t->SetBranchAddress("muDz", &tPhotons.muDz, &tPhotons.b_muDz);
   t->SetBranchAddress("muChi2NDF", &tPhotons.muChi2NDF, &tPhotons.b_muChi2NDF);
   t->SetBranchAddress("muInnerD0", &tPhotons.muInnerD0, &tPhotons.b_muInnerD0);
   t->SetBranchAddress("muInnerDz", &tPhotons.muInnerDz, &tPhotons.b_muInnerDz);
   t->SetBranchAddress("muTrkLayers", &tPhotons.muTrkLayers, &tPhotons.b_muTrkLayers);
   t->SetBranchAddress("muPixelLayers", &tPhotons.muPixelLayers, &tPhotons.b_muPixelLayers);
   t->SetBranchAddress("muPixelHits", &tPhotons.muPixelHits, &tPhotons.b_muPixelHits);
   t->SetBranchAddress("muMuonHits", &tPhotons.muMuonHits, &tPhotons.b_muMuonHits);
   t->SetBranchAddress("muTrkQuality", &tPhotons.muTrkQuality, &tPhotons.b_muTrkQuality);
   t->SetBranchAddress("muStations", &tPhotons.muStations, &tPhotons.b_muStations);
   t->SetBranchAddress("muIsoTrk", &tPhotons.muIsoTrk, &tPhotons.b_muIsoTrk);
   t->SetBranchAddress("muPFChIso", &tPhotons.muPFChIso, &tPhotons.b_muPFChIso);
   t->SetBranchAddress("muPFPhoIso", &tPhotons.muPFPhoIso, &tPhotons.b_muPFPhoIso);
   t->SetBranchAddress("muPFNeuIso", &tPhotons.muPFNeuIso, &tPhotons.b_muPFNeuIso);
   t->SetBranchAddress("muPFPUIso", &tPhotons.muPFPUIso, &tPhotons.b_muPFPUIso);
   if (doCheck) {
   }
}

