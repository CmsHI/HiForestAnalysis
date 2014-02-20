//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Jan 23 16:17:05 2013 by ROOT version 5.32/00
// from TTree HltTree/
// found on file: root://eoscms//eos/cms/store/caf/user/velicanu/PA2013_merged/pPb_hiForest2_monster_logerrevent_HI2013_express_v1_210634_210635_v14.root
//////////////////////////////////////////////////////////
#include "commonSetup.h"
#include <iostream>
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TTree.h>
#include <TBranch.h>

//added here the trigObj required to new HLT merge method from Kurt
//Feb20 2014
#include "DataFormats/HLTReco/interface/TriggerObject.h"

using namespace std;

typedef std::vector<trigger::TriggerObject> trigO;


class Hlts {
public :
   Hlts(){};
   ~Hlts(){};

   // Declaration of leaf types
   Int_t           NL1IsolEm;
   Float_t         L1IsolEmEt[8];   //[NL1IsolEm]
   Float_t         L1IsolEmE[8];   //[NL1IsolEm]
   Float_t         L1IsolEmEta[8];   //[NL1IsolEm]
   Float_t         L1IsolEmPhi[8];   //[NL1IsolEm]
   Int_t           NL1NIsolEm;
   Float_t         L1NIsolEmEt[8];   //[NL1NIsolEm]
   Float_t         L1NIsolEmE[8];   //[NL1NIsolEm]
   Float_t         L1NIsolEmEta[8];   //[NL1NIsolEm]
   Float_t         L1NIsolEmPhi[8];   //[NL1NIsolEm]
   Int_t           NL1Mu;
   Float_t         L1MuPt[8];   //[NL1Mu]
   Float_t         L1MuE[8];   //[NL1Mu]
   Float_t         L1MuEta[8];   //[NL1Mu]
   Float_t         L1MuPhi[8];   //[NL1Mu]
   Int_t           L1MuIsol[8];   //[NL1Mu]
   Int_t           L1MuMip[8];   //[NL1Mu]
   Int_t           L1MuFor[8];   //[NL1Mu]
   Int_t           L1MuRPC[8];   //[NL1Mu]
   Int_t           L1MuQal[8];   //[NL1Mu]
   Int_t           L1MuChg[8];   //[NL1Mu]
   Int_t           NL1CenJet;
   Float_t         L1CenJetEt[8];   //[NL1CenJet]
   Float_t         L1CenJetE[8];   //[NL1CenJet]
   Float_t         L1CenJetEta[8];   //[NL1CenJet]
   Float_t         L1CenJetPhi[8];   //[NL1CenJet]
   Int_t           NL1ForJet;
   Float_t         L1ForJetEt[8];   //[NL1ForJet]
   Float_t         L1ForJetE[8];   //[NL1ForJet]
   Float_t         L1ForJetEta[8];   //[NL1ForJet]
   Float_t         L1ForJetPhi[8];   //[NL1ForJet]
   Int_t           NL1Tau;
   Float_t         L1TauEt[8];   //[NL1Tau]
   Float_t         L1TauE[8];   //[NL1Tau]
   Float_t         L1TauEta[8];   //[NL1Tau]
   Float_t         L1TauPhi[8];   //[NL1Tau]
   Float_t         L1Met;
   Float_t         L1MetPhi;
   Float_t         L1EtTot;
   Float_t         L1Mht;
   Float_t         L1MhtPhi;
   Float_t         L1EtHad;
   Int_t           L1HfRing1EtSumPositiveEta;
   Int_t           L1HfRing2EtSumPositiveEta;
   Int_t           L1HfRing1EtSumNegativeEta;
   Int_t           L1HfRing2EtSumNegativeEta;
   Int_t           L1HfTowerCountPositiveEtaRing1;
   Int_t           L1HfTowerCountNegativeEtaRing1;
   Int_t           L1HfTowerCountPositiveEtaRing2;
   Int_t           L1HfTowerCountNegativeEtaRing2;
   Int_t           Run;
   Int_t           Event;
   Int_t           LumiBlock;
   Int_t           Bx;
   Int_t           Orbit;
   Double_t        AvgInstDelLumi;
   Int_t           HLTriggerFirstPath;
   Int_t           HLTriggerFirstPath_Prescl;
   Int_t           HLT_Activity_Ecal_SC7_v13;
   Int_t           HLT_Activity_Ecal_SC7_v13_Prescl;
   Int_t           HLT_BeamGas_HF_Beam1_v5;
   Int_t           HLT_BeamGas_HF_Beam1_v5_Prescl;
   Int_t           HLT_BeamGas_HF_Beam2_v5;
   Int_t           HLT_BeamGas_HF_Beam2_v5_Prescl;
   Int_t           HLT_BeamHalo_v13;
   Int_t           HLT_BeamHalo_v13_Prescl;
   Int_t           HLT_PAHcalUTCA_v1;
   Int_t           HLT_PAHcalUTCA_v1_Prescl;
   Int_t           HLT_PAHcalPhiSym_v1;
   Int_t           HLT_PAHcalPhiSym_v1_Prescl;
   Int_t           HLT_PAHcalNZS_v1;
   Int_t           HLT_PAHcalNZS_v1_Prescl;
   Int_t           HLT_GlobalRunHPDNoise_v8;
   Int_t           HLT_GlobalRunHPDNoise_v8_Prescl;
   Int_t           HLT_Physics_v5;
   Int_t           HLT_Physics_v5_Prescl;
   Int_t           DST_Physics_v5;
   Int_t           DST_Physics_v5_Prescl;
   Int_t           HLT_DTCalibration_v2;
   Int_t           HLT_DTCalibration_v2_Prescl;
   Int_t           HLT_EcalCalibration_v3;
   Int_t           HLT_EcalCalibration_v3_Prescl;
   Int_t           HLT_HcalCalibration_v3;
   Int_t           HLT_HcalCalibration_v3_Prescl;
   Int_t           HLT_TrackerCalibration_v3;
   Int_t           HLT_TrackerCalibration_v3_Prescl;
   Int_t           HLT_L1SingleMuOpen_AntiBPTX_v7;
   Int_t           HLT_L1SingleMuOpen_AntiBPTX_v7_Prescl;
   Int_t           HLT_L1TrackerCosmics_v7;
   Int_t           HLT_L1TrackerCosmics_v7_Prescl;
   Int_t           AlCa_PAEcalPi0EBonly_v1;
   Int_t           AlCa_PAEcalPi0EBonly_v1_Prescl;
   Int_t           AlCa_PAEcalPi0EEonly_v1;
   Int_t           AlCa_PAEcalPi0EEonly_v1_Prescl;
   Int_t           AlCa_PAEcalEtaEBonly_v1;
   Int_t           AlCa_PAEcalEtaEBonly_v1_Prescl;
   Int_t           AlCa_PAEcalEtaEEonly_v1;
   Int_t           AlCa_PAEcalEtaEEonly_v1_Prescl;
   Int_t           AlCa_EcalPhiSym_v13;
   Int_t           AlCa_EcalPhiSym_v13_Prescl;
   Int_t           AlCa_RPCMuonNoTriggers_v9;
   Int_t           AlCa_RPCMuonNoTriggers_v9_Prescl;
   Int_t           AlCa_RPCMuonNoHits_v9;
   Int_t           AlCa_RPCMuonNoHits_v9_Prescl;
   Int_t           AlCa_RPCMuonNormalisation_v9;
   Int_t           AlCa_RPCMuonNormalisation_v9_Prescl;
   Int_t           AlCa_LumiPixels_v8;
   Int_t           AlCa_LumiPixels_v8_Prescl;
   Int_t           AlCa_LumiPixels_ZeroBias_v4;
   Int_t           AlCa_LumiPixels_ZeroBias_v4_Prescl;
   Int_t           AlCa_LumiPixels_Random_v1;
   Int_t           AlCa_LumiPixels_Random_v1_Prescl;
   Int_t           HLT_PAL1SingleJet16_v1;
   Int_t           HLT_PAL1SingleJet16_v1_Prescl;
   Int_t           HLT_PAL1SingleJet36_v1;
   Int_t           HLT_PAL1SingleJet36_v1_Prescl;
   Int_t           HLT_PASingleForJet15_v1;
   Int_t           HLT_PASingleForJet15_v1_Prescl;
   Int_t           HLT_PASingleForJet25_v1;
   Int_t           HLT_PASingleForJet25_v1_Prescl;
   Int_t           HLT_PAJet20_NoJetID_v1;
   Int_t           HLT_PAJet20_NoJetID_v1_Prescl;
   Int_t           HLT_PAJet40_NoJetID_v1;
   Int_t           HLT_PAJet40_NoJetID_v1_Prescl;
   Int_t           HLT_PAJet60_NoJetID_v1;
   Int_t           HLT_PAJet60_NoJetID_v1_Prescl;
   Int_t           HLT_PAJet80_NoJetID_v1;
   Int_t           HLT_PAJet80_NoJetID_v1_Prescl;
   Int_t           HLT_PAJet100_NoJetID_v1;
   Int_t           HLT_PAJet100_NoJetID_v1_Prescl;
   Int_t           HLT_PAJet120_NoJetID_v1;
   Int_t           HLT_PAJet120_NoJetID_v1_Prescl;
   Int_t           HLT_PAForJet20Eta2_v1;
   Int_t           HLT_PAForJet20Eta2_v1_Prescl;
   Int_t           HLT_PAForJet40Eta2_v1;
   Int_t           HLT_PAForJet40Eta2_v1_Prescl;
   Int_t           HLT_PAForJet60Eta2_v1;
   Int_t           HLT_PAForJet60Eta2_v1_Prescl;
   Int_t           HLT_PAForJet80Eta2_v1;
   Int_t           HLT_PAForJet80Eta2_v1_Prescl;
   Int_t           HLT_PAForJet100Eta2_v1;
   Int_t           HLT_PAForJet100Eta2_v1_Prescl;
   Int_t           HLT_PAForJet20Eta3_v1;
   Int_t           HLT_PAForJet20Eta3_v1_Prescl;
   Int_t           HLT_PAForJet40Eta3_v1;
   Int_t           HLT_PAForJet40Eta3_v1_Prescl;
   Int_t           HLT_PAForJet60Eta3_v1;
   Int_t           HLT_PAForJet60Eta3_v1_Prescl;
   Int_t           HLT_PAForJet80Eta3_v1;
   Int_t           HLT_PAForJet80Eta3_v1_Prescl;
   Int_t           HLT_PAForJet100Eta3_v1;
   Int_t           HLT_PAForJet100Eta3_v1_Prescl;
   Int_t           HLT_PATripleJet20_20_20_v1;
   Int_t           HLT_PATripleJet20_20_20_v1_Prescl;
   Int_t           HLT_PATripleJet40_20_20_v1;
   Int_t           HLT_PATripleJet40_20_20_v1_Prescl;
   Int_t           HLT_PATripleJet60_20_20_v1;
   Int_t           HLT_PATripleJet60_20_20_v1_Prescl;
   Int_t           HLT_PATripleJet80_20_20_v1;
   Int_t           HLT_PATripleJet80_20_20_v1_Prescl;
   Int_t           HLT_PATripleJet100_20_20_v1;
   Int_t           HLT_PATripleJet100_20_20_v1_Prescl;
   Int_t           HLT_PAJet40ETM30_v1;
   Int_t           HLT_PAJet40ETM30_v1_Prescl;
   Int_t           HLT_PAJet60ETM30_v1;
   Int_t           HLT_PAJet60ETM30_v1_Prescl;
   Int_t           HLT_PAL1DoubleMu0_v1;
   Int_t           HLT_PAL1DoubleMu0_v1_Prescl;
   Int_t           HLT_PADimuon0_NoVertexing_v1;
   Int_t           HLT_PADimuon0_NoVertexing_v1_Prescl;
   Int_t           HLT_PAL1DoubleMu0_HighQ_v1;
   Int_t           HLT_PAL1DoubleMu0_HighQ_v1_Prescl;
   Int_t           HLT_PAL1DoubleMuOpen_v1;
   Int_t           HLT_PAL1DoubleMuOpen_v1_Prescl;
   Int_t           HLT_PAL2DoubleMu3_v1;
   Int_t           HLT_PAL2DoubleMu3_v1_Prescl;
   Int_t           HLT_PAMu3_v1;
   Int_t           HLT_PAMu3_v1_Prescl;
   Int_t           HLT_PAMu7_v1;
   Int_t           HLT_PAMu7_v1_Prescl;
   Int_t           HLT_PAMu12_v1;
   Int_t           HLT_PAMu12_v1_Prescl;
   Int_t           HLT_PABTagMu_Jet20_Mu4_v1;
   Int_t           HLT_PABTagMu_Jet20_Mu4_v1_Prescl;
   Int_t           HLT_PAMu3PFJet20_v1;
   Int_t           HLT_PAMu3PFJet20_v1_Prescl;
   Int_t           HLT_PAMu3PFJet40_v1;
   Int_t           HLT_PAMu3PFJet40_v1_Prescl;
   Int_t           HLT_PAMu7PFJet20_v1;
   Int_t           HLT_PAMu7PFJet20_v1_Prescl;
   Int_t           HLT_PAPhoton10_NoCaloIdVL_v1;
   Int_t           HLT_PAPhoton10_NoCaloIdVL_v1_Prescl;
   Int_t           HLT_PAPhoton15_NoCaloIdVL_v1;
   Int_t           HLT_PAPhoton15_NoCaloIdVL_v1_Prescl;
   Int_t           HLT_PAPhoton20_NoCaloIdVL_v1;
   Int_t           HLT_PAPhoton20_NoCaloIdVL_v1_Prescl;
   Int_t           HLT_PAPhoton30_NoCaloIdVL_v1;
   Int_t           HLT_PAPhoton30_NoCaloIdVL_v1_Prescl;
   Int_t           HLT_PAPhoton40_NoCaloIdVL_v1;
   Int_t           HLT_PAPhoton40_NoCaloIdVL_v1_Prescl;
   Int_t           HLT_PAPhoton60_NoCaloIdVL_v1;
   Int_t           HLT_PAPhoton60_NoCaloIdVL_v1_Prescl;
   Int_t           HLT_PAPhoton10_TightCaloIdVL_v1;
   Int_t           HLT_PAPhoton10_TightCaloIdVL_v1_Prescl;
   Int_t           HLT_PAPhoton15_TightCaloIdVL_v1;
   Int_t           HLT_PAPhoton15_TightCaloIdVL_v1_Prescl;
   Int_t           HLT_PAPhoton20_TightCaloIdVL_v1;
   Int_t           HLT_PAPhoton20_TightCaloIdVL_v1_Prescl;
   Int_t           HLT_PAPhoton30_TightCaloIdVL_v1;
   Int_t           HLT_PAPhoton30_TightCaloIdVL_v1_Prescl;
   Int_t           HLT_PAPhoton40_TightCaloIdVL_v1;
   Int_t           HLT_PAPhoton40_TightCaloIdVL_v1_Prescl;
   Int_t           HLT_PAPhoton10_TightCaloIdVL_Iso50_v1;
   Int_t           HLT_PAPhoton10_TightCaloIdVL_Iso50_v1_Prescl;
   Int_t           HLT_PAPhoton15_TightCaloIdVL_Iso50_v1;
   Int_t           HLT_PAPhoton15_TightCaloIdVL_Iso50_v1_Prescl;
   Int_t           HLT_PAPhoton20_TightCaloIdVL_Iso50_v1;
   Int_t           HLT_PAPhoton20_TightCaloIdVL_Iso50_v1_Prescl;
   Int_t           HLT_PAPhoton30_TightCaloIdVL_Iso50_v1;
   Int_t           HLT_PAPhoton30_TightCaloIdVL_Iso50_v1_Prescl;
   Int_t           HLT_PAPhoton10_Photon10_NoCaloIdVL_v1;
   Int_t           HLT_PAPhoton10_Photon10_NoCaloIdVL_v1_Prescl;
   Int_t           HLT_PAPhoton15_Photon10_NoCaloIdVL_v1;
   Int_t           HLT_PAPhoton15_Photon10_NoCaloIdVL_v1_Prescl;
   Int_t           HLT_PAPhoton20_Photon15_NoCaloIdVL_v1;
   Int_t           HLT_PAPhoton20_Photon15_NoCaloIdVL_v1_Prescl;
   Int_t           HLT_PAPhoton20_Photon20_NoCaloIdVL_v1;
   Int_t           HLT_PAPhoton20_Photon20_NoCaloIdVL_v1_Prescl;
   Int_t           HLT_PAPhoton30_Photon30_NoCaloIdVL_v1;
   Int_t           HLT_PAPhoton30_Photon30_NoCaloIdVL_v1_Prescl;
   Int_t           HLT_PAPhoton10_Photon10_TightCaloIdVL_v1;
   Int_t           HLT_PAPhoton10_Photon10_TightCaloIdVL_v1_Prescl;
   Int_t           HLT_PAPhoton10_Photon10_TightCaloIdVL_Iso50_v1;
   Int_t           HLT_PAPhoton10_Photon10_TightCaloIdVL_Iso50_v1_Prescl;
   Int_t           HLT_PAPhoton15_Photon10_TightCaloIdVL_v1;
   Int_t           HLT_PAPhoton15_Photon10_TightCaloIdVL_v1_Prescl;
   Int_t           HLT_PAPhoton20_Photon15_TightCaloIdVL_v1;
   Int_t           HLT_PAPhoton20_Photon15_TightCaloIdVL_v1_Prescl;
   Int_t           HLT_PASingleEle6_CaloIdT_TrkIdVL_v1;
   Int_t           HLT_PASingleEle6_CaloIdT_TrkIdVL_v1_Prescl;
   Int_t           HLT_PASingleEle6_CaloIdNone_TrkIdVL_v1;
   Int_t           HLT_PASingleEle6_CaloIdNone_TrkIdVL_v1_Prescl;
   Int_t           HLT_PASingleEle8_CaloIdNone_TrkIdVL_v1;
   Int_t           HLT_PASingleEle8_CaloIdNone_TrkIdVL_v1_Prescl;
   Int_t           HLT_PAL1DoubleEG5DoubleEle6_CaloIdT_TrkIdVL_v1;
   Int_t           HLT_PAL1DoubleEG5DoubleEle6_CaloIdT_TrkIdVL_v1_Prescl;
   Int_t           HLT_PADoubleEle6_CaloIdT_TrkIdVL_v1;
   Int_t           HLT_PADoubleEle6_CaloIdT_TrkIdVL_v1_Prescl;
   Int_t           HLT_PADoubleEle8_CaloIdT_TrkIdVL_v1;
   Int_t           HLT_PADoubleEle8_CaloIdT_TrkIdVL_v1_Prescl;
   Int_t           HLT_PAPixelTracks_Multiplicity100_v1;
   Int_t           HLT_PAPixelTracks_Multiplicity100_v1_Prescl;
   Int_t           HLT_PAPixelTracks_Multiplicity130_v1;
   Int_t           HLT_PAPixelTracks_Multiplicity130_v1_Prescl;
   Int_t           HLT_PAPixelTracks_Multiplicity160_v1;
   Int_t           HLT_PAPixelTracks_Multiplicity160_v1_Prescl;
   Int_t           HLT_PAPixelTracks_Multiplicity190_v1;
   Int_t           HLT_PAPixelTracks_Multiplicity190_v1_Prescl;
   Int_t           HLT_PAPixelTracks_Multiplicity220_v1;
   Int_t           HLT_PAPixelTracks_Multiplicity220_v1_Prescl;
   Int_t           HLT_PAPixelTrackMultiplicity100_FullTrack12_v1;
   Int_t           HLT_PAPixelTrackMultiplicity100_FullTrack12_v1_Prescl;
   Int_t           HLT_PAPixelTrackMultiplicity130_FullTrack12_v1;
   Int_t           HLT_PAPixelTrackMultiplicity130_FullTrack12_v1_Prescl;
   Int_t           HLT_PAPixelTrackMultiplicity160_FullTrack12_v1;
   Int_t           HLT_PAPixelTrackMultiplicity160_FullTrack12_v1_Prescl;
   Int_t           HLT_PAPixelTrackMultiplicity100_L2DoubleMu3_v1;
   Int_t           HLT_PAPixelTrackMultiplicity100_L2DoubleMu3_v1_Prescl;
   Int_t           HLT_PAPixelTrackMultiplicity140_Jet80_NoJetID_v1;
   Int_t           HLT_PAPixelTrackMultiplicity140_Jet80_NoJetID_v1_Prescl;
   Int_t           HLT_PATech35_v1;
   Int_t           HLT_PATech35_v1_Prescl;
   Int_t           HLT_PATech35_HFSumET100_v1;
   Int_t           HLT_PATech35_HFSumET100_v1_Prescl;
   Int_t           HLT_PAFullTrack12_v1;
   Int_t           HLT_PAFullTrack12_v1_Prescl;
   Int_t           HLT_PAFullTrack20_v1;
   Int_t           HLT_PAFullTrack20_v1_Prescl;
   Int_t           HLT_PAFullTrack30_v1;
   Int_t           HLT_PAFullTrack30_v1_Prescl;
   Int_t           HLT_PAFullTrack50_v1;
   Int_t           HLT_PAFullTrack50_v1_Prescl;
   Int_t           HLT_PAHFSumET100_v1;
   Int_t           HLT_PAHFSumET100_v1_Prescl;
   Int_t           HLT_PAHFSumET140_v1;
   Int_t           HLT_PAHFSumET140_v1_Prescl;
   Int_t           HLT_PAHFSumET170_v1;
   Int_t           HLT_PAHFSumET170_v1_Prescl;
   Int_t           HLT_PAHFSumET210_v1;
   Int_t           HLT_PAHFSumET210_v1_Prescl;
   Int_t           HLT_PARomanPots_Tech52_v1;
   Int_t           HLT_PARomanPots_Tech52_v1_Prescl;
   Int_t           HLT_PAL1Tech53_MB_v1;
   Int_t           HLT_PAL1Tech53_MB_v1_Prescl;
   Int_t           HLT_PAL1Tech53_MB_SingleTrack_v1;
   Int_t           HLT_PAL1Tech53_MB_SingleTrack_v1_Prescl;
   Int_t           HLT_PAL1Tech54_ZeroBias_v1;
   Int_t           HLT_PAL1Tech54_ZeroBias_v1_Prescl;
   Int_t           HLT_PAT1minbias_Tech55_v1;
   Int_t           HLT_PAT1minbias_Tech55_v1_Prescl;
   Int_t           HLT_PAL1Tech_HBHEHO_totalOR_v1;
   Int_t           HLT_PAL1Tech_HBHEHO_totalOR_v1_Prescl;
   Int_t           HLT_PAL1Tech63_CASTORHaloMuon_v1;
   Int_t           HLT_PAL1Tech63_CASTORHaloMuon_v1_Prescl;
   Int_t           HLT_PACastorEmTotemLowMultiplicity_v1;
   Int_t           HLT_PACastorEmTotemLowMultiplicity_v1_Prescl;
   Int_t           HLT_PACastorEmNotHfCoincidencePm_v1;
   Int_t           HLT_PACastorEmNotHfCoincidencePm_v1_Prescl;
   Int_t           HLT_PACastorEmNotHfSingleChannel_v1;
   Int_t           HLT_PACastorEmNotHfSingleChannel_v1_Prescl;
   Int_t           HLT_PAL1CastorTotalTotemLowMultiplicity_v1;
   Int_t           HLT_PAL1CastorTotalTotemLowMultiplicity_v1_Prescl;
   Int_t           HLT_PAMinBiasHF_v1;
   Int_t           HLT_PAMinBiasHF_v1_Prescl;
   Int_t           HLT_PAMinBiasHF_OR_v1;
   Int_t           HLT_PAMinBiasHF_OR_v1_Prescl;
   Int_t           HLT_PAMinBiasBHC_v1;
   Int_t           HLT_PAMinBiasBHC_v1_Prescl;
   Int_t           HLT_PAMinBiasBHC_OR_v1;
   Int_t           HLT_PAMinBiasBHC_OR_v1_Prescl;
   Int_t           HLT_PAMinBiasHfOrBHC_v1;
   Int_t           HLT_PAMinBiasHfOrBHC_v1_Prescl;
   Int_t           HLT_PABptxPlusNotBptxMinus_v1;
   Int_t           HLT_PABptxPlusNotBptxMinus_v1_Prescl;
   Int_t           HLT_PABptxMinusNotBptxPlus_v1;
   Int_t           HLT_PABptxMinusNotBptxPlus_v1_Prescl;
   Int_t           HLT_PAZeroBias_v1;
   Int_t           HLT_PAZeroBias_v1_Prescl;
   Int_t           HLT_PAZeroBiasPixel_SingleTrack_v1;
   Int_t           HLT_PAZeroBiasPixel_SingleTrack_v1_Prescl;
   Int_t           HLT_PAHFOR_SingleTrack_v1;
   Int_t           HLT_PAHFOR_SingleTrack_v1_Prescl;
   Int_t           HLT_PAZeroBiasPixel_DoubleTrack_v1;
   Int_t           HLT_PAZeroBiasPixel_DoubleTrack_v1_Prescl;
   Int_t           HLT_PADoubleMu4_Acoplanarity03_v1;
   Int_t           HLT_PADoubleMu4_Acoplanarity03_v1_Prescl;
   Int_t           HLT_PAExclDijet35_HFAND_v1;
   Int_t           HLT_PAExclDijet35_HFAND_v1_Prescl;
   Int_t           HLT_PAL1DoubleEG3_FwdVeto_v1;
   Int_t           HLT_PAL1DoubleEG3_FwdVeto_v1_Prescl;
   Int_t           HLT_PAL1DoubleJet20_TotemDiffractive_v1;
   Int_t           HLT_PAL1DoubleJet20_TotemDiffractive_v1_Prescl;
   Int_t           HLT_PADoubleJet20_ForwardBackward_v1;
   Int_t           HLT_PADoubleJet20_ForwardBackward_v1_Prescl;
   Int_t           HLT_PAMu7_Ele7_CaloIdT_CaloIsoVL_v1;
   Int_t           HLT_PAMu7_Ele7_CaloIdT_CaloIsoVL_v1_Prescl;
   Int_t           HLT_PAUpcSingleEG5Pixel_TrackVeto_v1;
   Int_t           HLT_PAUpcSingleEG5Pixel_TrackVeto_v1_Prescl;
   Int_t           HLT_PAUpcSingleEG5Full_TrackVeto7_v1;
   Int_t           HLT_PAUpcSingleEG5Full_TrackVeto7_v1_Prescl;
   Int_t           HLT_PAUpcSingleMuOpenPixel_TrackVeto_v1;
   Int_t           HLT_PAUpcSingleMuOpenPixel_TrackVeto_v1_Prescl;
   Int_t           HLT_PAUpcSingleMuOpenFull_TrackVeto7_v1;
   Int_t           HLT_PAUpcSingleMuOpenFull_TrackVeto7_v1_Prescl;
   Int_t           HLT_PAUpcSingleMuOpenTkMu_Onia_v1;
   Int_t           HLT_PAUpcSingleMuOpenTkMu_Onia_v1_Prescl;
   Int_t           HLT_PARandom_v1;
   Int_t           HLT_PARandom_v1_Prescl;
   Int_t           DQM_FEDIntegrity_v11;
   Int_t           DQM_FEDIntegrity_v11_Prescl;
   Int_t           HLT_LogMonitor_v4;
   Int_t           HLT_LogMonitor_v4_Prescl;
   Int_t           HLTriggerFinalPath;
   Int_t           HLTriggerFinalPath_Prescl;
   Int_t           L1_AlwaysTrue;
   Int_t           L1_AlwaysTrue_Prescl;
   Int_t           L1_BeamGas_Hf_BptxMinusPostQuiet;
   Int_t           L1_BeamGas_Hf_BptxMinusPostQuiet_Prescl;
   Int_t           L1_BeamGas_Hf_BptxPlusPostQuiet;
   Int_t           L1_BeamGas_Hf_BptxPlusPostQuiet_Prescl;
   Int_t           L1_BeamHalo;
   Int_t           L1_BeamHalo_Prescl;
   Int_t           L1_BptxMinus_NotBptxPlus;
   Int_t           L1_BptxMinus_NotBptxPlus_Prescl;
   Int_t           L1_BptxPlus_NotBptxMinus;
   Int_t           L1_BptxPlus_NotBptxMinus_Prescl;
   Int_t           L1_BscHighMultiplicity_BptxAND;
   Int_t           L1_BscHighMultiplicity_BptxAND_Prescl;
   Int_t           L1_BscMinBiasOR_BptxAND;
   Int_t           L1_BscMinBiasOR_BptxAND_Prescl;
   Int_t           L1_BscMinBiasThreshold1_BptxAND;
   Int_t           L1_BscMinBiasThreshold1_BptxAND_Prescl;
   Int_t           L1_BscMinBiasThreshold2_BptxAND;
   Int_t           L1_BscMinBiasThreshold2_BptxAND_Prescl;
   Int_t           L1_CastorEm_NotHcalHfCoincidencePm;
   Int_t           L1_CastorEm_NotHcalHfCoincidencePm_Prescl;
   Int_t           L1_CastorEm_NotHcalHfSingleChannel;
   Int_t           L1_CastorEm_NotHcalHfSingleChannel_Prescl;
   Int_t           L1_CastorEm_TotemLowMultiplicity;
   Int_t           L1_CastorEm_TotemLowMultiplicity_Prescl;
   Int_t           L1_CastorTotalEnergy_TotemLowMultiplicity;
   Int_t           L1_CastorTotalEnergy_TotemLowMultiplicity_Prescl;
   Int_t           L1_DoubleEG3_FwdVeto;
   Int_t           L1_DoubleEG3_FwdVeto_Prescl;
   Int_t           L1_DoubleEG5;
   Int_t           L1_DoubleEG5_Prescl;
   Int_t           L1_DoubleEG5_TotemDiffractive;
   Int_t           L1_DoubleEG5_TotemDiffractive_Prescl;
   Int_t           L1_DoubleEG6_HTT100;
   Int_t           L1_DoubleEG6_HTT100_Prescl;
   Int_t           L1_DoubleEG6_HTT125;
   Int_t           L1_DoubleEG6_HTT125_Prescl;
   Int_t           L1_DoubleEG_13_7;
   Int_t           L1_DoubleEG_13_7_Prescl;
   Int_t           L1_DoubleForJet16_EtaOpp;
   Int_t           L1_DoubleForJet16_EtaOpp_Prescl;
   Int_t           L1_DoubleJet20;
   Int_t           L1_DoubleJet20_Prescl;
   Int_t           L1_DoubleJet20_TotemDiffractive;
   Int_t           L1_DoubleJet20_TotemDiffractive_Prescl;
   Int_t           L1_DoubleJet24_v1;
   Int_t           L1_DoubleJet24_v1_Prescl;
   Int_t           L1_DoubleJet36_Central;
   Int_t           L1_DoubleJet36_Central_Prescl;
   Int_t           L1_DoubleJet52_Central;
   Int_t           L1_DoubleJet52_Central_Prescl;
   Int_t           L1_DoubleJetC36_TotemDiffractive;
   Int_t           L1_DoubleJetC36_TotemDiffractive_Prescl;
   Int_t           L1_DoubleJetC44_ETM30;
   Int_t           L1_DoubleJetC44_ETM30_Prescl;
   Int_t           L1_DoubleJetC56;
   Int_t           L1_DoubleJetC56_Prescl;
   Int_t           L1_DoubleJetC56_Eta1p74_WdEta4;
   Int_t           L1_DoubleJetC56_Eta1p74_WdEta4_Prescl;
   Int_t           L1_DoubleMu0;
   Int_t           L1_DoubleMu0_Prescl;
   Int_t           L1_DoubleMu0_HighQ_EtaCuts;
   Int_t           L1_DoubleMu0_HighQ_EtaCuts_Prescl;
   Int_t           L1_DoubleMu3p5_EG5;
   Int_t           L1_DoubleMu3p5_EG5_Prescl;
   Int_t           L1_DoubleMu5_EG5;
   Int_t           L1_DoubleMu5_EG5_Prescl;
   Int_t           L1_DoubleMu5_TotemDiffractive;
   Int_t           L1_DoubleMu5_TotemDiffractive_Prescl;
   Int_t           L1_DoubleMu5_v1;
   Int_t           L1_DoubleMu5_v1_Prescl;
   Int_t           L1_DoubleMuOpen_BptxAND;
   Int_t           L1_DoubleMuOpen_BptxAND_Prescl;
   Int_t           L1_DoubleMu_10_3p5;
   Int_t           L1_DoubleMu_10_3p5_Prescl;
   Int_t           L1_DoubleMu_10_Open;
   Int_t           L1_DoubleMu_10_Open_Prescl;
   Int_t           L1_DoubleMu_12_5;
   Int_t           L1_DoubleMu_12_5_Prescl;
   Int_t           L1_DoubleMu_3er_0er_HighQ_WdEta22;
   Int_t           L1_DoubleMu_3er_0er_HighQ_WdEta22_Prescl;
   Int_t           L1_DoubleMu_5er_0er_HighQ_WdEta22;
   Int_t           L1_DoubleMu_5er_0er_HighQ_WdEta22_Prescl;
   Int_t           L1_EG8_DoubleJetC20;
   Int_t           L1_EG8_DoubleJetC20_Prescl;
   Int_t           L1_ETM100;
   Int_t           L1_ETM100_Prescl;
   Int_t           L1_ETM30;
   Int_t           L1_ETM30_Prescl;
   Int_t           L1_ETM36;
   Int_t           L1_ETM36_Prescl;
   Int_t           L1_ETM40;
   Int_t           L1_ETM40_Prescl;
   Int_t           L1_ETM50;
   Int_t           L1_ETM50_Prescl;
   Int_t           L1_ETM70;
   Int_t           L1_ETM70_Prescl;
   Int_t           L1_ETT140;
   Int_t           L1_ETT140_Prescl;
   Int_t           L1_ETT20_BptxAND;
   Int_t           L1_ETT20_BptxAND_Prescl;
   Int_t           L1_ETT300;
   Int_t           L1_ETT300_Prescl;
   Int_t           L1_ETT40;
   Int_t           L1_ETT40_Prescl;
   Int_t           L1_ETT60;
   Int_t           L1_ETT60_Prescl;
   Int_t           L1_ETT80;
   Int_t           L1_ETT80_Prescl;
   Int_t           L1_HTT100;
   Int_t           L1_HTT100_Prescl;
   Int_t           L1_HTT125;
   Int_t           L1_HTT125_Prescl;
   Int_t           L1_HTT150;
   Int_t           L1_HTT150_Prescl;
   Int_t           L1_HTT175;
   Int_t           L1_HTT175_Prescl;
   Int_t           L1_HTT200;
   Int_t           L1_HTT200_Prescl;
   Int_t           L1_HTT50;
   Int_t           L1_HTT50_Prescl;
   Int_t           L1_HTT75;
   Int_t           L1_HTT75_Prescl;
   Int_t           L1_HcalHfCoincidencePm_BptxAND_v1;
   Int_t           L1_HcalHfCoincidencePm_BptxAND_v1_Prescl;
   Int_t           L1_HcalHfSingleChannel_BptxAND;
   Int_t           L1_HcalHfSingleChannel_BptxAND_Prescl;
   Int_t           L1_Mu10er_JetC32;
   Int_t           L1_Mu10er_JetC32_Prescl;
   Int_t           L1_Mu12_EG7;
   Int_t           L1_Mu12_EG7_Prescl;
   Int_t           L1_Mu3_Jet16;
   Int_t           L1_Mu3_Jet16_Prescl;
   Int_t           L1_Mu3_Jet36;
   Int_t           L1_Mu3_Jet36_Prescl;
   Int_t           L1_Mu3_JetC16_WdEtaPhi2;
   Int_t           L1_Mu3_JetC16_WdEtaPhi2_Prescl;
   Int_t           L1_Mu3_JetC52_WdEtaPhi2;
   Int_t           L1_Mu3_JetC52_WdEtaPhi2_Prescl;
   Int_t           L1_Mu5_DoubleEG5;
   Int_t           L1_Mu5_DoubleEG5_Prescl;
   Int_t           L1_Mu5_DoubleEG6;
   Int_t           L1_Mu5_DoubleEG6_Prescl;
   Int_t           L1_Mu7_Jet16;
   Int_t           L1_Mu7_Jet16_Prescl;
   Int_t           L1_Mu8_DoubleJetC20;
   Int_t           L1_Mu8_DoubleJetC20_Prescl;
   Int_t           L1_MuOpen_EG12;
   Int_t           L1_MuOpen_EG12_Prescl;
   Int_t           L1_MuOpen_EG5;
   Int_t           L1_MuOpen_EG5_Prescl;
   Int_t           L1_QuadJetC32;
   Int_t           L1_QuadJetC32_Prescl;
   Int_t           L1_QuadJetC36;
   Int_t           L1_QuadJetC36_Prescl;
   Int_t           L1_QuadJetC40;
   Int_t           L1_QuadJetC40_Prescl;
   Int_t           L1_SingleEG12;
   Int_t           L1_SingleEG12_Prescl;
   Int_t           L1_SingleEG18er;
   Int_t           L1_SingleEG18er_Prescl;
   Int_t           L1_SingleEG20;
   Int_t           L1_SingleEG20_Prescl;
   Int_t           L1_SingleEG20_TotemDiffractive;
   Int_t           L1_SingleEG20_TotemDiffractive_Prescl;
   Int_t           L1_SingleEG22;
   Int_t           L1_SingleEG22_Prescl;
   Int_t           L1_SingleEG24;
   Int_t           L1_SingleEG24_Prescl;
   Int_t           L1_SingleEG30;
   Int_t           L1_SingleEG30_Prescl;
   Int_t           L1_SingleEG5_BptxAND;
   Int_t           L1_SingleEG5_BptxAND_Prescl;
   Int_t           L1_SingleEG7;
   Int_t           L1_SingleEG7_Prescl;
   Int_t           L1_SingleForJet16;
   Int_t           L1_SingleForJet16_Prescl;
   Int_t           L1_SingleIsoEG18er;
   Int_t           L1_SingleIsoEG18er_Prescl;
   Int_t           L1_SingleIsoEG20er;
   Int_t           L1_SingleIsoEG20er_Prescl;
   Int_t           L1_SingleJet128;
   Int_t           L1_SingleJet128_Prescl;
   Int_t           L1_SingleJet12_BptxAND;
   Int_t           L1_SingleJet12_BptxAND_Prescl;
   Int_t           L1_SingleJet16_BptxAND;
   Int_t           L1_SingleJet16_BptxAND_Prescl;
   Int_t           L1_SingleJet16_FwdVeto5;
   Int_t           L1_SingleJet16_FwdVeto5_Prescl;
   Int_t           L1_SingleJet20_Central_NotBptxOR;
   Int_t           L1_SingleJet20_Central_NotBptxOR_Prescl;
   Int_t           L1_SingleJet36;
   Int_t           L1_SingleJet36_Prescl;
   Int_t           L1_SingleJet36_FwdVeto5;
   Int_t           L1_SingleJet36_FwdVeto5_Prescl;
   Int_t           L1_SingleJet52;
   Int_t           L1_SingleJet52_Prescl;
   Int_t           L1_SingleJet52_TotemDiffractive;
   Int_t           L1_SingleJet52_TotemDiffractive_Prescl;
   Int_t           L1_SingleJet68;
   Int_t           L1_SingleJet68_Prescl;
   Int_t           L1_SingleJet92;
   Int_t           L1_SingleJet92_Prescl;
   Int_t           L1_SingleJetC32_NotBptxOR;
   Int_t           L1_SingleJetC32_NotBptxOR_Prescl;
   Int_t           L1_SingleMu12;
   Int_t           L1_SingleMu12_Prescl;
   Int_t           L1_SingleMu12er;
   Int_t           L1_SingleMu12er_Prescl;
   Int_t           L1_SingleMu14_Eta2p1;
   Int_t           L1_SingleMu14_Eta2p1_Prescl;
   Int_t           L1_SingleMu16;
   Int_t           L1_SingleMu16_Prescl;
   Int_t           L1_SingleMu16_Eta2p1;
   Int_t           L1_SingleMu16_Eta2p1_Prescl;
   Int_t           L1_SingleMu18er;
   Int_t           L1_SingleMu18er_Prescl;
   Int_t           L1_SingleMu20;
   Int_t           L1_SingleMu20_Prescl;
   Int_t           L1_SingleMu20_TotemDiffractive;
   Int_t           L1_SingleMu20_TotemDiffractive_Prescl;
   Int_t           L1_SingleMu20er;
   Int_t           L1_SingleMu20er_Prescl;
   Int_t           L1_SingleMu25er;
   Int_t           L1_SingleMu25er_Prescl;
   Int_t           L1_SingleMu3;
   Int_t           L1_SingleMu3_Prescl;
   Int_t           L1_SingleMu6_NotBptxOR;
   Int_t           L1_SingleMu6_NotBptxOR_Prescl;
   Int_t           L1_SingleMu7;
   Int_t           L1_SingleMu7_Prescl;
   Int_t           L1_SingleMuBeamHalo;
   Int_t           L1_SingleMuBeamHalo_Prescl;
   Int_t           L1_SingleMuOpen;
   Int_t           L1_SingleMuOpen_Prescl;
   Int_t           L1_TripleEG7;
   Int_t           L1_TripleEG7_Prescl;
   Int_t           L1_TripleEG_12_7_5;
   Int_t           L1_TripleEG_12_7_5_Prescl;
   Int_t           L1_TripleJetC_52_28_28;
   Int_t           L1_TripleJetC_52_28_28_Prescl;
   Int_t           L1_TripleJet_64_44_24_VBF;
   Int_t           L1_TripleJet_64_44_24_VBF_Prescl;
   Int_t           L1_TripleJet_64_48_28_VBF;
   Int_t           L1_TripleJet_64_48_28_VBF_Prescl;
   Int_t           L1_ZdcCaloPlus_TotemDiffractive_QElastic;
   Int_t           L1_ZdcCaloPlus_TotemDiffractive_QElastic_Prescl;
   Int_t           L1_ZeroBias;
   Int_t           L1_ZeroBias_Prescl;
   Int_t           L1Tech_BPTX_PreBPTX_v0;
   Int_t           L1Tech_BPTX_PreBPTX_v0_Prescl;
   Int_t           L1Tech_BPTX_minus_v0;
   Int_t           L1Tech_BPTX_minus_v0_Prescl;
   Int_t           L1Tech_BPTX_minus_AND_not_plus_v0;
   Int_t           L1Tech_BPTX_minus_AND_not_plus_v0_Prescl;
   Int_t           L1Tech_BPTX_plus_v0;
   Int_t           L1Tech_BPTX_plus_v0_Prescl;
   Int_t           L1Tech_BPTX_plus_AND_NOT_minus_v0;
   Int_t           L1Tech_BPTX_plus_AND_NOT_minus_v0_Prescl;
   Int_t           L1Tech_BPTX_plus_AND_minus_v0;
   Int_t           L1Tech_BPTX_plus_AND_minus_v0_Prescl;
   Int_t           L1Tech_BPTX_plus_AND_minus_instance1_v0;
   Int_t           L1Tech_BPTX_plus_AND_minus_instance1_v0_Prescl;
   Int_t           L1Tech_BPTX_plus_OR_minus_v0;
   Int_t           L1Tech_BPTX_plus_OR_minus_v0_Prescl;
   Int_t           L1Tech_BPTX_quiet_v0;
   Int_t           L1Tech_BPTX_quiet_v0_Prescl;
   Int_t           L1Tech_BSC_HighMultiplicity_v0;
   Int_t           L1Tech_BSC_HighMultiplicity_v0_Prescl;
   Int_t           L1Tech_BSC_halo_beam1_inner_v0;
   Int_t           L1Tech_BSC_halo_beam1_inner_v0_Prescl;
   Int_t           L1Tech_BSC_halo_beam1_outer_v0;
   Int_t           L1Tech_BSC_halo_beam1_outer_v0_Prescl;
   Int_t           L1Tech_BSC_halo_beam2_inner_v0;
   Int_t           L1Tech_BSC_halo_beam2_inner_v0_Prescl;
   Int_t           L1Tech_BSC_halo_beam2_outer_v0;
   Int_t           L1Tech_BSC_halo_beam2_outer_v0_Prescl;
   Int_t           L1Tech_BSC_minBias_OR_v0;
   Int_t           L1Tech_BSC_minBias_OR_v0_Prescl;
   Int_t           L1Tech_BSC_minBias_inner_threshold1_v0;
   Int_t           L1Tech_BSC_minBias_inner_threshold1_v0_Prescl;
   Int_t           L1Tech_BSC_minBias_inner_threshold2_v0;
   Int_t           L1Tech_BSC_minBias_inner_threshold2_v0_Prescl;
   Int_t           L1Tech_BSC_minBias_threshold1_v0;
   Int_t           L1Tech_BSC_minBias_threshold1_v0_Prescl;
   Int_t           L1Tech_BSC_minBias_threshold2_v0;
   Int_t           L1Tech_BSC_minBias_threshold2_v0_Prescl;
   Int_t           L1Tech_BSC_splash_beam1_v0;
   Int_t           L1Tech_BSC_splash_beam1_v0_Prescl;
   Int_t           L1Tech_BSC_splash_beam2_v0;
   Int_t           L1Tech_BSC_splash_beam2_v0_Prescl;
   Int_t           L1Tech_CASTOR_0_v0;
   Int_t           L1Tech_CASTOR_0_v0_Prescl;
   Int_t           L1Tech_CASTOR_EM_v0;
   Int_t           L1Tech_CASTOR_EM_v0_Prescl;
   Int_t           L1Tech_CASTOR_HaloMuon_v0;
   Int_t           L1Tech_CASTOR_HaloMuon_v0_Prescl;
   Int_t           L1Tech_CASTOR_TotalEnergy_v0;
   Int_t           L1Tech_CASTOR_TotalEnergy_v0_Prescl;
   Int_t           L1Tech_DT_GlobalOR_v0;
   Int_t           L1Tech_DT_GlobalOR_v0_Prescl;
   Int_t           L1Tech_FSC_St3Sect45_downLeft_v0;
   Int_t           L1Tech_FSC_St3Sect45_downLeft_v0_Prescl;
   Int_t           L1Tech_FSC_St3Sect45_downRight_v0;
   Int_t           L1Tech_FSC_St3Sect45_downRight_v0_Prescl;
   Int_t           L1Tech_FSC_St3Sect45_uppLeft_v0;
   Int_t           L1Tech_FSC_St3Sect45_uppLeft_v0_Prescl;
   Int_t           L1Tech_FSC_St3Sect45_uppRight_v0;
   Int_t           L1Tech_FSC_St3Sect45_uppRight_v0_Prescl;
   Int_t           L1Tech_FSC_St3Sect56_downLeft_v0;
   Int_t           L1Tech_FSC_St3Sect56_downLeft_v0_Prescl;
   Int_t           L1Tech_FSC_St3Sect56_downRight_v0;
   Int_t           L1Tech_FSC_St3Sect56_downRight_v0_Prescl;
   Int_t           L1Tech_FSC_St3Sect56_uppLeft_v0;
   Int_t           L1Tech_FSC_St3Sect56_uppLeft_v0_Prescl;
   Int_t           L1Tech_FSC_St3Sect56_uppRight_v0;
   Int_t           L1Tech_FSC_St3Sect56_uppRight_v0_Prescl;
   Int_t           L1Tech_HCAL_HBHE_totalOR_v0;
   Int_t           L1Tech_HCAL_HBHE_totalOR_v0_Prescl;
   Int_t           L1Tech_HCAL_HF_MMP_or_MPP_v1;
   Int_t           L1Tech_HCAL_HF_MMP_or_MPP_v1_Prescl;
   Int_t           L1Tech_HCAL_HF_coincidence_PM_v2;
   Int_t           L1Tech_HCAL_HF_coincidence_PM_v2_Prescl;
   Int_t           L1Tech_HCAL_HF_single_channel_v0;
   Int_t           L1Tech_HCAL_HF_single_channel_v0_Prescl;
   Int_t           L1Tech_HCAL_HO_totalOR_v0;
   Int_t           L1Tech_HCAL_HO_totalOR_v0_Prescl;
   Int_t           L1Tech_RPC_TTU_RB0_Cosmics_v0;
   Int_t           L1Tech_RPC_TTU_RB0_Cosmics_v0_Prescl;
   Int_t           L1Tech_RPC_TTU_RBminus1_Cosmics_v0;
   Int_t           L1Tech_RPC_TTU_RBminus1_Cosmics_v0_Prescl;
   Int_t           L1Tech_RPC_TTU_RBminus2_Cosmics_v0;
   Int_t           L1Tech_RPC_TTU_RBminus2_Cosmics_v0_Prescl;
   Int_t           L1Tech_RPC_TTU_RBplus1_Cosmics_v0;
   Int_t           L1Tech_RPC_TTU_RBplus1_Cosmics_v0_Prescl;
   Int_t           L1Tech_RPC_TTU_RBplus2_Cosmics_v0;
   Int_t           L1Tech_RPC_TTU_RBplus2_Cosmics_v0_Prescl;
   Int_t           L1Tech_RPC_TTU_RBst1_collisions_v0;
   Int_t           L1Tech_RPC_TTU_RBst1_collisions_v0_Prescl;
   Int_t           L1Tech_RPC_TTU_barrel_Cosmics_v0;
   Int_t           L1Tech_RPC_TTU_barrel_Cosmics_v0_Prescl;
   Int_t           L1Tech_RPC_TTU_pointing_Cosmics_v0;
   Int_t           L1Tech_RPC_TTU_pointing_Cosmics_v0_Prescl;
   Int_t           L1Tech_TOTEM_Diffractive_v0;
   Int_t           L1Tech_TOTEM_Diffractive_v0_Prescl;
   Int_t           L1Tech_TOTEM_LowMultiplicity_v0;
   Int_t           L1Tech_TOTEM_LowMultiplicity_v0_Prescl;
   Int_t           L1Tech_TOTEM_MinBias_v0;
   Int_t           L1Tech_TOTEM_MinBias_v0_Prescl;
   Int_t           L1Tech_TOTEM_ZeroBias_v0;
   Int_t           L1Tech_TOTEM_ZeroBias_v0_Prescl;
   Int_t           L1Tech_ZDC_Scint_loose_vertex_v0;
   Int_t           L1Tech_ZDC_Scint_loose_vertex_v0_Prescl;
   Int_t           L1Tech_ZDC_Scint_minus_v0;
   Int_t           L1Tech_ZDC_Scint_minus_v0_Prescl;
   Int_t           L1Tech_ZDC_Scint_plus_v0;
   Int_t           L1Tech_ZDC_Scint_plus_v0_Prescl;
   Int_t           L1Tech_ZDC_Scint_tight_vertex_v0;
   Int_t           L1Tech_ZDC_Scint_tight_vertex_v0_Prescl;

   trigO HLT_PAJet_NoJetID_v1_trigObject_20;
   trigO HLT_PAJet_NOJetID_v1_trigObject_40;
   trigO HLT_PAJet_NOJetID_v1_trigObject_60;
   trigO HLT_PAJet_NOJetID_v1_trigObject_80;
   trigO HLT_PAJet_NOJetID_v1_trigObject_100;
   trigO HLT_PAJet_NOJetID_v1_trigObject_120;

   //for(int i = 0;i<6;i++){
   //  HLT_PAJet_NoJetID_v1_trigObject[i] = new trigO;
   //}

   


   // List of branches
   TBranch        *b_NL1IsolEm;   //!
   TBranch        *b_L1IsolEmEt;   //!
   TBranch        *b_L1IsolEmE;   //!
   TBranch        *b_L1IsolEmEta;   //!
   TBranch        *b_L1IsolEmPhi;   //!
   TBranch        *b_NL1NIsolEm;   //!
   TBranch        *b_L1NIsolEmEt;   //!
   TBranch        *b_L1NIsolEmE;   //!
   TBranch        *b_L1NIsolEmEta;   //!
   TBranch        *b_L1NIsolEmPhi;   //!
   TBranch        *b_NL1Mu;   //!
   TBranch        *b_L1MuPt;   //!
   TBranch        *b_L1MuE;   //!
   TBranch        *b_L1MuEta;   //!
   TBranch        *b_L1MuPhi;   //!
   TBranch        *b_L1MuIsol;   //!
   TBranch        *b_L1MuMip;   //!
   TBranch        *b_L1MuFor;   //!
   TBranch        *b_L1MuRPC;   //!
   TBranch        *b_L1MuQal;   //!
   TBranch        *b_L1MuChg;   //!
   TBranch        *b_NL1CenJet;   //!
   TBranch        *b_L1CenJetEt;   //!
   TBranch        *b_L1CenJetE;   //!
   TBranch        *b_L1CenJetEta;   //!
   TBranch        *b_L1CenJetPhi;   //!
   TBranch        *b_NL1ForJet;   //!
   TBranch        *b_L1ForJetEt;   //!
   TBranch        *b_L1ForJetE;   //!
   TBranch        *b_L1ForJetEta;   //!
   TBranch        *b_L1ForJetPhi;   //!
   TBranch        *b_NL1Tau;   //!
   TBranch        *b_L1TauEt;   //!
   TBranch        *b_L1TauE;   //!
   TBranch        *b_L1TauEta;   //!
   TBranch        *b_L1TauPhi;   //!
   TBranch        *b_L1Met;   //!
   TBranch        *b_L1MetPhi;   //!
   TBranch        *b_L1EtTot;   //!
   TBranch        *b_L1Mht;   //!
   TBranch        *b_L1MhtPhi;   //!
   TBranch        *b_L1EtHad;   //!
   TBranch        *b_L1HfRing1EtSumPositiveEta;   //!
   TBranch        *b_L1HfRing2EtSumPositiveEta;   //!
   TBranch        *b_L1HfRing1EtSumNegativeEta;   //!
   TBranch        *b_L1HfRing2EtSumNegativeEta;   //!
   TBranch        *b_L1HfTowerCountPositiveEtaRing1;   //!
   TBranch        *b_L1HfTowerCountNegativeEtaRing1;   //!
   TBranch        *b_L1HfTowerCountPositiveEtaRing2;   //!
   TBranch        *b_L1HfTowerCountNegativeEtaRing2;   //!
   TBranch        *b_Run;   //!
   TBranch        *b_Event;   //!
   TBranch        *b_LumiBlock;   //!
   TBranch        *b_Bx;   //!
   TBranch        *b_Orbit;   //!
   TBranch        *b_AvgInstDelLumi;   //!
   TBranch        *b_HLTriggerFirstPath;   //!
   TBranch        *b_HLTriggerFirstPath_Prescl;   //!
   TBranch        *b_HLT_Activity_Ecal_SC7_v13;   //!
   TBranch        *b_HLT_Activity_Ecal_SC7_v13_Prescl;   //!
   TBranch        *b_HLT_BeamGas_HF_Beam1_v5;   //!
   TBranch        *b_HLT_BeamGas_HF_Beam1_v5_Prescl;   //!
   TBranch        *b_HLT_BeamGas_HF_Beam2_v5;   //!
   TBranch        *b_HLT_BeamGas_HF_Beam2_v5_Prescl;   //!
   TBranch        *b_HLT_BeamHalo_v13;   //!
   TBranch        *b_HLT_BeamHalo_v13_Prescl;   //!
   TBranch        *b_HLT_PAHcalUTCA_v1;   //!
   TBranch        *b_HLT_PAHcalUTCA_v1_Prescl;   //!
   TBranch        *b_HLT_PAHcalPhiSym_v1;   //!
   TBranch        *b_HLT_PAHcalPhiSym_v1_Prescl;   //!
   TBranch        *b_HLT_PAHcalNZS_v1;   //!
   TBranch        *b_HLT_PAHcalNZS_v1_Prescl;   //!
   TBranch        *b_HLT_GlobalRunHPDNoise_v8;   //!
   TBranch        *b_HLT_GlobalRunHPDNoise_v8_Prescl;   //!
   TBranch        *b_HLT_Physics_v5;   //!
   TBranch        *b_HLT_Physics_v5_Prescl;   //!
   TBranch        *b_DST_Physics_v5;   //!
   TBranch        *b_DST_Physics_v5_Prescl;   //!
   TBranch        *b_HLT_DTCalibration_v2;   //!
   TBranch        *b_HLT_DTCalibration_v2_Prescl;   //!
   TBranch        *b_HLT_EcalCalibration_v3;   //!
   TBranch        *b_HLT_EcalCalibration_v3_Prescl;   //!
   TBranch        *b_HLT_HcalCalibration_v3;   //!
   TBranch        *b_HLT_HcalCalibration_v3_Prescl;   //!
   TBranch        *b_HLT_TrackerCalibration_v3;   //!
   TBranch        *b_HLT_TrackerCalibration_v3_Prescl;   //!
   TBranch        *b_HLT_L1SingleMuOpen_AntiBPTX_v7;   //!
   TBranch        *b_HLT_L1SingleMuOpen_AntiBPTX_v7_Prescl;   //!
   TBranch        *b_HLT_L1TrackerCosmics_v7;   //!
   TBranch        *b_HLT_L1TrackerCosmics_v7_Prescl;   //!
   TBranch        *b_AlCa_PAEcalPi0EBonly_v1;   //!
   TBranch        *b_AlCa_PAEcalPi0EBonly_v1_Prescl;   //!
   TBranch        *b_AlCa_PAEcalPi0EEonly_v1;   //!
   TBranch        *b_AlCa_PAEcalPi0EEonly_v1_Prescl;   //!
   TBranch        *b_AlCa_PAEcalEtaEBonly_v1;   //!
   TBranch        *b_AlCa_PAEcalEtaEBonly_v1_Prescl;   //!
   TBranch        *b_AlCa_PAEcalEtaEEonly_v1;   //!
   TBranch        *b_AlCa_PAEcalEtaEEonly_v1_Prescl;   //!
   TBranch        *b_AlCa_EcalPhiSym_v13;   //!
   TBranch        *b_AlCa_EcalPhiSym_v13_Prescl;   //!
   TBranch        *b_AlCa_RPCMuonNoTriggers_v9;   //!
   TBranch        *b_AlCa_RPCMuonNoTriggers_v9_Prescl;   //!
   TBranch        *b_AlCa_RPCMuonNoHits_v9;   //!
   TBranch        *b_AlCa_RPCMuonNoHits_v9_Prescl;   //!
   TBranch        *b_AlCa_RPCMuonNormalisation_v9;   //!
   TBranch        *b_AlCa_RPCMuonNormalisation_v9_Prescl;   //!
   TBranch        *b_AlCa_LumiPixels_v8;   //!
   TBranch        *b_AlCa_LumiPixels_v8_Prescl;   //!
   TBranch        *b_AlCa_LumiPixels_ZeroBias_v4;   //!
   TBranch        *b_AlCa_LumiPixels_ZeroBias_v4_Prescl;   //!
   TBranch        *b_AlCa_LumiPixels_Random_v1;   //!
   TBranch        *b_AlCa_LumiPixels_Random_v1_Prescl;   //!
   TBranch        *b_HLT_PAL1SingleJet16_v1;   //!
   TBranch        *b_HLT_PAL1SingleJet16_v1_Prescl;   //!
   TBranch        *b_HLT_PAL1SingleJet36_v1;   //!
   TBranch        *b_HLT_PAL1SingleJet36_v1_Prescl;   //!
   TBranch        *b_HLT_PASingleForJet15_v1;   //!
   TBranch        *b_HLT_PASingleForJet15_v1_Prescl;   //!
   TBranch        *b_HLT_PASingleForJet25_v1;   //!
   TBranch        *b_HLT_PASingleForJet25_v1_Prescl;   //!


   TBranch        *b_HLT_PAJet20_NoJetID_v1;   //!
   TBranch        *b_HLT_PAJet20_NoJetID_v1_Prescl;   //!
   TBranch        *b_HLT_PAJet20_NoJetID_v1_trigObject; //!

   TBranch        *b_HLT_PAJet40_NoJetID_v1;   //!
   TBranch        *b_HLT_PAJet40_NoJetID_v1_Prescl;   //!
   TBranch        *b_HLT_PAJet40_NoJetID_v1_trigObject; //!

   TBranch        *b_HLT_PAJet60_NoJetID_v1;   //!
   TBranch        *b_HLT_PAJet60_NoJetID_v1_Prescl;   //!
   TBranch        *b_HLT_PAJet60_NoJetID_v1_trigObject; //!

   TBranch        *b_HLT_PAJet80_NoJetID_v1;   //!
   TBranch        *b_HLT_PAJet80_NoJetID_v1_Prescl;   //!
   TBranch        *b_HLT_PAJet80_NoJetID_v1_trigObject; //!

   TBranch        *b_HLT_PAJet100_NoJetID_v1;   //!
   TBranch        *b_HLT_PAJet100_NoJetID_v1_Prescl;   //!
   TBranch        *b_HLT_PAJet100_NoJetID_v1_trigObject; //!

   TBranch        *b_HLT_PAJet120_NoJetID_v1;   //!
   TBranch        *b_HLT_PAJet120_NoJetID_v1_Prescl;   //!
   TBranch        *b_HLT_PAJet120_NoJetID_v1_trigObject; //!


   TBranch        *b_HLT_PAForJet20Eta2_v1;   //!
   TBranch        *b_HLT_PAForJet20Eta2_v1_Prescl;   //!
   TBranch        *b_HLT_PAForJet40Eta2_v1;   //!
   TBranch        *b_HLT_PAForJet40Eta2_v1_Prescl;   //!
   TBranch        *b_HLT_PAForJet60Eta2_v1;   //!
   TBranch        *b_HLT_PAForJet60Eta2_v1_Prescl;   //!
   TBranch        *b_HLT_PAForJet80Eta2_v1;   //!
   TBranch        *b_HLT_PAForJet80Eta2_v1_Prescl;   //!
   TBranch        *b_HLT_PAForJet100Eta2_v1;   //!
   TBranch        *b_HLT_PAForJet100Eta2_v1_Prescl;   //!
   TBranch        *b_HLT_PAForJet20Eta3_v1;   //!
   TBranch        *b_HLT_PAForJet20Eta3_v1_Prescl;   //!
   TBranch        *b_HLT_PAForJet40Eta3_v1;   //!
   TBranch        *b_HLT_PAForJet40Eta3_v1_Prescl;   //!
   TBranch        *b_HLT_PAForJet60Eta3_v1;   //!
   TBranch        *b_HLT_PAForJet60Eta3_v1_Prescl;   //!
   TBranch        *b_HLT_PAForJet80Eta3_v1;   //!
   TBranch        *b_HLT_PAForJet80Eta3_v1_Prescl;   //!
   TBranch        *b_HLT_PAForJet100Eta3_v1;   //!
   TBranch        *b_HLT_PAForJet100Eta3_v1_Prescl;   //!
   TBranch        *b_HLT_PATripleJet20_20_20_v1;   //!
   TBranch        *b_HLT_PATripleJet20_20_20_v1_Prescl;   //!
   TBranch        *b_HLT_PATripleJet40_20_20_v1;   //!
   TBranch        *b_HLT_PATripleJet40_20_20_v1_Prescl;   //!
   TBranch        *b_HLT_PATripleJet60_20_20_v1;   //!
   TBranch        *b_HLT_PATripleJet60_20_20_v1_Prescl;   //!
   TBranch        *b_HLT_PATripleJet80_20_20_v1;   //!
   TBranch        *b_HLT_PATripleJet80_20_20_v1_Prescl;   //!
   TBranch        *b_HLT_PATripleJet100_20_20_v1;   //!
   TBranch        *b_HLT_PATripleJet100_20_20_v1_Prescl;   //!
   TBranch        *b_HLT_PAJet40ETM30_v1;   //!
   TBranch        *b_HLT_PAJet40ETM30_v1_Prescl;   //!
   TBranch        *b_HLT_PAJet60ETM30_v1;   //!
   TBranch        *b_HLT_PAJet60ETM30_v1_Prescl;   //!
   TBranch        *b_HLT_PAL1DoubleMu0_v1;   //!
   TBranch        *b_HLT_PAL1DoubleMu0_v1_Prescl;   //!
   TBranch        *b_HLT_PADimuon0_NoVertexing_v1;   //!
   TBranch        *b_HLT_PADimuon0_NoVertexing_v1_Prescl;   //!
   TBranch        *b_HLT_PAL1DoubleMu0_HighQ_v1;   //!
   TBranch        *b_HLT_PAL1DoubleMu0_HighQ_v1_Prescl;   //!
   TBranch        *b_HLT_PAL1DoubleMuOpen_v1;   //!
   TBranch        *b_HLT_PAL1DoubleMuOpen_v1_Prescl;   //!
   TBranch        *b_HLT_PAL2DoubleMu3_v1;   //!
   TBranch        *b_HLT_PAL2DoubleMu3_v1_Prescl;   //!
   TBranch        *b_HLT_PAMu3_v1;   //!
   TBranch        *b_HLT_PAMu3_v1_Prescl;   //!
   TBranch        *b_HLT_PAMu7_v1;   //!
   TBranch        *b_HLT_PAMu7_v1_Prescl;   //!
   TBranch        *b_HLT_PAMu12_v1;   //!
   TBranch        *b_HLT_PAMu12_v1_Prescl;   //!
   TBranch        *b_HLT_PABTagMu_Jet20_Mu4_v1;   //!
   TBranch        *b_HLT_PABTagMu_Jet20_Mu4_v1_Prescl;   //!
   TBranch        *b_HLT_PAMu3PFJet20_v1;   //!
   TBranch        *b_HLT_PAMu3PFJet20_v1_Prescl;   //!
   TBranch        *b_HLT_PAMu3PFJet40_v1;   //!
   TBranch        *b_HLT_PAMu3PFJet40_v1_Prescl;   //!
   TBranch        *b_HLT_PAMu7PFJet20_v1;   //!
   TBranch        *b_HLT_PAMu7PFJet20_v1_Prescl;   //!
   TBranch        *b_HLT_PAPhoton10_NoCaloIdVL_v1;   //!
   TBranch        *b_HLT_PAPhoton10_NoCaloIdVL_v1_Prescl;   //!
   TBranch        *b_HLT_PAPhoton15_NoCaloIdVL_v1;   //!
   TBranch        *b_HLT_PAPhoton15_NoCaloIdVL_v1_Prescl;   //!
   TBranch        *b_HLT_PAPhoton20_NoCaloIdVL_v1;   //!
   TBranch        *b_HLT_PAPhoton20_NoCaloIdVL_v1_Prescl;   //!
   TBranch        *b_HLT_PAPhoton30_NoCaloIdVL_v1;   //!
   TBranch        *b_HLT_PAPhoton30_NoCaloIdVL_v1_Prescl;   //!
   TBranch        *b_HLT_PAPhoton40_NoCaloIdVL_v1;   //!
   TBranch        *b_HLT_PAPhoton40_NoCaloIdVL_v1_Prescl;   //!
   TBranch        *b_HLT_PAPhoton60_NoCaloIdVL_v1;   //!
   TBranch        *b_HLT_PAPhoton60_NoCaloIdVL_v1_Prescl;   //!
   TBranch        *b_HLT_PAPhoton10_TightCaloIdVL_v1;   //!
   TBranch        *b_HLT_PAPhoton10_TightCaloIdVL_v1_Prescl;   //!
   TBranch        *b_HLT_PAPhoton15_TightCaloIdVL_v1;   //!
   TBranch        *b_HLT_PAPhoton15_TightCaloIdVL_v1_Prescl;   //!
   TBranch        *b_HLT_PAPhoton20_TightCaloIdVL_v1;   //!
   TBranch        *b_HLT_PAPhoton20_TightCaloIdVL_v1_Prescl;   //!
   TBranch        *b_HLT_PAPhoton30_TightCaloIdVL_v1;   //!
   TBranch        *b_HLT_PAPhoton30_TightCaloIdVL_v1_Prescl;   //!
   TBranch        *b_HLT_PAPhoton40_TightCaloIdVL_v1;   //!
   TBranch        *b_HLT_PAPhoton40_TightCaloIdVL_v1_Prescl;   //!
   TBranch        *b_HLT_PAPhoton10_TightCaloIdVL_Iso50_v1;   //!
   TBranch        *b_HLT_PAPhoton10_TightCaloIdVL_Iso50_v1_Prescl;   //!
   TBranch        *b_HLT_PAPhoton15_TightCaloIdVL_Iso50_v1;   //!
   TBranch        *b_HLT_PAPhoton15_TightCaloIdVL_Iso50_v1_Prescl;   //!
   TBranch        *b_HLT_PAPhoton20_TightCaloIdVL_Iso50_v1;   //!
   TBranch        *b_HLT_PAPhoton20_TightCaloIdVL_Iso50_v1_Prescl;   //!
   TBranch        *b_HLT_PAPhoton30_TightCaloIdVL_Iso50_v1;   //!
   TBranch        *b_HLT_PAPhoton30_TightCaloIdVL_Iso50_v1_Prescl;   //!
   TBranch        *b_HLT_PAPhoton10_Photon10_NoCaloIdVL_v1;   //!
   TBranch        *b_HLT_PAPhoton10_Photon10_NoCaloIdVL_v1_Prescl;   //!
   TBranch        *b_HLT_PAPhoton15_Photon10_NoCaloIdVL_v1;   //!
   TBranch        *b_HLT_PAPhoton15_Photon10_NoCaloIdVL_v1_Prescl;   //!
   TBranch        *b_HLT_PAPhoton20_Photon15_NoCaloIdVL_v1;   //!
   TBranch        *b_HLT_PAPhoton20_Photon15_NoCaloIdVL_v1_Prescl;   //!
   TBranch        *b_HLT_PAPhoton20_Photon20_NoCaloIdVL_v1;   //!
   TBranch        *b_HLT_PAPhoton20_Photon20_NoCaloIdVL_v1_Prescl;   //!
   TBranch        *b_HLT_PAPhoton30_Photon30_NoCaloIdVL_v1;   //!
   TBranch        *b_HLT_PAPhoton30_Photon30_NoCaloIdVL_v1_Prescl;   //!
   TBranch        *b_HLT_PAPhoton10_Photon10_TightCaloIdVL_v1;   //!
   TBranch        *b_HLT_PAPhoton10_Photon10_TightCaloIdVL_v1_Prescl;   //!
   TBranch        *b_HLT_PAPhoton10_Photon10_TightCaloIdVL_Iso50_v1;   //!
   TBranch        *b_HLT_PAPhoton10_Photon10_TightCaloIdVL_Iso50_v1_Prescl;   //!
   TBranch        *b_HLT_PAPhoton15_Photon10_TightCaloIdVL_v1;   //!
   TBranch        *b_HLT_PAPhoton15_Photon10_TightCaloIdVL_v1_Prescl;   //!
   TBranch        *b_HLT_PAPhoton20_Photon15_TightCaloIdVL_v1;   //!
   TBranch        *b_HLT_PAPhoton20_Photon15_TightCaloIdVL_v1_Prescl;   //!
   TBranch        *b_HLT_PASingleEle6_CaloIdT_TrkIdVL_v1;   //!
   TBranch        *b_HLT_PASingleEle6_CaloIdT_TrkIdVL_v1_Prescl;   //!
   TBranch        *b_HLT_PASingleEle6_CaloIdNone_TrkIdVL_v1;   //!
   TBranch        *b_HLT_PASingleEle6_CaloIdNone_TrkIdVL_v1_Prescl;   //!
   TBranch        *b_HLT_PASingleEle8_CaloIdNone_TrkIdVL_v1;   //!
   TBranch        *b_HLT_PASingleEle8_CaloIdNone_TrkIdVL_v1_Prescl;   //!
   TBranch        *b_HLT_PAL1DoubleEG5DoubleEle6_CaloIdT_TrkIdVL_v1;   //!
   TBranch        *b_HLT_PAL1DoubleEG5DoubleEle6_CaloIdT_TrkIdVL_v1_Prescl;   //!
   TBranch        *b_HLT_PADoubleEle6_CaloIdT_TrkIdVL_v1;   //!
   TBranch        *b_HLT_PADoubleEle6_CaloIdT_TrkIdVL_v1_Prescl;   //!
   TBranch        *b_HLT_PADoubleEle8_CaloIdT_TrkIdVL_v1;   //!
   TBranch        *b_HLT_PADoubleEle8_CaloIdT_TrkIdVL_v1_Prescl;   //!
   TBranch        *b_HLT_PAPixelTracks_Multiplicity100_v1;   //!
   TBranch        *b_HLT_PAPixelTracks_Multiplicity100_v1_Prescl;   //!
   TBranch        *b_HLT_PAPixelTracks_Multiplicity130_v1;   //!
   TBranch        *b_HLT_PAPixelTracks_Multiplicity130_v1_Prescl;   //!
   TBranch        *b_HLT_PAPixelTracks_Multiplicity160_v1;   //!
   TBranch        *b_HLT_PAPixelTracks_Multiplicity160_v1_Prescl;   //!
   TBranch        *b_HLT_PAPixelTracks_Multiplicity190_v1;   //!
   TBranch        *b_HLT_PAPixelTracks_Multiplicity190_v1_Prescl;   //!
   TBranch        *b_HLT_PAPixelTracks_Multiplicity220_v1;   //!
   TBranch        *b_HLT_PAPixelTracks_Multiplicity220_v1_Prescl;   //!
   TBranch        *b_HLT_PAPixelTrackMultiplicity100_FullTrack12_v1;   //!
   TBranch        *b_HLT_PAPixelTrackMultiplicity100_FullTrack12_v1_Prescl;   //!
   TBranch        *b_HLT_PAPixelTrackMultiplicity130_FullTrack12_v1;   //!
   TBranch        *b_HLT_PAPixelTrackMultiplicity130_FullTrack12_v1_Prescl;   //!
   TBranch        *b_HLT_PAPixelTrackMultiplicity160_FullTrack12_v1;   //!
   TBranch        *b_HLT_PAPixelTrackMultiplicity160_FullTrack12_v1_Prescl;   //!
   TBranch        *b_HLT_PAPixelTrackMultiplicity100_L2DoubleMu3_v1;   //!
   TBranch        *b_HLT_PAPixelTrackMultiplicity100_L2DoubleMu3_v1_Prescl;   //!
   TBranch        *b_HLT_PAPixelTrackMultiplicity140_Jet80_NoJetID_v1;   //!
   TBranch        *b_HLT_PAPixelTrackMultiplicity140_Jet80_NoJetID_v1_Prescl;   //!
   TBranch        *b_HLT_PATech35_v1;   //!
   TBranch        *b_HLT_PATech35_v1_Prescl;   //!
   TBranch        *b_HLT_PATech35_HFSumET100_v1;   //!
   TBranch        *b_HLT_PATech35_HFSumET100_v1_Prescl;   //!
   TBranch        *b_HLT_PAFullTrack12_v1;   //!
   TBranch        *b_HLT_PAFullTrack12_v1_Prescl;   //!
   TBranch        *b_HLT_PAFullTrack20_v1;   //!
   TBranch        *b_HLT_PAFullTrack20_v1_Prescl;   //!
   TBranch        *b_HLT_PAFullTrack30_v1;   //!
   TBranch        *b_HLT_PAFullTrack30_v1_Prescl;   //!
   TBranch        *b_HLT_PAFullTrack50_v1;   //!
   TBranch        *b_HLT_PAFullTrack50_v1_Prescl;   //!
   TBranch        *b_HLT_PAHFSumET100_v1;   //!
   TBranch        *b_HLT_PAHFSumET100_v1_Prescl;   //!
   TBranch        *b_HLT_PAHFSumET140_v1;   //!
   TBranch        *b_HLT_PAHFSumET140_v1_Prescl;   //!
   TBranch        *b_HLT_PAHFSumET170_v1;   //!
   TBranch        *b_HLT_PAHFSumET170_v1_Prescl;   //!
   TBranch        *b_HLT_PAHFSumET210_v1;   //!
   TBranch        *b_HLT_PAHFSumET210_v1_Prescl;   //!
   TBranch        *b_HLT_PARomanPots_Tech52_v1;   //!
   TBranch        *b_HLT_PARomanPots_Tech52_v1_Prescl;   //!
   TBranch        *b_HLT_PAL1Tech53_MB_v1;   //!
   TBranch        *b_HLT_PAL1Tech53_MB_v1_Prescl;   //!
   TBranch        *b_HLT_PAL1Tech53_MB_SingleTrack_v1;   //!
   TBranch        *b_HLT_PAL1Tech53_MB_SingleTrack_v1_Prescl;   //!
   TBranch        *b_HLT_PAL1Tech54_ZeroBias_v1;   //!
   TBranch        *b_HLT_PAL1Tech54_ZeroBias_v1_Prescl;   //!
   TBranch        *b_HLT_PAT1minbias_Tech55_v1;   //!
   TBranch        *b_HLT_PAT1minbias_Tech55_v1_Prescl;   //!
   TBranch        *b_HLT_PAL1Tech_HBHEHO_totalOR_v1;   //!
   TBranch        *b_HLT_PAL1Tech_HBHEHO_totalOR_v1_Prescl;   //!
   TBranch        *b_HLT_PAL1Tech63_CASTORHaloMuon_v1;   //!
   TBranch        *b_HLT_PAL1Tech63_CASTORHaloMuon_v1_Prescl;   //!
   TBranch        *b_HLT_PACastorEmTotemLowMultiplicity_v1;   //!
   TBranch        *b_HLT_PACastorEmTotemLowMultiplicity_v1_Prescl;   //!
   TBranch        *b_HLT_PACastorEmNotHfCoincidencePm_v1;   //!
   TBranch        *b_HLT_PACastorEmNotHfCoincidencePm_v1_Prescl;   //!
   TBranch        *b_HLT_PACastorEmNotHfSingleChannel_v1;   //!
   TBranch        *b_HLT_PACastorEmNotHfSingleChannel_v1_Prescl;   //!
   TBranch        *b_HLT_PAL1CastorTotalTotemLowMultiplicity_v1;   //!
   TBranch        *b_HLT_PAL1CastorTotalTotemLowMultiplicity_v1_Prescl;   //!
   TBranch        *b_HLT_PAMinBiasHF_v1;   //!
   TBranch        *b_HLT_PAMinBiasHF_v1_Prescl;   //!
   TBranch        *b_HLT_PAMinBiasHF_OR_v1;   //!
   TBranch        *b_HLT_PAMinBiasHF_OR_v1_Prescl;   //!
   TBranch        *b_HLT_PAMinBiasBHC_v1;   //!
   TBranch        *b_HLT_PAMinBiasBHC_v1_Prescl;   //!
   TBranch        *b_HLT_PAMinBiasBHC_OR_v1;   //!
   TBranch        *b_HLT_PAMinBiasBHC_OR_v1_Prescl;   //!
   TBranch        *b_HLT_PAMinBiasHfOrBHC_v1;   //!
   TBranch        *b_HLT_PAMinBiasHfOrBHC_v1_Prescl;   //!
   TBranch        *b_HLT_PABptxPlusNotBptxMinus_v1;   //!
   TBranch        *b_HLT_PABptxPlusNotBptxMinus_v1_Prescl;   //!
   TBranch        *b_HLT_PABptxMinusNotBptxPlus_v1;   //!
   TBranch        *b_HLT_PABptxMinusNotBptxPlus_v1_Prescl;   //!
   TBranch        *b_HLT_PAZeroBias_v1;   //!
   TBranch        *b_HLT_PAZeroBias_v1_Prescl;   //!
   TBranch        *b_HLT_PAZeroBiasPixel_SingleTrack_v1;   //!
   TBranch        *b_HLT_PAZeroBiasPixel_SingleTrack_v1_Prescl;   //!
   TBranch        *b_HLT_PAHFOR_SingleTrack_v1;   //!
   TBranch        *b_HLT_PAHFOR_SingleTrack_v1_Prescl;   //!
   TBranch        *b_HLT_PAZeroBiasPixel_DoubleTrack_v1;   //!
   TBranch        *b_HLT_PAZeroBiasPixel_DoubleTrack_v1_Prescl;   //!
   TBranch        *b_HLT_PADoubleMu4_Acoplanarity03_v1;   //!
   TBranch        *b_HLT_PADoubleMu4_Acoplanarity03_v1_Prescl;   //!
   TBranch        *b_HLT_PAExclDijet35_HFAND_v1;   //!
   TBranch        *b_HLT_PAExclDijet35_HFAND_v1_Prescl;   //!
   TBranch        *b_HLT_PAL1DoubleEG3_FwdVeto_v1;   //!
   TBranch        *b_HLT_PAL1DoubleEG3_FwdVeto_v1_Prescl;   //!
   TBranch        *b_HLT_PAL1DoubleJet20_TotemDiffractive_v1;   //!
   TBranch        *b_HLT_PAL1DoubleJet20_TotemDiffractive_v1_Prescl;   //!
   TBranch        *b_HLT_PADoubleJet20_ForwardBackward_v1;   //!
   TBranch        *b_HLT_PADoubleJet20_ForwardBackward_v1_Prescl;   //!
   TBranch        *b_HLT_PAMu7_Ele7_CaloIdT_CaloIsoVL_v1;   //!
   TBranch        *b_HLT_PAMu7_Ele7_CaloIdT_CaloIsoVL_v1_Prescl;   //!
   TBranch        *b_HLT_PAUpcSingleEG5Pixel_TrackVeto_v1;   //!
   TBranch        *b_HLT_PAUpcSingleEG5Pixel_TrackVeto_v1_Prescl;   //!
   TBranch        *b_HLT_PAUpcSingleEG5Full_TrackVeto7_v1;   //!
   TBranch        *b_HLT_PAUpcSingleEG5Full_TrackVeto7_v1_Prescl;   //!
   TBranch        *b_HLT_PAUpcSingleMuOpenPixel_TrackVeto_v1;   //!
   TBranch        *b_HLT_PAUpcSingleMuOpenPixel_TrackVeto_v1_Prescl;   //!
   TBranch        *b_HLT_PAUpcSingleMuOpenFull_TrackVeto7_v1;   //!
   TBranch        *b_HLT_PAUpcSingleMuOpenFull_TrackVeto7_v1_Prescl;   //!
   TBranch        *b_HLT_PAUpcSingleMuOpenTkMu_Onia_v1;   //!
   TBranch        *b_HLT_PAUpcSingleMuOpenTkMu_Onia_v1_Prescl;   //!
   TBranch        *b_HLT_PARandom_v1;   //!
   TBranch        *b_HLT_PARandom_v1_Prescl;   //!
   TBranch        *b_DQM_FEDIntegrity_v11;   //!
   TBranch        *b_DQM_FEDIntegrity_v11_Prescl;   //!
   TBranch        *b_HLT_LogMonitor_v4;   //!
   TBranch        *b_HLT_LogMonitor_v4_Prescl;   //!
   TBranch        *b_HLTriggerFinalPath;   //!
   TBranch        *b_HLTriggerFinalPath_Prescl;   //!
   TBranch        *b_L1_AlwaysTrue;   //!
   TBranch        *b_L1_AlwaysTrue_Prescl;   //!
   TBranch        *b_L1_BeamGas_Hf_BptxMinusPostQuiet;   //!
   TBranch        *b_L1_BeamGas_Hf_BptxMinusPostQuiet_Prescl;   //!
   TBranch        *b_L1_BeamGas_Hf_BptxPlusPostQuiet;   //!
   TBranch        *b_L1_BeamGas_Hf_BptxPlusPostQuiet_Prescl;   //!
   TBranch        *b_L1_BeamHalo;   //!
   TBranch        *b_L1_BeamHalo_Prescl;   //!
   TBranch        *b_L1_BptxMinus_NotBptxPlus;   //!
   TBranch        *b_L1_BptxMinus_NotBptxPlus_Prescl;   //!
   TBranch        *b_L1_BptxPlus_NotBptxMinus;   //!
   TBranch        *b_L1_BptxPlus_NotBptxMinus_Prescl;   //!
   TBranch        *b_L1_BscHighMultiplicity_BptxAND;   //!
   TBranch        *b_L1_BscHighMultiplicity_BptxAND_Prescl;   //!
   TBranch        *b_L1_BscMinBiasOR_BptxAND;   //!
   TBranch        *b_L1_BscMinBiasOR_BptxAND_Prescl;   //!
   TBranch        *b_L1_BscMinBiasThreshold1_BptxAND;   //!
   TBranch        *b_L1_BscMinBiasThreshold1_BptxAND_Prescl;   //!
   TBranch        *b_L1_BscMinBiasThreshold2_BptxAND;   //!
   TBranch        *b_L1_BscMinBiasThreshold2_BptxAND_Prescl;   //!
   TBranch        *b_L1_CastorEm_NotHcalHfCoincidencePm;   //!
   TBranch        *b_L1_CastorEm_NotHcalHfCoincidencePm_Prescl;   //!
   TBranch        *b_L1_CastorEm_NotHcalHfSingleChannel;   //!
   TBranch        *b_L1_CastorEm_NotHcalHfSingleChannel_Prescl;   //!
   TBranch        *b_L1_CastorEm_TotemLowMultiplicity;   //!
   TBranch        *b_L1_CastorEm_TotemLowMultiplicity_Prescl;   //!
   TBranch        *b_L1_CastorTotalEnergy_TotemLowMultiplicity;   //!
   TBranch        *b_L1_CastorTotalEnergy_TotemLowMultiplicity_Prescl;   //!
   TBranch        *b_L1_DoubleEG3_FwdVeto;   //!
   TBranch        *b_L1_DoubleEG3_FwdVeto_Prescl;   //!
   TBranch        *b_L1_DoubleEG5;   //!
   TBranch        *b_L1_DoubleEG5_Prescl;   //!
   TBranch        *b_L1_DoubleEG5_TotemDiffractive;   //!
   TBranch        *b_L1_DoubleEG5_TotemDiffractive_Prescl;   //!
   TBranch        *b_L1_DoubleEG6_HTT100;   //!
   TBranch        *b_L1_DoubleEG6_HTT100_Prescl;   //!
   TBranch        *b_L1_DoubleEG6_HTT125;   //!
   TBranch        *b_L1_DoubleEG6_HTT125_Prescl;   //!
   TBranch        *b_L1_DoubleEG_13_7;   //!
   TBranch        *b_L1_DoubleEG_13_7_Prescl;   //!
   TBranch        *b_L1_DoubleForJet16_EtaOpp;   //!
   TBranch        *b_L1_DoubleForJet16_EtaOpp_Prescl;   //!
   TBranch        *b_L1_DoubleJet20;   //!
   TBranch        *b_L1_DoubleJet20_Prescl;   //!
   TBranch        *b_L1_DoubleJet20_TotemDiffractive;   //!
   TBranch        *b_L1_DoubleJet20_TotemDiffractive_Prescl;   //!
   TBranch        *b_L1_DoubleJet24_v1;   //!
   TBranch        *b_L1_DoubleJet24_v1_Prescl;   //!
   TBranch        *b_L1_DoubleJet36_Central;   //!
   TBranch        *b_L1_DoubleJet36_Central_Prescl;   //!
   TBranch        *b_L1_DoubleJet52_Central;   //!
   TBranch        *b_L1_DoubleJet52_Central_Prescl;   //!
   TBranch        *b_L1_DoubleJetC36_TotemDiffractive;   //!
   TBranch        *b_L1_DoubleJetC36_TotemDiffractive_Prescl;   //!
   TBranch        *b_L1_DoubleJetC44_ETM30;   //!
   TBranch        *b_L1_DoubleJetC44_ETM30_Prescl;   //!
   TBranch        *b_L1_DoubleJetC56;   //!
   TBranch        *b_L1_DoubleJetC56_Prescl;   //!
   TBranch        *b_L1_DoubleJetC56_Eta1p74_WdEta4;   //!
   TBranch        *b_L1_DoubleJetC56_Eta1p74_WdEta4_Prescl;   //!
   TBranch        *b_L1_DoubleMu0;   //!
   TBranch        *b_L1_DoubleMu0_Prescl;   //!
   TBranch        *b_L1_DoubleMu0_HighQ_EtaCuts;   //!
   TBranch        *b_L1_DoubleMu0_HighQ_EtaCuts_Prescl;   //!
   TBranch        *b_L1_DoubleMu3p5_EG5;   //!
   TBranch        *b_L1_DoubleMu3p5_EG5_Prescl;   //!
   TBranch        *b_L1_DoubleMu5_EG5;   //!
   TBranch        *b_L1_DoubleMu5_EG5_Prescl;   //!
   TBranch        *b_L1_DoubleMu5_TotemDiffractive;   //!
   TBranch        *b_L1_DoubleMu5_TotemDiffractive_Prescl;   //!
   TBranch        *b_L1_DoubleMu5_v1;   //!
   TBranch        *b_L1_DoubleMu5_v1_Prescl;   //!
   TBranch        *b_L1_DoubleMuOpen_BptxAND;   //!
   TBranch        *b_L1_DoubleMuOpen_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleMu_10_3p5;   //!
   TBranch        *b_L1_DoubleMu_10_3p5_Prescl;   //!
   TBranch        *b_L1_DoubleMu_10_Open;   //!
   TBranch        *b_L1_DoubleMu_10_Open_Prescl;   //!
   TBranch        *b_L1_DoubleMu_12_5;   //!
   TBranch        *b_L1_DoubleMu_12_5_Prescl;   //!
   TBranch        *b_L1_DoubleMu_3er_0er_HighQ_WdEta22;   //!
   TBranch        *b_L1_DoubleMu_3er_0er_HighQ_WdEta22_Prescl;   //!
   TBranch        *b_L1_DoubleMu_5er_0er_HighQ_WdEta22;   //!
   TBranch        *b_L1_DoubleMu_5er_0er_HighQ_WdEta22_Prescl;   //!
   TBranch        *b_L1_EG8_DoubleJetC20;   //!
   TBranch        *b_L1_EG8_DoubleJetC20_Prescl;   //!
   TBranch        *b_L1_ETM100;   //!
   TBranch        *b_L1_ETM100_Prescl;   //!
   TBranch        *b_L1_ETM30;   //!
   TBranch        *b_L1_ETM30_Prescl;   //!
   TBranch        *b_L1_ETM36;   //!
   TBranch        *b_L1_ETM36_Prescl;   //!
   TBranch        *b_L1_ETM40;   //!
   TBranch        *b_L1_ETM40_Prescl;   //!
   TBranch        *b_L1_ETM50;   //!
   TBranch        *b_L1_ETM50_Prescl;   //!
   TBranch        *b_L1_ETM70;   //!
   TBranch        *b_L1_ETM70_Prescl;   //!
   TBranch        *b_L1_ETT140;   //!
   TBranch        *b_L1_ETT140_Prescl;   //!
   TBranch        *b_L1_ETT20_BptxAND;   //!
   TBranch        *b_L1_ETT20_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT300;   //!
   TBranch        *b_L1_ETT300_Prescl;   //!
   TBranch        *b_L1_ETT40;   //!
   TBranch        *b_L1_ETT40_Prescl;   //!
   TBranch        *b_L1_ETT60;   //!
   TBranch        *b_L1_ETT60_Prescl;   //!
   TBranch        *b_L1_ETT80;   //!
   TBranch        *b_L1_ETT80_Prescl;   //!
   TBranch        *b_L1_HTT100;   //!
   TBranch        *b_L1_HTT100_Prescl;   //!
   TBranch        *b_L1_HTT125;   //!
   TBranch        *b_L1_HTT125_Prescl;   //!
   TBranch        *b_L1_HTT150;   //!
   TBranch        *b_L1_HTT150_Prescl;   //!
   TBranch        *b_L1_HTT175;   //!
   TBranch        *b_L1_HTT175_Prescl;   //!
   TBranch        *b_L1_HTT200;   //!
   TBranch        *b_L1_HTT200_Prescl;   //!
   TBranch        *b_L1_HTT50;   //!
   TBranch        *b_L1_HTT50_Prescl;   //!
   TBranch        *b_L1_HTT75;   //!
   TBranch        *b_L1_HTT75_Prescl;   //!
   TBranch        *b_L1_HcalHfCoincidencePm_BptxAND_v1;   //!
   TBranch        *b_L1_HcalHfCoincidencePm_BptxAND_v1_Prescl;   //!
   TBranch        *b_L1_HcalHfSingleChannel_BptxAND;   //!
   TBranch        *b_L1_HcalHfSingleChannel_BptxAND_Prescl;   //!
   TBranch        *b_L1_Mu10er_JetC32;   //!
   TBranch        *b_L1_Mu10er_JetC32_Prescl;   //!
   TBranch        *b_L1_Mu12_EG7;   //!
   TBranch        *b_L1_Mu12_EG7_Prescl;   //!
   TBranch        *b_L1_Mu3_Jet16;   //!
   TBranch        *b_L1_Mu3_Jet16_Prescl;   //!
   TBranch        *b_L1_Mu3_Jet36;   //!
   TBranch        *b_L1_Mu3_Jet36_Prescl;   //!
   TBranch        *b_L1_Mu3_JetC16_WdEtaPhi2;   //!
   TBranch        *b_L1_Mu3_JetC16_WdEtaPhi2_Prescl;   //!
   TBranch        *b_L1_Mu3_JetC52_WdEtaPhi2;   //!
   TBranch        *b_L1_Mu3_JetC52_WdEtaPhi2_Prescl;   //!
   TBranch        *b_L1_Mu5_DoubleEG5;   //!
   TBranch        *b_L1_Mu5_DoubleEG5_Prescl;   //!
   TBranch        *b_L1_Mu5_DoubleEG6;   //!
   TBranch        *b_L1_Mu5_DoubleEG6_Prescl;   //!
   TBranch        *b_L1_Mu7_Jet16;   //!
   TBranch        *b_L1_Mu7_Jet16_Prescl;   //!
   TBranch        *b_L1_Mu8_DoubleJetC20;   //!
   TBranch        *b_L1_Mu8_DoubleJetC20_Prescl;   //!
   TBranch        *b_L1_MuOpen_EG12;   //!
   TBranch        *b_L1_MuOpen_EG12_Prescl;   //!
   TBranch        *b_L1_MuOpen_EG5;   //!
   TBranch        *b_L1_MuOpen_EG5_Prescl;   //!
   TBranch        *b_L1_QuadJetC32;   //!
   TBranch        *b_L1_QuadJetC32_Prescl;   //!
   TBranch        *b_L1_QuadJetC36;   //!
   TBranch        *b_L1_QuadJetC36_Prescl;   //!
   TBranch        *b_L1_QuadJetC40;   //!
   TBranch        *b_L1_QuadJetC40_Prescl;   //!
   TBranch        *b_L1_SingleEG12;   //!
   TBranch        *b_L1_SingleEG12_Prescl;   //!
   TBranch        *b_L1_SingleEG18er;   //!
   TBranch        *b_L1_SingleEG18er_Prescl;   //!
   TBranch        *b_L1_SingleEG20;   //!
   TBranch        *b_L1_SingleEG20_Prescl;   //!
   TBranch        *b_L1_SingleEG20_TotemDiffractive;   //!
   TBranch        *b_L1_SingleEG20_TotemDiffractive_Prescl;   //!
   TBranch        *b_L1_SingleEG22;   //!
   TBranch        *b_L1_SingleEG22_Prescl;   //!
   TBranch        *b_L1_SingleEG24;   //!
   TBranch        *b_L1_SingleEG24_Prescl;   //!
   TBranch        *b_L1_SingleEG30;   //!
   TBranch        *b_L1_SingleEG30_Prescl;   //!
   TBranch        *b_L1_SingleEG5_BptxAND;   //!
   TBranch        *b_L1_SingleEG5_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG7;   //!
   TBranch        *b_L1_SingleEG7_Prescl;   //!
   TBranch        *b_L1_SingleForJet16;   //!
   TBranch        *b_L1_SingleForJet16_Prescl;   //!
   TBranch        *b_L1_SingleIsoEG18er;   //!
   TBranch        *b_L1_SingleIsoEG18er_Prescl;   //!
   TBranch        *b_L1_SingleIsoEG20er;   //!
   TBranch        *b_L1_SingleIsoEG20er_Prescl;   //!
   TBranch        *b_L1_SingleJet128;   //!
   TBranch        *b_L1_SingleJet128_Prescl;   //!
   TBranch        *b_L1_SingleJet12_BptxAND;   //!
   TBranch        *b_L1_SingleJet12_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet16_BptxAND;   //!
   TBranch        *b_L1_SingleJet16_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet16_FwdVeto5;   //!
   TBranch        *b_L1_SingleJet16_FwdVeto5_Prescl;   //!
   TBranch        *b_L1_SingleJet20_Central_NotBptxOR;   //!
   TBranch        *b_L1_SingleJet20_Central_NotBptxOR_Prescl;   //!
   TBranch        *b_L1_SingleJet36;   //!
   TBranch        *b_L1_SingleJet36_Prescl;   //!
   TBranch        *b_L1_SingleJet36_FwdVeto5;   //!
   TBranch        *b_L1_SingleJet36_FwdVeto5_Prescl;   //!
   TBranch        *b_L1_SingleJet52;   //!
   TBranch        *b_L1_SingleJet52_Prescl;   //!
   TBranch        *b_L1_SingleJet52_TotemDiffractive;   //!
   TBranch        *b_L1_SingleJet52_TotemDiffractive_Prescl;   //!
   TBranch        *b_L1_SingleJet68;   //!
   TBranch        *b_L1_SingleJet68_Prescl;   //!
   TBranch        *b_L1_SingleJet92;   //!
   TBranch        *b_L1_SingleJet92_Prescl;   //!
   TBranch        *b_L1_SingleJetC32_NotBptxOR;   //!
   TBranch        *b_L1_SingleJetC32_NotBptxOR_Prescl;   //!
   TBranch        *b_L1_SingleMu12;   //!
   TBranch        *b_L1_SingleMu12_Prescl;   //!
   TBranch        *b_L1_SingleMu12er;   //!
   TBranch        *b_L1_SingleMu12er_Prescl;   //!
   TBranch        *b_L1_SingleMu14_Eta2p1;   //!
   TBranch        *b_L1_SingleMu14_Eta2p1_Prescl;   //!
   TBranch        *b_L1_SingleMu16;   //!
   TBranch        *b_L1_SingleMu16_Prescl;   //!
   TBranch        *b_L1_SingleMu16_Eta2p1;   //!
   TBranch        *b_L1_SingleMu16_Eta2p1_Prescl;   //!
   TBranch        *b_L1_SingleMu18er;   //!
   TBranch        *b_L1_SingleMu18er_Prescl;   //!
   TBranch        *b_L1_SingleMu20;   //!
   TBranch        *b_L1_SingleMu20_Prescl;   //!
   TBranch        *b_L1_SingleMu20_TotemDiffractive;   //!
   TBranch        *b_L1_SingleMu20_TotemDiffractive_Prescl;   //!
   TBranch        *b_L1_SingleMu20er;   //!
   TBranch        *b_L1_SingleMu20er_Prescl;   //!
   TBranch        *b_L1_SingleMu25er;   //!
   TBranch        *b_L1_SingleMu25er_Prescl;   //!
   TBranch        *b_L1_SingleMu3;   //!
   TBranch        *b_L1_SingleMu3_Prescl;   //!
   TBranch        *b_L1_SingleMu6_NotBptxOR;   //!
   TBranch        *b_L1_SingleMu6_NotBptxOR_Prescl;   //!
   TBranch        *b_L1_SingleMu7;   //!
   TBranch        *b_L1_SingleMu7_Prescl;   //!
   TBranch        *b_L1_SingleMuBeamHalo;   //!
   TBranch        *b_L1_SingleMuBeamHalo_Prescl;   //!
   TBranch        *b_L1_SingleMuOpen;   //!
   TBranch        *b_L1_SingleMuOpen_Prescl;   //!
   TBranch        *b_L1_TripleEG7;   //!
   TBranch        *b_L1_TripleEG7_Prescl;   //!
   TBranch        *b_L1_TripleEG_12_7_5;   //!
   TBranch        *b_L1_TripleEG_12_7_5_Prescl;   //!
   TBranch        *b_L1_TripleJetC_52_28_28;   //!
   TBranch        *b_L1_TripleJetC_52_28_28_Prescl;   //!
   TBranch        *b_L1_TripleJet_64_44_24_VBF;   //!
   TBranch        *b_L1_TripleJet_64_44_24_VBF_Prescl;   //!
   TBranch        *b_L1_TripleJet_64_48_28_VBF;   //!
   TBranch        *b_L1_TripleJet_64_48_28_VBF_Prescl;   //!
   TBranch        *b_L1_ZdcCaloPlus_TotemDiffractive_QElastic;   //!
   TBranch        *b_L1_ZdcCaloPlus_TotemDiffractive_QElastic_Prescl;   //!
   TBranch        *b_L1_ZeroBias;   //!
   TBranch        *b_L1_ZeroBias_Prescl;   //!
   TBranch        *b_L1Tech_BPTX_PreBPTX_v0;   //!
   TBranch        *b_L1Tech_BPTX_PreBPTX_v0_Prescl;   //!
   TBranch        *b_L1Tech_BPTX_minus_v0;   //!
   TBranch        *b_L1Tech_BPTX_minus_v0_Prescl;   //!
   TBranch        *b_L1Tech_BPTX_minus_AND_not_plus_v0;   //!
   TBranch        *b_L1Tech_BPTX_minus_AND_not_plus_v0_Prescl;   //!
   TBranch        *b_L1Tech_BPTX_plus_v0;   //!
   TBranch        *b_L1Tech_BPTX_plus_v0_Prescl;   //!
   TBranch        *b_L1Tech_BPTX_plus_AND_NOT_minus_v0;   //!
   TBranch        *b_L1Tech_BPTX_plus_AND_NOT_minus_v0_Prescl;   //!
   TBranch        *b_L1Tech_BPTX_plus_AND_minus_v0;   //!
   TBranch        *b_L1Tech_BPTX_plus_AND_minus_v0_Prescl;   //!
   TBranch        *b_L1Tech_BPTX_plus_AND_minus_instance1_v0;   //!
   TBranch        *b_L1Tech_BPTX_plus_AND_minus_instance1_v0_Prescl;   //!
   TBranch        *b_L1Tech_BPTX_plus_OR_minus_v0;   //!
   TBranch        *b_L1Tech_BPTX_plus_OR_minus_v0_Prescl;   //!
   TBranch        *b_L1Tech_BPTX_quiet_v0;   //!
   TBranch        *b_L1Tech_BPTX_quiet_v0_Prescl;   //!
   TBranch        *b_L1Tech_BSC_HighMultiplicity_v0;   //!
   TBranch        *b_L1Tech_BSC_HighMultiplicity_v0_Prescl;   //!
   TBranch        *b_L1Tech_BSC_halo_beam1_inner_v0;   //!
   TBranch        *b_L1Tech_BSC_halo_beam1_inner_v0_Prescl;   //!
   TBranch        *b_L1Tech_BSC_halo_beam1_outer_v0;   //!
   TBranch        *b_L1Tech_BSC_halo_beam1_outer_v0_Prescl;   //!
   TBranch        *b_L1Tech_BSC_halo_beam2_inner_v0;   //!
   TBranch        *b_L1Tech_BSC_halo_beam2_inner_v0_Prescl;   //!
   TBranch        *b_L1Tech_BSC_halo_beam2_outer_v0;   //!
   TBranch        *b_L1Tech_BSC_halo_beam2_outer_v0_Prescl;   //!
   TBranch        *b_L1Tech_BSC_minBias_OR_v0;   //!
   TBranch        *b_L1Tech_BSC_minBias_OR_v0_Prescl;   //!
   TBranch        *b_L1Tech_BSC_minBias_inner_threshold1_v0;   //!
   TBranch        *b_L1Tech_BSC_minBias_inner_threshold1_v0_Prescl;   //!
   TBranch        *b_L1Tech_BSC_minBias_inner_threshold2_v0;   //!
   TBranch        *b_L1Tech_BSC_minBias_inner_threshold2_v0_Prescl;   //!
   TBranch        *b_L1Tech_BSC_minBias_threshold1_v0;   //!
   TBranch        *b_L1Tech_BSC_minBias_threshold1_v0_Prescl;   //!
   TBranch        *b_L1Tech_BSC_minBias_threshold2_v0;   //!
   TBranch        *b_L1Tech_BSC_minBias_threshold2_v0_Prescl;   //!
   TBranch        *b_L1Tech_BSC_splash_beam1_v0;   //!
   TBranch        *b_L1Tech_BSC_splash_beam1_v0_Prescl;   //!
   TBranch        *b_L1Tech_BSC_splash_beam2_v0;   //!
   TBranch        *b_L1Tech_BSC_splash_beam2_v0_Prescl;   //!
   TBranch        *b_L1Tech_CASTOR_0_v0;   //!
   TBranch        *b_L1Tech_CASTOR_0_v0_Prescl;   //!
   TBranch        *b_L1Tech_CASTOR_EM_v0;   //!
   TBranch        *b_L1Tech_CASTOR_EM_v0_Prescl;   //!
   TBranch        *b_L1Tech_CASTOR_HaloMuon_v0;   //!
   TBranch        *b_L1Tech_CASTOR_HaloMuon_v0_Prescl;   //!
   TBranch        *b_L1Tech_CASTOR_TotalEnergy_v0;   //!
   TBranch        *b_L1Tech_CASTOR_TotalEnergy_v0_Prescl;   //!
   TBranch        *b_L1Tech_DT_GlobalOR_v0;   //!
   TBranch        *b_L1Tech_DT_GlobalOR_v0_Prescl;   //!
   TBranch        *b_L1Tech_FSC_St3Sect45_downLeft_v0;   //!
   TBranch        *b_L1Tech_FSC_St3Sect45_downLeft_v0_Prescl;   //!
   TBranch        *b_L1Tech_FSC_St3Sect45_downRight_v0;   //!
   TBranch        *b_L1Tech_FSC_St3Sect45_downRight_v0_Prescl;   //!
   TBranch        *b_L1Tech_FSC_St3Sect45_uppLeft_v0;   //!
   TBranch        *b_L1Tech_FSC_St3Sect45_uppLeft_v0_Prescl;   //!
   TBranch        *b_L1Tech_FSC_St3Sect45_uppRight_v0;   //!
   TBranch        *b_L1Tech_FSC_St3Sect45_uppRight_v0_Prescl;   //!
   TBranch        *b_L1Tech_FSC_St3Sect56_downLeft_v0;   //!
   TBranch        *b_L1Tech_FSC_St3Sect56_downLeft_v0_Prescl;   //!
   TBranch        *b_L1Tech_FSC_St3Sect56_downRight_v0;   //!
   TBranch        *b_L1Tech_FSC_St3Sect56_downRight_v0_Prescl;   //!
   TBranch        *b_L1Tech_FSC_St3Sect56_uppLeft_v0;   //!
   TBranch        *b_L1Tech_FSC_St3Sect56_uppLeft_v0_Prescl;   //!
   TBranch        *b_L1Tech_FSC_St3Sect56_uppRight_v0;   //!
   TBranch        *b_L1Tech_FSC_St3Sect56_uppRight_v0_Prescl;   //!
   TBranch        *b_L1Tech_HCAL_HBHE_totalOR_v0;   //!
   TBranch        *b_L1Tech_HCAL_HBHE_totalOR_v0_Prescl;   //!
   TBranch        *b_L1Tech_HCAL_HF_MMP_or_MPP_v1;   //!
   TBranch        *b_L1Tech_HCAL_HF_MMP_or_MPP_v1_Prescl;   //!
   TBranch        *b_L1Tech_HCAL_HF_coincidence_PM_v2;   //!
   TBranch        *b_L1Tech_HCAL_HF_coincidence_PM_v2_Prescl;   //!
   TBranch        *b_L1Tech_HCAL_HF_single_channel_v0;   //!
   TBranch        *b_L1Tech_HCAL_HF_single_channel_v0_Prescl;   //!
   TBranch        *b_L1Tech_HCAL_HO_totalOR_v0;   //!
   TBranch        *b_L1Tech_HCAL_HO_totalOR_v0_Prescl;   //!
   TBranch        *b_L1Tech_RPC_TTU_RB0_Cosmics_v0;   //!
   TBranch        *b_L1Tech_RPC_TTU_RB0_Cosmics_v0_Prescl;   //!
   TBranch        *b_L1Tech_RPC_TTU_RBminus1_Cosmics_v0;   //!
   TBranch        *b_L1Tech_RPC_TTU_RBminus1_Cosmics_v0_Prescl;   //!
   TBranch        *b_L1Tech_RPC_TTU_RBminus2_Cosmics_v0;   //!
   TBranch        *b_L1Tech_RPC_TTU_RBminus2_Cosmics_v0_Prescl;   //!
   TBranch        *b_L1Tech_RPC_TTU_RBplus1_Cosmics_v0;   //!
   TBranch        *b_L1Tech_RPC_TTU_RBplus1_Cosmics_v0_Prescl;   //!
   TBranch        *b_L1Tech_RPC_TTU_RBplus2_Cosmics_v0;   //!
   TBranch        *b_L1Tech_RPC_TTU_RBplus2_Cosmics_v0_Prescl;   //!
   TBranch        *b_L1Tech_RPC_TTU_RBst1_collisions_v0;   //!
   TBranch        *b_L1Tech_RPC_TTU_RBst1_collisions_v0_Prescl;   //!
   TBranch        *b_L1Tech_RPC_TTU_barrel_Cosmics_v0;   //!
   TBranch        *b_L1Tech_RPC_TTU_barrel_Cosmics_v0_Prescl;   //!
   TBranch        *b_L1Tech_RPC_TTU_pointing_Cosmics_v0;   //!
   TBranch        *b_L1Tech_RPC_TTU_pointing_Cosmics_v0_Prescl;   //!
   TBranch        *b_L1Tech_TOTEM_Diffractive_v0;   //!
   TBranch        *b_L1Tech_TOTEM_Diffractive_v0_Prescl;   //!
   TBranch        *b_L1Tech_TOTEM_LowMultiplicity_v0;   //!
   TBranch        *b_L1Tech_TOTEM_LowMultiplicity_v0_Prescl;   //!
   TBranch        *b_L1Tech_TOTEM_MinBias_v0;   //!
   TBranch        *b_L1Tech_TOTEM_MinBias_v0_Prescl;   //!
   TBranch        *b_L1Tech_TOTEM_ZeroBias_v0;   //!
   TBranch        *b_L1Tech_TOTEM_ZeroBias_v0_Prescl;   //!
   TBranch        *b_L1Tech_ZDC_Scint_loose_vertex_v0;   //!
   TBranch        *b_L1Tech_ZDC_Scint_loose_vertex_v0_Prescl;   //!
   TBranch        *b_L1Tech_ZDC_Scint_minus_v0;   //!
   TBranch        *b_L1Tech_ZDC_Scint_minus_v0_Prescl;   //!
   TBranch        *b_L1Tech_ZDC_Scint_plus_v0;   //!
   TBranch        *b_L1Tech_ZDC_Scint_plus_v0_Prescl;   //!
   TBranch        *b_L1Tech_ZDC_Scint_tight_vertex_v0;   //!
   TBranch        *b_L1Tech_ZDC_Scint_tight_vertex_v0_Prescl;   //!

};


void setupHltTree(TTree *t,Hlts &tHlts,bool doCheck = 1)
{
   // Set branch addresses and branch pointers
   t->SetBranchAddress("NL1IsolEm", &tHlts.NL1IsolEm, &tHlts.b_NL1IsolEm);
   t->SetBranchAddress("L1IsolEmEt", tHlts.L1IsolEmEt, &tHlts.b_L1IsolEmEt);
   t->SetBranchAddress("L1IsolEmE", tHlts.L1IsolEmE, &tHlts.b_L1IsolEmE);
   t->SetBranchAddress("L1IsolEmEta", tHlts.L1IsolEmEta, &tHlts.b_L1IsolEmEta);
   t->SetBranchAddress("L1IsolEmPhi", tHlts.L1IsolEmPhi, &tHlts.b_L1IsolEmPhi);
   t->SetBranchAddress("NL1NIsolEm", &tHlts.NL1NIsolEm, &tHlts.b_NL1NIsolEm);
   t->SetBranchAddress("L1NIsolEmEt", tHlts.L1NIsolEmEt, &tHlts.b_L1NIsolEmEt);
   t->SetBranchAddress("L1NIsolEmE", tHlts.L1NIsolEmE, &tHlts.b_L1NIsolEmE);
   t->SetBranchAddress("L1NIsolEmEta", tHlts.L1NIsolEmEta, &tHlts.b_L1NIsolEmEta);
   t->SetBranchAddress("L1NIsolEmPhi", tHlts.L1NIsolEmPhi, &tHlts.b_L1NIsolEmPhi);
   t->SetBranchAddress("NL1Mu", &tHlts.NL1Mu, &tHlts.b_NL1Mu);
   t->SetBranchAddress("L1MuPt", tHlts.L1MuPt, &tHlts.b_L1MuPt);
   t->SetBranchAddress("L1MuE", tHlts.L1MuE, &tHlts.b_L1MuE);
   t->SetBranchAddress("L1MuEta", tHlts.L1MuEta, &tHlts.b_L1MuEta);
   t->SetBranchAddress("L1MuPhi", tHlts.L1MuPhi, &tHlts.b_L1MuPhi);
   t->SetBranchAddress("L1MuIsol", tHlts.L1MuIsol, &tHlts.b_L1MuIsol);
   t->SetBranchAddress("L1MuMip", tHlts.L1MuMip, &tHlts.b_L1MuMip);
   t->SetBranchAddress("L1MuFor", tHlts.L1MuFor, &tHlts.b_L1MuFor);
   t->SetBranchAddress("L1MuRPC", tHlts.L1MuRPC, &tHlts.b_L1MuRPC);
   t->SetBranchAddress("L1MuQal", tHlts.L1MuQal, &tHlts.b_L1MuQal);
   t->SetBranchAddress("L1MuChg", tHlts.L1MuChg, &tHlts.b_L1MuChg);
   t->SetBranchAddress("NL1CenJet", &tHlts.NL1CenJet, &tHlts.b_NL1CenJet);
   t->SetBranchAddress("L1CenJetEt", tHlts.L1CenJetEt, &tHlts.b_L1CenJetEt);
   t->SetBranchAddress("L1CenJetE", tHlts.L1CenJetE, &tHlts.b_L1CenJetE);
   t->SetBranchAddress("L1CenJetEta", tHlts.L1CenJetEta, &tHlts.b_L1CenJetEta);
   t->SetBranchAddress("L1CenJetPhi", tHlts.L1CenJetPhi, &tHlts.b_L1CenJetPhi);
   t->SetBranchAddress("NL1ForJet", &tHlts.NL1ForJet, &tHlts.b_NL1ForJet);
   t->SetBranchAddress("L1ForJetEt", tHlts.L1ForJetEt, &tHlts.b_L1ForJetEt);
   t->SetBranchAddress("L1ForJetE", tHlts.L1ForJetE, &tHlts.b_L1ForJetE);
   t->SetBranchAddress("L1ForJetEta", tHlts.L1ForJetEta, &tHlts.b_L1ForJetEta);
   t->SetBranchAddress("L1ForJetPhi", tHlts.L1ForJetPhi, &tHlts.b_L1ForJetPhi);
   t->SetBranchAddress("NL1Tau", &tHlts.NL1Tau, &tHlts.b_NL1Tau);
   t->SetBranchAddress("L1TauEt", tHlts.L1TauEt, &tHlts.b_L1TauEt);
   t->SetBranchAddress("L1TauE", tHlts.L1TauE, &tHlts.b_L1TauE);
   t->SetBranchAddress("L1TauEta", tHlts.L1TauEta, &tHlts.b_L1TauEta);
   t->SetBranchAddress("L1TauPhi", tHlts.L1TauPhi, &tHlts.b_L1TauPhi);
   t->SetBranchAddress("L1Met", &tHlts.L1Met, &tHlts.b_L1Met);
   t->SetBranchAddress("L1MetPhi", &tHlts.L1MetPhi, &tHlts.b_L1MetPhi);
   t->SetBranchAddress("L1EtTot", &tHlts.L1EtTot, &tHlts.b_L1EtTot);
   t->SetBranchAddress("L1Mht", &tHlts.L1Mht, &tHlts.b_L1Mht);
   t->SetBranchAddress("L1MhtPhi", &tHlts.L1MhtPhi, &tHlts.b_L1MhtPhi);
   t->SetBranchAddress("L1EtHad", &tHlts.L1EtHad, &tHlts.b_L1EtHad);
   t->SetBranchAddress("L1HfRing1EtSumPositiveEta", &tHlts.L1HfRing1EtSumPositiveEta, &tHlts.b_L1HfRing1EtSumPositiveEta);
   t->SetBranchAddress("L1HfRing2EtSumPositiveEta", &tHlts.L1HfRing2EtSumPositiveEta, &tHlts.b_L1HfRing2EtSumPositiveEta);
   t->SetBranchAddress("L1HfRing1EtSumNegativeEta", &tHlts.L1HfRing1EtSumNegativeEta, &tHlts.b_L1HfRing1EtSumNegativeEta);
   t->SetBranchAddress("L1HfRing2EtSumNegativeEta", &tHlts.L1HfRing2EtSumNegativeEta, &tHlts.b_L1HfRing2EtSumNegativeEta);
   t->SetBranchAddress("L1HfTowerCountPositiveEtaRing1", &tHlts.L1HfTowerCountPositiveEtaRing1, &tHlts.b_L1HfTowerCountPositiveEtaRing1);
   t->SetBranchAddress("L1HfTowerCountNegativeEtaRing1", &tHlts.L1HfTowerCountNegativeEtaRing1, &tHlts.b_L1HfTowerCountNegativeEtaRing1);
   t->SetBranchAddress("L1HfTowerCountPositiveEtaRing2", &tHlts.L1HfTowerCountPositiveEtaRing2, &tHlts.b_L1HfTowerCountPositiveEtaRing2);
   t->SetBranchAddress("L1HfTowerCountNegativeEtaRing2", &tHlts.L1HfTowerCountNegativeEtaRing2, &tHlts.b_L1HfTowerCountNegativeEtaRing2);
   t->SetBranchAddress("Run", &tHlts.Run, &tHlts.b_Run);
   t->SetBranchAddress("Event", &tHlts.Event, &tHlts.b_Event);
   t->SetBranchAddress("LumiBlock", &tHlts.LumiBlock, &tHlts.b_LumiBlock);
   t->SetBranchAddress("Bx", &tHlts.Bx, &tHlts.b_Bx);
   t->SetBranchAddress("Orbit", &tHlts.Orbit, &tHlts.b_Orbit);
   t->SetBranchAddress("AvgInstDelLumi", &tHlts.AvgInstDelLumi, &tHlts.b_AvgInstDelLumi);
   t->SetBranchAddress("HLTriggerFirstPath", &tHlts.HLTriggerFirstPath, &tHlts.b_HLTriggerFirstPath);
   t->SetBranchAddress("HLTriggerFirstPath_Prescl", &tHlts.HLTriggerFirstPath_Prescl, &tHlts.b_HLTriggerFirstPath_Prescl);
   t->SetBranchAddress("HLT_Activity_Ecal_SC7_v13", &tHlts.HLT_Activity_Ecal_SC7_v13, &tHlts.b_HLT_Activity_Ecal_SC7_v13);
   t->SetBranchAddress("HLT_Activity_Ecal_SC7_v13_Prescl", &tHlts.HLT_Activity_Ecal_SC7_v13_Prescl, &tHlts.b_HLT_Activity_Ecal_SC7_v13_Prescl);
   t->SetBranchAddress("HLT_BeamGas_HF_Beam1_v5", &tHlts.HLT_BeamGas_HF_Beam1_v5, &tHlts.b_HLT_BeamGas_HF_Beam1_v5);
   t->SetBranchAddress("HLT_BeamGas_HF_Beam1_v5_Prescl", &tHlts.HLT_BeamGas_HF_Beam1_v5_Prescl, &tHlts.b_HLT_BeamGas_HF_Beam1_v5_Prescl);
   t->SetBranchAddress("HLT_BeamGas_HF_Beam2_v5", &tHlts.HLT_BeamGas_HF_Beam2_v5, &tHlts.b_HLT_BeamGas_HF_Beam2_v5);
   t->SetBranchAddress("HLT_BeamGas_HF_Beam2_v5_Prescl", &tHlts.HLT_BeamGas_HF_Beam2_v5_Prescl, &tHlts.b_HLT_BeamGas_HF_Beam2_v5_Prescl);
   t->SetBranchAddress("HLT_BeamHalo_v13", &tHlts.HLT_BeamHalo_v13, &tHlts.b_HLT_BeamHalo_v13);
   t->SetBranchAddress("HLT_BeamHalo_v13_Prescl", &tHlts.HLT_BeamHalo_v13_Prescl, &tHlts.b_HLT_BeamHalo_v13_Prescl);
   t->SetBranchAddress("HLT_PAHcalUTCA_v1", &tHlts.HLT_PAHcalUTCA_v1, &tHlts.b_HLT_PAHcalUTCA_v1);
   t->SetBranchAddress("HLT_PAHcalUTCA_v1_Prescl", &tHlts.HLT_PAHcalUTCA_v1_Prescl, &tHlts.b_HLT_PAHcalUTCA_v1_Prescl);
   t->SetBranchAddress("HLT_PAHcalPhiSym_v1", &tHlts.HLT_PAHcalPhiSym_v1, &tHlts.b_HLT_PAHcalPhiSym_v1);
   t->SetBranchAddress("HLT_PAHcalPhiSym_v1_Prescl", &tHlts.HLT_PAHcalPhiSym_v1_Prescl, &tHlts.b_HLT_PAHcalPhiSym_v1_Prescl);
   t->SetBranchAddress("HLT_PAHcalNZS_v1", &tHlts.HLT_PAHcalNZS_v1, &tHlts.b_HLT_PAHcalNZS_v1);
   t->SetBranchAddress("HLT_PAHcalNZS_v1_Prescl", &tHlts.HLT_PAHcalNZS_v1_Prescl, &tHlts.b_HLT_PAHcalNZS_v1_Prescl);
   t->SetBranchAddress("HLT_GlobalRunHPDNoise_v8", &tHlts.HLT_GlobalRunHPDNoise_v8, &tHlts.b_HLT_GlobalRunHPDNoise_v8);
   t->SetBranchAddress("HLT_GlobalRunHPDNoise_v8_Prescl", &tHlts.HLT_GlobalRunHPDNoise_v8_Prescl, &tHlts.b_HLT_GlobalRunHPDNoise_v8_Prescl);
   t->SetBranchAddress("HLT_Physics_v5", &tHlts.HLT_Physics_v5, &tHlts.b_HLT_Physics_v5);
   t->SetBranchAddress("HLT_Physics_v5_Prescl", &tHlts.HLT_Physics_v5_Prescl, &tHlts.b_HLT_Physics_v5_Prescl);
   t->SetBranchAddress("DST_Physics_v5", &tHlts.DST_Physics_v5, &tHlts.b_DST_Physics_v5);
   t->SetBranchAddress("DST_Physics_v5_Prescl", &tHlts.DST_Physics_v5_Prescl, &tHlts.b_DST_Physics_v5_Prescl);
   t->SetBranchAddress("HLT_DTCalibration_v2", &tHlts.HLT_DTCalibration_v2, &tHlts.b_HLT_DTCalibration_v2);
   t->SetBranchAddress("HLT_DTCalibration_v2_Prescl", &tHlts.HLT_DTCalibration_v2_Prescl, &tHlts.b_HLT_DTCalibration_v2_Prescl);
   t->SetBranchAddress("HLT_EcalCalibration_v3", &tHlts.HLT_EcalCalibration_v3, &tHlts.b_HLT_EcalCalibration_v3);
   t->SetBranchAddress("HLT_EcalCalibration_v3_Prescl", &tHlts.HLT_EcalCalibration_v3_Prescl, &tHlts.b_HLT_EcalCalibration_v3_Prescl);
   t->SetBranchAddress("HLT_HcalCalibration_v3", &tHlts.HLT_HcalCalibration_v3, &tHlts.b_HLT_HcalCalibration_v3);
   t->SetBranchAddress("HLT_HcalCalibration_v3_Prescl", &tHlts.HLT_HcalCalibration_v3_Prescl, &tHlts.b_HLT_HcalCalibration_v3_Prescl);
   t->SetBranchAddress("HLT_TrackerCalibration_v3", &tHlts.HLT_TrackerCalibration_v3, &tHlts.b_HLT_TrackerCalibration_v3);
   t->SetBranchAddress("HLT_TrackerCalibration_v3_Prescl", &tHlts.HLT_TrackerCalibration_v3_Prescl, &tHlts.b_HLT_TrackerCalibration_v3_Prescl);
   t->SetBranchAddress("HLT_L1SingleMuOpen_AntiBPTX_v7", &tHlts.HLT_L1SingleMuOpen_AntiBPTX_v7, &tHlts.b_HLT_L1SingleMuOpen_AntiBPTX_v7);
   t->SetBranchAddress("HLT_L1SingleMuOpen_AntiBPTX_v7_Prescl", &tHlts.HLT_L1SingleMuOpen_AntiBPTX_v7_Prescl, &tHlts.b_HLT_L1SingleMuOpen_AntiBPTX_v7_Prescl);
   t->SetBranchAddress("HLT_L1TrackerCosmics_v7", &tHlts.HLT_L1TrackerCosmics_v7, &tHlts.b_HLT_L1TrackerCosmics_v7);
   t->SetBranchAddress("HLT_L1TrackerCosmics_v7_Prescl", &tHlts.HLT_L1TrackerCosmics_v7_Prescl, &tHlts.b_HLT_L1TrackerCosmics_v7_Prescl);
   t->SetBranchAddress("AlCa_PAEcalPi0EBonly_v1", &tHlts.AlCa_PAEcalPi0EBonly_v1, &tHlts.b_AlCa_PAEcalPi0EBonly_v1);
   t->SetBranchAddress("AlCa_PAEcalPi0EBonly_v1_Prescl", &tHlts.AlCa_PAEcalPi0EBonly_v1_Prescl, &tHlts.b_AlCa_PAEcalPi0EBonly_v1_Prescl);
   t->SetBranchAddress("AlCa_PAEcalPi0EEonly_v1", &tHlts.AlCa_PAEcalPi0EEonly_v1, &tHlts.b_AlCa_PAEcalPi0EEonly_v1);
   t->SetBranchAddress("AlCa_PAEcalPi0EEonly_v1_Prescl", &tHlts.AlCa_PAEcalPi0EEonly_v1_Prescl, &tHlts.b_AlCa_PAEcalPi0EEonly_v1_Prescl);
   t->SetBranchAddress("AlCa_PAEcalEtaEBonly_v1", &tHlts.AlCa_PAEcalEtaEBonly_v1, &tHlts.b_AlCa_PAEcalEtaEBonly_v1);
   t->SetBranchAddress("AlCa_PAEcalEtaEBonly_v1_Prescl", &tHlts.AlCa_PAEcalEtaEBonly_v1_Prescl, &tHlts.b_AlCa_PAEcalEtaEBonly_v1_Prescl);
   t->SetBranchAddress("AlCa_PAEcalEtaEEonly_v1", &tHlts.AlCa_PAEcalEtaEEonly_v1, &tHlts.b_AlCa_PAEcalEtaEEonly_v1);
   t->SetBranchAddress("AlCa_PAEcalEtaEEonly_v1_Prescl", &tHlts.AlCa_PAEcalEtaEEonly_v1_Prescl, &tHlts.b_AlCa_PAEcalEtaEEonly_v1_Prescl);
   t->SetBranchAddress("AlCa_EcalPhiSym_v13", &tHlts.AlCa_EcalPhiSym_v13, &tHlts.b_AlCa_EcalPhiSym_v13);
   t->SetBranchAddress("AlCa_EcalPhiSym_v13_Prescl", &tHlts.AlCa_EcalPhiSym_v13_Prescl, &tHlts.b_AlCa_EcalPhiSym_v13_Prescl);
   t->SetBranchAddress("AlCa_RPCMuonNoTriggers_v9", &tHlts.AlCa_RPCMuonNoTriggers_v9, &tHlts.b_AlCa_RPCMuonNoTriggers_v9);
   t->SetBranchAddress("AlCa_RPCMuonNoTriggers_v9_Prescl", &tHlts.AlCa_RPCMuonNoTriggers_v9_Prescl, &tHlts.b_AlCa_RPCMuonNoTriggers_v9_Prescl);
   t->SetBranchAddress("AlCa_RPCMuonNoHits_v9", &tHlts.AlCa_RPCMuonNoHits_v9, &tHlts.b_AlCa_RPCMuonNoHits_v9);
   t->SetBranchAddress("AlCa_RPCMuonNoHits_v9_Prescl", &tHlts.AlCa_RPCMuonNoHits_v9_Prescl, &tHlts.b_AlCa_RPCMuonNoHits_v9_Prescl);
   t->SetBranchAddress("AlCa_RPCMuonNormalisation_v9", &tHlts.AlCa_RPCMuonNormalisation_v9, &tHlts.b_AlCa_RPCMuonNormalisation_v9);
   t->SetBranchAddress("AlCa_RPCMuonNormalisation_v9_Prescl", &tHlts.AlCa_RPCMuonNormalisation_v9_Prescl, &tHlts.b_AlCa_RPCMuonNormalisation_v9_Prescl);
   t->SetBranchAddress("AlCa_LumiPixels_v8", &tHlts.AlCa_LumiPixels_v8, &tHlts.b_AlCa_LumiPixels_v8);
   t->SetBranchAddress("AlCa_LumiPixels_v8_Prescl", &tHlts.AlCa_LumiPixels_v8_Prescl, &tHlts.b_AlCa_LumiPixels_v8_Prescl);
   t->SetBranchAddress("AlCa_LumiPixels_ZeroBias_v4", &tHlts.AlCa_LumiPixels_ZeroBias_v4, &tHlts.b_AlCa_LumiPixels_ZeroBias_v4);
   t->SetBranchAddress("AlCa_LumiPixels_ZeroBias_v4_Prescl", &tHlts.AlCa_LumiPixels_ZeroBias_v4_Prescl, &tHlts.b_AlCa_LumiPixels_ZeroBias_v4_Prescl);
   t->SetBranchAddress("AlCa_LumiPixels_Random_v1", &tHlts.AlCa_LumiPixels_Random_v1, &tHlts.b_AlCa_LumiPixels_Random_v1);
   t->SetBranchAddress("AlCa_LumiPixels_Random_v1_Prescl", &tHlts.AlCa_LumiPixels_Random_v1_Prescl, &tHlts.b_AlCa_LumiPixels_Random_v1_Prescl);
   t->SetBranchAddress("HLT_PAL1SingleJet16_v1", &tHlts.HLT_PAL1SingleJet16_v1, &tHlts.b_HLT_PAL1SingleJet16_v1);
   t->SetBranchAddress("HLT_PAL1SingleJet16_v1_Prescl", &tHlts.HLT_PAL1SingleJet16_v1_Prescl, &tHlts.b_HLT_PAL1SingleJet16_v1_Prescl);
   t->SetBranchAddress("HLT_PAL1SingleJet36_v1", &tHlts.HLT_PAL1SingleJet36_v1, &tHlts.b_HLT_PAL1SingleJet36_v1);
   t->SetBranchAddress("HLT_PAL1SingleJet36_v1_Prescl", &tHlts.HLT_PAL1SingleJet36_v1_Prescl, &tHlts.b_HLT_PAL1SingleJet36_v1_Prescl);
   t->SetBranchAddress("HLT_PASingleForJet15_v1", &tHlts.HLT_PASingleForJet15_v1, &tHlts.b_HLT_PASingleForJet15_v1);
   t->SetBranchAddress("HLT_PASingleForJet15_v1_Prescl", &tHlts.HLT_PASingleForJet15_v1_Prescl, &tHlts.b_HLT_PASingleForJet15_v1_Prescl);
   t->SetBranchAddress("HLT_PASingleForJet25_v1", &tHlts.HLT_PASingleForJet25_v1, &tHlts.b_HLT_PASingleForJet25_v1);
   t->SetBranchAddress("HLT_PASingleForJet25_v1_Prescl", &tHlts.HLT_PASingleForJet25_v1_Prescl, &tHlts.b_HLT_PASingleForJet25_v1_Prescl);
   

   t->SetBranchAddress("HLT_PAJet20_NoJetID_v1", &tHlts.HLT_PAJet20_NoJetID_v1, &tHlts.b_HLT_PAJet20_NoJetID_v1);
   t->SetBranchAddress("HLT_PAJet20_NoJetID_v1_Prescl", &tHlts.HLT_PAJet20_NoJetID_v1_Prescl, &tHlts.b_HLT_PAJet20_NoJetID_v1_Prescl);
   t->SetBranchAddress("HLT_PAJet20_NoJetID_v1_trigObject",&HLT_PAJet_NoJetID_v1_trigObject_20, &tHlts.b_HLT_PAJet20_NoJetID_v1_trigObject);

   t->SetBranchAddress("HLT_PAJet40_NoJetID_v1", &tHlts.HLT_PAJet40_NoJetID_v1, &tHlts.b_HLT_PAJet40_NoJetID_v1);
   t->SetBranchAddress("HLT_PAJet40_NoJetID_v1_Prescl", &tHlts.HLT_PAJet40_NoJetID_v1_Prescl, &tHlts.b_HLT_PAJet40_NoJetID_v1_Prescl);
   t->SetBranchAddress("HLT_PAJet40_NoJetID_v1_trigObject",&HLT_PAJet_NoJetID_v1_trigObject_40, &tHlts.b_HLT_PAJet40_NoJetID_v1_trigObject);

   t->SetBranchAddress("HLT_PAJet60_NoJetID_v1", &tHlts.HLT_PAJet60_NoJetID_v1, &tHlts.b_HLT_PAJet60_NoJetID_v1);
   t->SetBranchAddress("HLT_PAJet60_NoJetID_v1_Prescl", &tHlts.HLT_PAJet60_NoJetID_v1_Prescl, &tHlts.b_HLT_PAJet60_NoJetID_v1_Prescl);
   t->SetBranchAddress("HLT_PAJet60_NoJetID_v1_trigObject",&HLT_PAJet_NoJetID_v1_trigObject_60, &tHlts.b_HLT_PAJet60_NoJetID_v1_trigObject);

   t->SetBranchAddress("HLT_PAJet80_NoJetID_v1", &tHlts.HLT_PAJet80_NoJetID_v1, &tHlts.b_HLT_PAJet80_NoJetID_v1);
   t->SetBranchAddress("HLT_PAJet80_NoJetID_v1_Prescl", &tHlts.HLT_PAJet80_NoJetID_v1_Prescl, &tHlts.b_HLT_PAJet80_NoJetID_v1_Prescl);
   t->SetBranchAddress("HLT_PAJet80_NoJetID_v1_trigObject",&HLT_PAJet_NoJetID_v1_trigObject_80, &tHlts.b_HLT_PAJet80_NoJetID_v1_trigObject);

   t->SetBranchAddress("HLT_PAJet100_NoJetID_v1", &tHlts.HLT_PAJet100_NoJetID_v1, &tHlts.b_HLT_PAJet100_NoJetID_v1);
   t->SetBranchAddress("HLT_PAJet100_NoJetID_v1_Prescl", &tHlts.HLT_PAJet100_NoJetID_v1_Prescl, &tHlts.b_HLT_PAJet100_NoJetID_v1_Prescl);
   t->SetBranchAddress("HLT_PAJet100_NoJetID_v1_trigObject",&HLT_PAJet_NoJetID_v1_trigObject_100, &tHlts.b_HLT_PAJet100_NoJetID_v1_trigObject);

   t->SetBranchAddress("HLT_PAJet120_NoJetID_v1", &tHlts.HLT_PAJet120_NoJetID_v1, &tHlts.b_HLT_PAJet120_NoJetID_v1);
   t->SetBranchAddress("HLT_PAJet120_NoJetID_v1_Prescl", &tHlts.HLT_PAJet120_NoJetID_v1_Prescl, &tHlts.b_HLT_PAJet120_NoJetID_v1_Prescl);
   t->SetBranchAddress("HLT_PAJet120_NoJetID_v1_trigObject",&HLT_PAJet_NoJetID_v1_trigObject_120, &tHlts.b_HLT_PAJet120_NoJetID_v1_trigObject);


   t->SetBranchAddress("HLT_PAForJet20Eta2_v1", &tHlts.HLT_PAForJet20Eta2_v1, &tHlts.b_HLT_PAForJet20Eta2_v1);
   t->SetBranchAddress("HLT_PAForJet20Eta2_v1_Prescl", &tHlts.HLT_PAForJet20Eta2_v1_Prescl, &tHlts.b_HLT_PAForJet20Eta2_v1_Prescl);
   t->SetBranchAddress("HLT_PAForJet40Eta2_v1", &tHlts.HLT_PAForJet40Eta2_v1, &tHlts.b_HLT_PAForJet40Eta2_v1);
   t->SetBranchAddress("HLT_PAForJet40Eta2_v1_Prescl", &tHlts.HLT_PAForJet40Eta2_v1_Prescl, &tHlts.b_HLT_PAForJet40Eta2_v1_Prescl);
   t->SetBranchAddress("HLT_PAForJet60Eta2_v1", &tHlts.HLT_PAForJet60Eta2_v1, &tHlts.b_HLT_PAForJet60Eta2_v1);
   t->SetBranchAddress("HLT_PAForJet60Eta2_v1_Prescl", &tHlts.HLT_PAForJet60Eta2_v1_Prescl, &tHlts.b_HLT_PAForJet60Eta2_v1_Prescl);
   t->SetBranchAddress("HLT_PAForJet80Eta2_v1", &tHlts.HLT_PAForJet80Eta2_v1, &tHlts.b_HLT_PAForJet80Eta2_v1);
   t->SetBranchAddress("HLT_PAForJet80Eta2_v1_Prescl", &tHlts.HLT_PAForJet80Eta2_v1_Prescl, &tHlts.b_HLT_PAForJet80Eta2_v1_Prescl);
   t->SetBranchAddress("HLT_PAForJet100Eta2_v1", &tHlts.HLT_PAForJet100Eta2_v1, &tHlts.b_HLT_PAForJet100Eta2_v1);
   t->SetBranchAddress("HLT_PAForJet100Eta2_v1_Prescl", &tHlts.HLT_PAForJet100Eta2_v1_Prescl, &tHlts.b_HLT_PAForJet100Eta2_v1_Prescl);
   t->SetBranchAddress("HLT_PAForJet20Eta3_v1", &tHlts.HLT_PAForJet20Eta3_v1, &tHlts.b_HLT_PAForJet20Eta3_v1);
   t->SetBranchAddress("HLT_PAForJet20Eta3_v1_Prescl", &tHlts.HLT_PAForJet20Eta3_v1_Prescl, &tHlts.b_HLT_PAForJet20Eta3_v1_Prescl);
   t->SetBranchAddress("HLT_PAForJet40Eta3_v1", &tHlts.HLT_PAForJet40Eta3_v1, &tHlts.b_HLT_PAForJet40Eta3_v1);
   t->SetBranchAddress("HLT_PAForJet40Eta3_v1_Prescl", &tHlts.HLT_PAForJet40Eta3_v1_Prescl, &tHlts.b_HLT_PAForJet40Eta3_v1_Prescl);
   t->SetBranchAddress("HLT_PAForJet60Eta3_v1", &tHlts.HLT_PAForJet60Eta3_v1, &tHlts.b_HLT_PAForJet60Eta3_v1);
   t->SetBranchAddress("HLT_PAForJet60Eta3_v1_Prescl", &tHlts.HLT_PAForJet60Eta3_v1_Prescl, &tHlts.b_HLT_PAForJet60Eta3_v1_Prescl);
   t->SetBranchAddress("HLT_PAForJet80Eta3_v1", &tHlts.HLT_PAForJet80Eta3_v1, &tHlts.b_HLT_PAForJet80Eta3_v1);
   t->SetBranchAddress("HLT_PAForJet80Eta3_v1_Prescl", &tHlts.HLT_PAForJet80Eta3_v1_Prescl, &tHlts.b_HLT_PAForJet80Eta3_v1_Prescl);
   t->SetBranchAddress("HLT_PAForJet100Eta3_v1", &tHlts.HLT_PAForJet100Eta3_v1, &tHlts.b_HLT_PAForJet100Eta3_v1);
   t->SetBranchAddress("HLT_PAForJet100Eta3_v1_Prescl", &tHlts.HLT_PAForJet100Eta3_v1_Prescl, &tHlts.b_HLT_PAForJet100Eta3_v1_Prescl);
   t->SetBranchAddress("HLT_PATripleJet20_20_20_v1", &tHlts.HLT_PATripleJet20_20_20_v1, &tHlts.b_HLT_PATripleJet20_20_20_v1);
   t->SetBranchAddress("HLT_PATripleJet20_20_20_v1_Prescl", &tHlts.HLT_PATripleJet20_20_20_v1_Prescl, &tHlts.b_HLT_PATripleJet20_20_20_v1_Prescl);
   t->SetBranchAddress("HLT_PATripleJet40_20_20_v1", &tHlts.HLT_PATripleJet40_20_20_v1, &tHlts.b_HLT_PATripleJet40_20_20_v1);
   t->SetBranchAddress("HLT_PATripleJet40_20_20_v1_Prescl", &tHlts.HLT_PATripleJet40_20_20_v1_Prescl, &tHlts.b_HLT_PATripleJet40_20_20_v1_Prescl);
   t->SetBranchAddress("HLT_PATripleJet60_20_20_v1", &tHlts.HLT_PATripleJet60_20_20_v1, &tHlts.b_HLT_PATripleJet60_20_20_v1);
   t->SetBranchAddress("HLT_PATripleJet60_20_20_v1_Prescl", &tHlts.HLT_PATripleJet60_20_20_v1_Prescl, &tHlts.b_HLT_PATripleJet60_20_20_v1_Prescl);
   t->SetBranchAddress("HLT_PATripleJet80_20_20_v1", &tHlts.HLT_PATripleJet80_20_20_v1, &tHlts.b_HLT_PATripleJet80_20_20_v1);
   t->SetBranchAddress("HLT_PATripleJet80_20_20_v1_Prescl", &tHlts.HLT_PATripleJet80_20_20_v1_Prescl, &tHlts.b_HLT_PATripleJet80_20_20_v1_Prescl);
   t->SetBranchAddress("HLT_PATripleJet100_20_20_v1", &tHlts.HLT_PATripleJet100_20_20_v1, &tHlts.b_HLT_PATripleJet100_20_20_v1);
   t->SetBranchAddress("HLT_PATripleJet100_20_20_v1_Prescl", &tHlts.HLT_PATripleJet100_20_20_v1_Prescl, &tHlts.b_HLT_PATripleJet100_20_20_v1_Prescl);
   t->SetBranchAddress("HLT_PAJet40ETM30_v1", &tHlts.HLT_PAJet40ETM30_v1, &tHlts.b_HLT_PAJet40ETM30_v1);
   t->SetBranchAddress("HLT_PAJet40ETM30_v1_Prescl", &tHlts.HLT_PAJet40ETM30_v1_Prescl, &tHlts.b_HLT_PAJet40ETM30_v1_Prescl);
   t->SetBranchAddress("HLT_PAJet60ETM30_v1", &tHlts.HLT_PAJet60ETM30_v1, &tHlts.b_HLT_PAJet60ETM30_v1);
   t->SetBranchAddress("HLT_PAJet60ETM30_v1_Prescl", &tHlts.HLT_PAJet60ETM30_v1_Prescl, &tHlts.b_HLT_PAJet60ETM30_v1_Prescl);
   t->SetBranchAddress("HLT_PAL1DoubleMu0_v1", &tHlts.HLT_PAL1DoubleMu0_v1, &tHlts.b_HLT_PAL1DoubleMu0_v1);
   t->SetBranchAddress("HLT_PAL1DoubleMu0_v1_Prescl", &tHlts.HLT_PAL1DoubleMu0_v1_Prescl, &tHlts.b_HLT_PAL1DoubleMu0_v1_Prescl);
   t->SetBranchAddress("HLT_PADimuon0_NoVertexing_v1", &tHlts.HLT_PADimuon0_NoVertexing_v1, &tHlts.b_HLT_PADimuon0_NoVertexing_v1);
   t->SetBranchAddress("HLT_PADimuon0_NoVertexing_v1_Prescl", &tHlts.HLT_PADimuon0_NoVertexing_v1_Prescl, &tHlts.b_HLT_PADimuon0_NoVertexing_v1_Prescl);
   t->SetBranchAddress("HLT_PAL1DoubleMu0_HighQ_v1", &tHlts.HLT_PAL1DoubleMu0_HighQ_v1, &tHlts.b_HLT_PAL1DoubleMu0_HighQ_v1);
   t->SetBranchAddress("HLT_PAL1DoubleMu0_HighQ_v1_Prescl", &tHlts.HLT_PAL1DoubleMu0_HighQ_v1_Prescl, &tHlts.b_HLT_PAL1DoubleMu0_HighQ_v1_Prescl);
   t->SetBranchAddress("HLT_PAL1DoubleMuOpen_v1", &tHlts.HLT_PAL1DoubleMuOpen_v1, &tHlts.b_HLT_PAL1DoubleMuOpen_v1);
   t->SetBranchAddress("HLT_PAL1DoubleMuOpen_v1_Prescl", &tHlts.HLT_PAL1DoubleMuOpen_v1_Prescl, &tHlts.b_HLT_PAL1DoubleMuOpen_v1_Prescl);
   t->SetBranchAddress("HLT_PAL2DoubleMu3_v1", &tHlts.HLT_PAL2DoubleMu3_v1, &tHlts.b_HLT_PAL2DoubleMu3_v1);
   t->SetBranchAddress("HLT_PAL2DoubleMu3_v1_Prescl", &tHlts.HLT_PAL2DoubleMu3_v1_Prescl, &tHlts.b_HLT_PAL2DoubleMu3_v1_Prescl);
   t->SetBranchAddress("HLT_PAMu3_v1", &tHlts.HLT_PAMu3_v1, &tHlts.b_HLT_PAMu3_v1);
   t->SetBranchAddress("HLT_PAMu3_v1_Prescl", &tHlts.HLT_PAMu3_v1_Prescl, &tHlts.b_HLT_PAMu3_v1_Prescl);
   t->SetBranchAddress("HLT_PAMu7_v1", &tHlts.HLT_PAMu7_v1, &tHlts.b_HLT_PAMu7_v1);
   t->SetBranchAddress("HLT_PAMu7_v1_Prescl", &tHlts.HLT_PAMu7_v1_Prescl, &tHlts.b_HLT_PAMu7_v1_Prescl);
   t->SetBranchAddress("HLT_PAMu12_v1", &tHlts.HLT_PAMu12_v1, &tHlts.b_HLT_PAMu12_v1);
   t->SetBranchAddress("HLT_PAMu12_v1_Prescl", &tHlts.HLT_PAMu12_v1_Prescl, &tHlts.b_HLT_PAMu12_v1_Prescl);
   t->SetBranchAddress("HLT_PABTagMu_Jet20_Mu4_v1", &tHlts.HLT_PABTagMu_Jet20_Mu4_v1, &tHlts.b_HLT_PABTagMu_Jet20_Mu4_v1);
   t->SetBranchAddress("HLT_PABTagMu_Jet20_Mu4_v1_Prescl", &tHlts.HLT_PABTagMu_Jet20_Mu4_v1_Prescl, &tHlts.b_HLT_PABTagMu_Jet20_Mu4_v1_Prescl);
   t->SetBranchAddress("HLT_PAMu3PFJet20_v1", &tHlts.HLT_PAMu3PFJet20_v1, &tHlts.b_HLT_PAMu3PFJet20_v1);
   t->SetBranchAddress("HLT_PAMu3PFJet20_v1_Prescl", &tHlts.HLT_PAMu3PFJet20_v1_Prescl, &tHlts.b_HLT_PAMu3PFJet20_v1_Prescl);
   t->SetBranchAddress("HLT_PAMu3PFJet40_v1", &tHlts.HLT_PAMu3PFJet40_v1, &tHlts.b_HLT_PAMu3PFJet40_v1);
   t->SetBranchAddress("HLT_PAMu3PFJet40_v1_Prescl", &tHlts.HLT_PAMu3PFJet40_v1_Prescl, &tHlts.b_HLT_PAMu3PFJet40_v1_Prescl);
   t->SetBranchAddress("HLT_PAMu7PFJet20_v1", &tHlts.HLT_PAMu7PFJet20_v1, &tHlts.b_HLT_PAMu7PFJet20_v1);
   t->SetBranchAddress("HLT_PAMu7PFJet20_v1_Prescl", &tHlts.HLT_PAMu7PFJet20_v1_Prescl, &tHlts.b_HLT_PAMu7PFJet20_v1_Prescl);
   t->SetBranchAddress("HLT_PAPhoton10_NoCaloIdVL_v1", &tHlts.HLT_PAPhoton10_NoCaloIdVL_v1, &tHlts.b_HLT_PAPhoton10_NoCaloIdVL_v1);
   t->SetBranchAddress("HLT_PAPhoton10_NoCaloIdVL_v1_Prescl", &tHlts.HLT_PAPhoton10_NoCaloIdVL_v1_Prescl, &tHlts.b_HLT_PAPhoton10_NoCaloIdVL_v1_Prescl);
   t->SetBranchAddress("HLT_PAPhoton15_NoCaloIdVL_v1", &tHlts.HLT_PAPhoton15_NoCaloIdVL_v1, &tHlts.b_HLT_PAPhoton15_NoCaloIdVL_v1);
   t->SetBranchAddress("HLT_PAPhoton15_NoCaloIdVL_v1_Prescl", &tHlts.HLT_PAPhoton15_NoCaloIdVL_v1_Prescl, &tHlts.b_HLT_PAPhoton15_NoCaloIdVL_v1_Prescl);
   t->SetBranchAddress("HLT_PAPhoton20_NoCaloIdVL_v1", &tHlts.HLT_PAPhoton20_NoCaloIdVL_v1, &tHlts.b_HLT_PAPhoton20_NoCaloIdVL_v1);
   t->SetBranchAddress("HLT_PAPhoton20_NoCaloIdVL_v1_Prescl", &tHlts.HLT_PAPhoton20_NoCaloIdVL_v1_Prescl, &tHlts.b_HLT_PAPhoton20_NoCaloIdVL_v1_Prescl);
   t->SetBranchAddress("HLT_PAPhoton30_NoCaloIdVL_v1", &tHlts.HLT_PAPhoton30_NoCaloIdVL_v1, &tHlts.b_HLT_PAPhoton30_NoCaloIdVL_v1);
   t->SetBranchAddress("HLT_PAPhoton30_NoCaloIdVL_v1_Prescl", &tHlts.HLT_PAPhoton30_NoCaloIdVL_v1_Prescl, &tHlts.b_HLT_PAPhoton30_NoCaloIdVL_v1_Prescl);
   t->SetBranchAddress("HLT_PAPhoton40_NoCaloIdVL_v1", &tHlts.HLT_PAPhoton40_NoCaloIdVL_v1, &tHlts.b_HLT_PAPhoton40_NoCaloIdVL_v1);
   t->SetBranchAddress("HLT_PAPhoton40_NoCaloIdVL_v1_Prescl", &tHlts.HLT_PAPhoton40_NoCaloIdVL_v1_Prescl, &tHlts.b_HLT_PAPhoton40_NoCaloIdVL_v1_Prescl);
   t->SetBranchAddress("HLT_PAPhoton60_NoCaloIdVL_v1", &tHlts.HLT_PAPhoton60_NoCaloIdVL_v1, &tHlts.b_HLT_PAPhoton60_NoCaloIdVL_v1);
   t->SetBranchAddress("HLT_PAPhoton60_NoCaloIdVL_v1_Prescl", &tHlts.HLT_PAPhoton60_NoCaloIdVL_v1_Prescl, &tHlts.b_HLT_PAPhoton60_NoCaloIdVL_v1_Prescl);
   t->SetBranchAddress("HLT_PAPhoton10_TightCaloIdVL_v1", &tHlts.HLT_PAPhoton10_TightCaloIdVL_v1, &tHlts.b_HLT_PAPhoton10_TightCaloIdVL_v1);
   t->SetBranchAddress("HLT_PAPhoton10_TightCaloIdVL_v1_Prescl", &tHlts.HLT_PAPhoton10_TightCaloIdVL_v1_Prescl, &tHlts.b_HLT_PAPhoton10_TightCaloIdVL_v1_Prescl);
   t->SetBranchAddress("HLT_PAPhoton15_TightCaloIdVL_v1", &tHlts.HLT_PAPhoton15_TightCaloIdVL_v1, &tHlts.b_HLT_PAPhoton15_TightCaloIdVL_v1);
   t->SetBranchAddress("HLT_PAPhoton15_TightCaloIdVL_v1_Prescl", &tHlts.HLT_PAPhoton15_TightCaloIdVL_v1_Prescl, &tHlts.b_HLT_PAPhoton15_TightCaloIdVL_v1_Prescl);
   t->SetBranchAddress("HLT_PAPhoton20_TightCaloIdVL_v1", &tHlts.HLT_PAPhoton20_TightCaloIdVL_v1, &tHlts.b_HLT_PAPhoton20_TightCaloIdVL_v1);
   t->SetBranchAddress("HLT_PAPhoton20_TightCaloIdVL_v1_Prescl", &tHlts.HLT_PAPhoton20_TightCaloIdVL_v1_Prescl, &tHlts.b_HLT_PAPhoton20_TightCaloIdVL_v1_Prescl);
   t->SetBranchAddress("HLT_PAPhoton30_TightCaloIdVL_v1", &tHlts.HLT_PAPhoton30_TightCaloIdVL_v1, &tHlts.b_HLT_PAPhoton30_TightCaloIdVL_v1);
   t->SetBranchAddress("HLT_PAPhoton30_TightCaloIdVL_v1_Prescl", &tHlts.HLT_PAPhoton30_TightCaloIdVL_v1_Prescl, &tHlts.b_HLT_PAPhoton30_TightCaloIdVL_v1_Prescl);
   t->SetBranchAddress("HLT_PAPhoton40_TightCaloIdVL_v1", &tHlts.HLT_PAPhoton40_TightCaloIdVL_v1, &tHlts.b_HLT_PAPhoton40_TightCaloIdVL_v1);
   t->SetBranchAddress("HLT_PAPhoton40_TightCaloIdVL_v1_Prescl", &tHlts.HLT_PAPhoton40_TightCaloIdVL_v1_Prescl, &tHlts.b_HLT_PAPhoton40_TightCaloIdVL_v1_Prescl);
   t->SetBranchAddress("HLT_PAPhoton10_TightCaloIdVL_Iso50_v1", &tHlts.HLT_PAPhoton10_TightCaloIdVL_Iso50_v1, &tHlts.b_HLT_PAPhoton10_TightCaloIdVL_Iso50_v1);
   t->SetBranchAddress("HLT_PAPhoton10_TightCaloIdVL_Iso50_v1_Prescl", &tHlts.HLT_PAPhoton10_TightCaloIdVL_Iso50_v1_Prescl, &tHlts.b_HLT_PAPhoton10_TightCaloIdVL_Iso50_v1_Prescl);
   t->SetBranchAddress("HLT_PAPhoton15_TightCaloIdVL_Iso50_v1", &tHlts.HLT_PAPhoton15_TightCaloIdVL_Iso50_v1, &tHlts.b_HLT_PAPhoton15_TightCaloIdVL_Iso50_v1);
   t->SetBranchAddress("HLT_PAPhoton15_TightCaloIdVL_Iso50_v1_Prescl", &tHlts.HLT_PAPhoton15_TightCaloIdVL_Iso50_v1_Prescl, &tHlts.b_HLT_PAPhoton15_TightCaloIdVL_Iso50_v1_Prescl);
   t->SetBranchAddress("HLT_PAPhoton20_TightCaloIdVL_Iso50_v1", &tHlts.HLT_PAPhoton20_TightCaloIdVL_Iso50_v1, &tHlts.b_HLT_PAPhoton20_TightCaloIdVL_Iso50_v1);
   t->SetBranchAddress("HLT_PAPhoton20_TightCaloIdVL_Iso50_v1_Prescl", &tHlts.HLT_PAPhoton20_TightCaloIdVL_Iso50_v1_Prescl, &tHlts.b_HLT_PAPhoton20_TightCaloIdVL_Iso50_v1_Prescl);
   t->SetBranchAddress("HLT_PAPhoton30_TightCaloIdVL_Iso50_v1", &tHlts.HLT_PAPhoton30_TightCaloIdVL_Iso50_v1, &tHlts.b_HLT_PAPhoton30_TightCaloIdVL_Iso50_v1);
   t->SetBranchAddress("HLT_PAPhoton30_TightCaloIdVL_Iso50_v1_Prescl", &tHlts.HLT_PAPhoton30_TightCaloIdVL_Iso50_v1_Prescl, &tHlts.b_HLT_PAPhoton30_TightCaloIdVL_Iso50_v1_Prescl);
   t->SetBranchAddress("HLT_PAPhoton10_Photon10_NoCaloIdVL_v1", &tHlts.HLT_PAPhoton10_Photon10_NoCaloIdVL_v1, &tHlts.b_HLT_PAPhoton10_Photon10_NoCaloIdVL_v1);
   t->SetBranchAddress("HLT_PAPhoton10_Photon10_NoCaloIdVL_v1_Prescl", &tHlts.HLT_PAPhoton10_Photon10_NoCaloIdVL_v1_Prescl, &tHlts.b_HLT_PAPhoton10_Photon10_NoCaloIdVL_v1_Prescl);
   t->SetBranchAddress("HLT_PAPhoton15_Photon10_NoCaloIdVL_v1", &tHlts.HLT_PAPhoton15_Photon10_NoCaloIdVL_v1, &tHlts.b_HLT_PAPhoton15_Photon10_NoCaloIdVL_v1);
   t->SetBranchAddress("HLT_PAPhoton15_Photon10_NoCaloIdVL_v1_Prescl", &tHlts.HLT_PAPhoton15_Photon10_NoCaloIdVL_v1_Prescl, &tHlts.b_HLT_PAPhoton15_Photon10_NoCaloIdVL_v1_Prescl);
   t->SetBranchAddress("HLT_PAPhoton20_Photon15_NoCaloIdVL_v1", &tHlts.HLT_PAPhoton20_Photon15_NoCaloIdVL_v1, &tHlts.b_HLT_PAPhoton20_Photon15_NoCaloIdVL_v1);
   t->SetBranchAddress("HLT_PAPhoton20_Photon15_NoCaloIdVL_v1_Prescl", &tHlts.HLT_PAPhoton20_Photon15_NoCaloIdVL_v1_Prescl, &tHlts.b_HLT_PAPhoton20_Photon15_NoCaloIdVL_v1_Prescl);
   t->SetBranchAddress("HLT_PAPhoton20_Photon20_NoCaloIdVL_v1", &tHlts.HLT_PAPhoton20_Photon20_NoCaloIdVL_v1, &tHlts.b_HLT_PAPhoton20_Photon20_NoCaloIdVL_v1);
   t->SetBranchAddress("HLT_PAPhoton20_Photon20_NoCaloIdVL_v1_Prescl", &tHlts.HLT_PAPhoton20_Photon20_NoCaloIdVL_v1_Prescl, &tHlts.b_HLT_PAPhoton20_Photon20_NoCaloIdVL_v1_Prescl);
   t->SetBranchAddress("HLT_PAPhoton30_Photon30_NoCaloIdVL_v1", &tHlts.HLT_PAPhoton30_Photon30_NoCaloIdVL_v1, &tHlts.b_HLT_PAPhoton30_Photon30_NoCaloIdVL_v1);
   t->SetBranchAddress("HLT_PAPhoton30_Photon30_NoCaloIdVL_v1_Prescl", &tHlts.HLT_PAPhoton30_Photon30_NoCaloIdVL_v1_Prescl, &tHlts.b_HLT_PAPhoton30_Photon30_NoCaloIdVL_v1_Prescl);
   t->SetBranchAddress("HLT_PAPhoton10_Photon10_TightCaloIdVL_v1", &tHlts.HLT_PAPhoton10_Photon10_TightCaloIdVL_v1, &tHlts.b_HLT_PAPhoton10_Photon10_TightCaloIdVL_v1);
   t->SetBranchAddress("HLT_PAPhoton10_Photon10_TightCaloIdVL_v1_Prescl", &tHlts.HLT_PAPhoton10_Photon10_TightCaloIdVL_v1_Prescl, &tHlts.b_HLT_PAPhoton10_Photon10_TightCaloIdVL_v1_Prescl);
   t->SetBranchAddress("HLT_PAPhoton10_Photon10_TightCaloIdVL_Iso50_v1", &tHlts.HLT_PAPhoton10_Photon10_TightCaloIdVL_Iso50_v1, &tHlts.b_HLT_PAPhoton10_Photon10_TightCaloIdVL_Iso50_v1);
   t->SetBranchAddress("HLT_PAPhoton10_Photon10_TightCaloIdVL_Iso50_v1_Prescl", &tHlts.HLT_PAPhoton10_Photon10_TightCaloIdVL_Iso50_v1_Prescl, &tHlts.b_HLT_PAPhoton10_Photon10_TightCaloIdVL_Iso50_v1_Prescl);
   t->SetBranchAddress("HLT_PAPhoton15_Photon10_TightCaloIdVL_v1", &tHlts.HLT_PAPhoton15_Photon10_TightCaloIdVL_v1, &tHlts.b_HLT_PAPhoton15_Photon10_TightCaloIdVL_v1);
   t->SetBranchAddress("HLT_PAPhoton15_Photon10_TightCaloIdVL_v1_Prescl", &tHlts.HLT_PAPhoton15_Photon10_TightCaloIdVL_v1_Prescl, &tHlts.b_HLT_PAPhoton15_Photon10_TightCaloIdVL_v1_Prescl);
   t->SetBranchAddress("HLT_PAPhoton20_Photon15_TightCaloIdVL_v1", &tHlts.HLT_PAPhoton20_Photon15_TightCaloIdVL_v1, &tHlts.b_HLT_PAPhoton20_Photon15_TightCaloIdVL_v1);
   t->SetBranchAddress("HLT_PAPhoton20_Photon15_TightCaloIdVL_v1_Prescl", &tHlts.HLT_PAPhoton20_Photon15_TightCaloIdVL_v1_Prescl, &tHlts.b_HLT_PAPhoton20_Photon15_TightCaloIdVL_v1_Prescl);
   t->SetBranchAddress("HLT_PASingleEle6_CaloIdT_TrkIdVL_v1", &tHlts.HLT_PASingleEle6_CaloIdT_TrkIdVL_v1, &tHlts.b_HLT_PASingleEle6_CaloIdT_TrkIdVL_v1);
   t->SetBranchAddress("HLT_PASingleEle6_CaloIdT_TrkIdVL_v1_Prescl", &tHlts.HLT_PASingleEle6_CaloIdT_TrkIdVL_v1_Prescl, &tHlts.b_HLT_PASingleEle6_CaloIdT_TrkIdVL_v1_Prescl);
   t->SetBranchAddress("HLT_PASingleEle6_CaloIdNone_TrkIdVL_v1", &tHlts.HLT_PASingleEle6_CaloIdNone_TrkIdVL_v1, &tHlts.b_HLT_PASingleEle6_CaloIdNone_TrkIdVL_v1);
   t->SetBranchAddress("HLT_PASingleEle6_CaloIdNone_TrkIdVL_v1_Prescl", &tHlts.HLT_PASingleEle6_CaloIdNone_TrkIdVL_v1_Prescl, &tHlts.b_HLT_PASingleEle6_CaloIdNone_TrkIdVL_v1_Prescl);
   t->SetBranchAddress("HLT_PASingleEle8_CaloIdNone_TrkIdVL_v1", &tHlts.HLT_PASingleEle8_CaloIdNone_TrkIdVL_v1, &tHlts.b_HLT_PASingleEle8_CaloIdNone_TrkIdVL_v1);
   t->SetBranchAddress("HLT_PASingleEle8_CaloIdNone_TrkIdVL_v1_Prescl", &tHlts.HLT_PASingleEle8_CaloIdNone_TrkIdVL_v1_Prescl, &tHlts.b_HLT_PASingleEle8_CaloIdNone_TrkIdVL_v1_Prescl);
   t->SetBranchAddress("HLT_PAL1DoubleEG5DoubleEle6_CaloIdT_TrkIdVL_v1", &tHlts.HLT_PAL1DoubleEG5DoubleEle6_CaloIdT_TrkIdVL_v1, &tHlts.b_HLT_PAL1DoubleEG5DoubleEle6_CaloIdT_TrkIdVL_v1);
   t->SetBranchAddress("HLT_PAL1DoubleEG5DoubleEle6_CaloIdT_TrkIdVL_v1_Prescl", &tHlts.HLT_PAL1DoubleEG5DoubleEle6_CaloIdT_TrkIdVL_v1_Prescl, &tHlts.b_HLT_PAL1DoubleEG5DoubleEle6_CaloIdT_TrkIdVL_v1_Prescl);
   t->SetBranchAddress("HLT_PADoubleEle6_CaloIdT_TrkIdVL_v1", &tHlts.HLT_PADoubleEle6_CaloIdT_TrkIdVL_v1, &tHlts.b_HLT_PADoubleEle6_CaloIdT_TrkIdVL_v1);
   t->SetBranchAddress("HLT_PADoubleEle6_CaloIdT_TrkIdVL_v1_Prescl", &tHlts.HLT_PADoubleEle6_CaloIdT_TrkIdVL_v1_Prescl, &tHlts.b_HLT_PADoubleEle6_CaloIdT_TrkIdVL_v1_Prescl);
   t->SetBranchAddress("HLT_PADoubleEle8_CaloIdT_TrkIdVL_v1", &tHlts.HLT_PADoubleEle8_CaloIdT_TrkIdVL_v1, &tHlts.b_HLT_PADoubleEle8_CaloIdT_TrkIdVL_v1);
   t->SetBranchAddress("HLT_PADoubleEle8_CaloIdT_TrkIdVL_v1_Prescl", &tHlts.HLT_PADoubleEle8_CaloIdT_TrkIdVL_v1_Prescl, &tHlts.b_HLT_PADoubleEle8_CaloIdT_TrkIdVL_v1_Prescl);
   t->SetBranchAddress("HLT_PAPixelTracks_Multiplicity100_v1", &tHlts.HLT_PAPixelTracks_Multiplicity100_v1, &tHlts.b_HLT_PAPixelTracks_Multiplicity100_v1);
   t->SetBranchAddress("HLT_PAPixelTracks_Multiplicity100_v1_Prescl", &tHlts.HLT_PAPixelTracks_Multiplicity100_v1_Prescl, &tHlts.b_HLT_PAPixelTracks_Multiplicity100_v1_Prescl);
   t->SetBranchAddress("HLT_PAPixelTracks_Multiplicity130_v1", &tHlts.HLT_PAPixelTracks_Multiplicity130_v1, &tHlts.b_HLT_PAPixelTracks_Multiplicity130_v1);
   t->SetBranchAddress("HLT_PAPixelTracks_Multiplicity130_v1_Prescl", &tHlts.HLT_PAPixelTracks_Multiplicity130_v1_Prescl, &tHlts.b_HLT_PAPixelTracks_Multiplicity130_v1_Prescl);
   t->SetBranchAddress("HLT_PAPixelTracks_Multiplicity160_v1", &tHlts.HLT_PAPixelTracks_Multiplicity160_v1, &tHlts.b_HLT_PAPixelTracks_Multiplicity160_v1);
   t->SetBranchAddress("HLT_PAPixelTracks_Multiplicity160_v1_Prescl", &tHlts.HLT_PAPixelTracks_Multiplicity160_v1_Prescl, &tHlts.b_HLT_PAPixelTracks_Multiplicity160_v1_Prescl);
   t->SetBranchAddress("HLT_PAPixelTracks_Multiplicity190_v1", &tHlts.HLT_PAPixelTracks_Multiplicity190_v1, &tHlts.b_HLT_PAPixelTracks_Multiplicity190_v1);
   t->SetBranchAddress("HLT_PAPixelTracks_Multiplicity190_v1_Prescl", &tHlts.HLT_PAPixelTracks_Multiplicity190_v1_Prescl, &tHlts.b_HLT_PAPixelTracks_Multiplicity190_v1_Prescl);
   t->SetBranchAddress("HLT_PAPixelTracks_Multiplicity220_v1", &tHlts.HLT_PAPixelTracks_Multiplicity220_v1, &tHlts.b_HLT_PAPixelTracks_Multiplicity220_v1);
   t->SetBranchAddress("HLT_PAPixelTracks_Multiplicity220_v1_Prescl", &tHlts.HLT_PAPixelTracks_Multiplicity220_v1_Prescl, &tHlts.b_HLT_PAPixelTracks_Multiplicity220_v1_Prescl);
   t->SetBranchAddress("HLT_PAPixelTrackMultiplicity100_FullTrack12_v1", &tHlts.HLT_PAPixelTrackMultiplicity100_FullTrack12_v1, &tHlts.b_HLT_PAPixelTrackMultiplicity100_FullTrack12_v1);
   t->SetBranchAddress("HLT_PAPixelTrackMultiplicity100_FullTrack12_v1_Prescl", &tHlts.HLT_PAPixelTrackMultiplicity100_FullTrack12_v1_Prescl, &tHlts.b_HLT_PAPixelTrackMultiplicity100_FullTrack12_v1_Prescl);
   t->SetBranchAddress("HLT_PAPixelTrackMultiplicity130_FullTrack12_v1", &tHlts.HLT_PAPixelTrackMultiplicity130_FullTrack12_v1, &tHlts.b_HLT_PAPixelTrackMultiplicity130_FullTrack12_v1);
   t->SetBranchAddress("HLT_PAPixelTrackMultiplicity130_FullTrack12_v1_Prescl", &tHlts.HLT_PAPixelTrackMultiplicity130_FullTrack12_v1_Prescl, &tHlts.b_HLT_PAPixelTrackMultiplicity130_FullTrack12_v1_Prescl);
   t->SetBranchAddress("HLT_PAPixelTrackMultiplicity160_FullTrack12_v1", &tHlts.HLT_PAPixelTrackMultiplicity160_FullTrack12_v1, &tHlts.b_HLT_PAPixelTrackMultiplicity160_FullTrack12_v1);
   t->SetBranchAddress("HLT_PAPixelTrackMultiplicity160_FullTrack12_v1_Prescl", &tHlts.HLT_PAPixelTrackMultiplicity160_FullTrack12_v1_Prescl, &tHlts.b_HLT_PAPixelTrackMultiplicity160_FullTrack12_v1_Prescl);
   t->SetBranchAddress("HLT_PAPixelTrackMultiplicity100_L2DoubleMu3_v1", &tHlts.HLT_PAPixelTrackMultiplicity100_L2DoubleMu3_v1, &tHlts.b_HLT_PAPixelTrackMultiplicity100_L2DoubleMu3_v1);
   t->SetBranchAddress("HLT_PAPixelTrackMultiplicity100_L2DoubleMu3_v1_Prescl", &tHlts.HLT_PAPixelTrackMultiplicity100_L2DoubleMu3_v1_Prescl, &tHlts.b_HLT_PAPixelTrackMultiplicity100_L2DoubleMu3_v1_Prescl);
   t->SetBranchAddress("HLT_PAPixelTrackMultiplicity140_Jet80_NoJetID_v1", &tHlts.HLT_PAPixelTrackMultiplicity140_Jet80_NoJetID_v1, &tHlts.b_HLT_PAPixelTrackMultiplicity140_Jet80_NoJetID_v1);
   t->SetBranchAddress("HLT_PAPixelTrackMultiplicity140_Jet80_NoJetID_v1_Prescl", &tHlts.HLT_PAPixelTrackMultiplicity140_Jet80_NoJetID_v1_Prescl, &tHlts.b_HLT_PAPixelTrackMultiplicity140_Jet80_NoJetID_v1_Prescl);
   t->SetBranchAddress("HLT_PATech35_v1", &tHlts.HLT_PATech35_v1, &tHlts.b_HLT_PATech35_v1);
   t->SetBranchAddress("HLT_PATech35_v1_Prescl", &tHlts.HLT_PATech35_v1_Prescl, &tHlts.b_HLT_PATech35_v1_Prescl);
   t->SetBranchAddress("HLT_PATech35_HFSumET100_v1", &tHlts.HLT_PATech35_HFSumET100_v1, &tHlts.b_HLT_PATech35_HFSumET100_v1);
   t->SetBranchAddress("HLT_PATech35_HFSumET100_v1_Prescl", &tHlts.HLT_PATech35_HFSumET100_v1_Prescl, &tHlts.b_HLT_PATech35_HFSumET100_v1_Prescl);
   t->SetBranchAddress("HLT_PAFullTrack12_v1", &tHlts.HLT_PAFullTrack12_v1, &tHlts.b_HLT_PAFullTrack12_v1);
   t->SetBranchAddress("HLT_PAFullTrack12_v1_Prescl", &tHlts.HLT_PAFullTrack12_v1_Prescl, &tHlts.b_HLT_PAFullTrack12_v1_Prescl);
   t->SetBranchAddress("HLT_PAFullTrack20_v1", &tHlts.HLT_PAFullTrack20_v1, &tHlts.b_HLT_PAFullTrack20_v1);
   t->SetBranchAddress("HLT_PAFullTrack20_v1_Prescl", &tHlts.HLT_PAFullTrack20_v1_Prescl, &tHlts.b_HLT_PAFullTrack20_v1_Prescl);
   t->SetBranchAddress("HLT_PAFullTrack30_v1", &tHlts.HLT_PAFullTrack30_v1, &tHlts.b_HLT_PAFullTrack30_v1);
   t->SetBranchAddress("HLT_PAFullTrack30_v1_Prescl", &tHlts.HLT_PAFullTrack30_v1_Prescl, &tHlts.b_HLT_PAFullTrack30_v1_Prescl);
   t->SetBranchAddress("HLT_PAFullTrack50_v1", &tHlts.HLT_PAFullTrack50_v1, &tHlts.b_HLT_PAFullTrack50_v1);
   t->SetBranchAddress("HLT_PAFullTrack50_v1_Prescl", &tHlts.HLT_PAFullTrack50_v1_Prescl, &tHlts.b_HLT_PAFullTrack50_v1_Prescl);
   t->SetBranchAddress("HLT_PAHFSumET100_v1", &tHlts.HLT_PAHFSumET100_v1, &tHlts.b_HLT_PAHFSumET100_v1);
   t->SetBranchAddress("HLT_PAHFSumET100_v1_Prescl", &tHlts.HLT_PAHFSumET100_v1_Prescl, &tHlts.b_HLT_PAHFSumET100_v1_Prescl);
   t->SetBranchAddress("HLT_PAHFSumET140_v1", &tHlts.HLT_PAHFSumET140_v1, &tHlts.b_HLT_PAHFSumET140_v1);
   t->SetBranchAddress("HLT_PAHFSumET140_v1_Prescl", &tHlts.HLT_PAHFSumET140_v1_Prescl, &tHlts.b_HLT_PAHFSumET140_v1_Prescl);
   t->SetBranchAddress("HLT_PAHFSumET170_v1", &tHlts.HLT_PAHFSumET170_v1, &tHlts.b_HLT_PAHFSumET170_v1);
   t->SetBranchAddress("HLT_PAHFSumET170_v1_Prescl", &tHlts.HLT_PAHFSumET170_v1_Prescl, &tHlts.b_HLT_PAHFSumET170_v1_Prescl);
   t->SetBranchAddress("HLT_PAHFSumET210_v1", &tHlts.HLT_PAHFSumET210_v1, &tHlts.b_HLT_PAHFSumET210_v1);
   t->SetBranchAddress("HLT_PAHFSumET210_v1_Prescl", &tHlts.HLT_PAHFSumET210_v1_Prescl, &tHlts.b_HLT_PAHFSumET210_v1_Prescl);
   t->SetBranchAddress("HLT_PARomanPots_Tech52_v1", &tHlts.HLT_PARomanPots_Tech52_v1, &tHlts.b_HLT_PARomanPots_Tech52_v1);
   t->SetBranchAddress("HLT_PARomanPots_Tech52_v1_Prescl", &tHlts.HLT_PARomanPots_Tech52_v1_Prescl, &tHlts.b_HLT_PARomanPots_Tech52_v1_Prescl);
   t->SetBranchAddress("HLT_PAL1Tech53_MB_v1", &tHlts.HLT_PAL1Tech53_MB_v1, &tHlts.b_HLT_PAL1Tech53_MB_v1);
   t->SetBranchAddress("HLT_PAL1Tech53_MB_v1_Prescl", &tHlts.HLT_PAL1Tech53_MB_v1_Prescl, &tHlts.b_HLT_PAL1Tech53_MB_v1_Prescl);
   t->SetBranchAddress("HLT_PAL1Tech53_MB_SingleTrack_v1", &tHlts.HLT_PAL1Tech53_MB_SingleTrack_v1, &tHlts.b_HLT_PAL1Tech53_MB_SingleTrack_v1);
   t->SetBranchAddress("HLT_PAL1Tech53_MB_SingleTrack_v1_Prescl", &tHlts.HLT_PAL1Tech53_MB_SingleTrack_v1_Prescl, &tHlts.b_HLT_PAL1Tech53_MB_SingleTrack_v1_Prescl);
   t->SetBranchAddress("HLT_PAL1Tech54_ZeroBias_v1", &tHlts.HLT_PAL1Tech54_ZeroBias_v1, &tHlts.b_HLT_PAL1Tech54_ZeroBias_v1);
   t->SetBranchAddress("HLT_PAL1Tech54_ZeroBias_v1_Prescl", &tHlts.HLT_PAL1Tech54_ZeroBias_v1_Prescl, &tHlts.b_HLT_PAL1Tech54_ZeroBias_v1_Prescl);
   t->SetBranchAddress("HLT_PAT1minbias_Tech55_v1", &tHlts.HLT_PAT1minbias_Tech55_v1, &tHlts.b_HLT_PAT1minbias_Tech55_v1);
   t->SetBranchAddress("HLT_PAT1minbias_Tech55_v1_Prescl", &tHlts.HLT_PAT1minbias_Tech55_v1_Prescl, &tHlts.b_HLT_PAT1minbias_Tech55_v1_Prescl);
   t->SetBranchAddress("HLT_PAL1Tech_HBHEHO_totalOR_v1", &tHlts.HLT_PAL1Tech_HBHEHO_totalOR_v1, &tHlts.b_HLT_PAL1Tech_HBHEHO_totalOR_v1);
   t->SetBranchAddress("HLT_PAL1Tech_HBHEHO_totalOR_v1_Prescl", &tHlts.HLT_PAL1Tech_HBHEHO_totalOR_v1_Prescl, &tHlts.b_HLT_PAL1Tech_HBHEHO_totalOR_v1_Prescl);
   t->SetBranchAddress("HLT_PAL1Tech63_CASTORHaloMuon_v1", &tHlts.HLT_PAL1Tech63_CASTORHaloMuon_v1, &tHlts.b_HLT_PAL1Tech63_CASTORHaloMuon_v1);
   t->SetBranchAddress("HLT_PAL1Tech63_CASTORHaloMuon_v1_Prescl", &tHlts.HLT_PAL1Tech63_CASTORHaloMuon_v1_Prescl, &tHlts.b_HLT_PAL1Tech63_CASTORHaloMuon_v1_Prescl);
   t->SetBranchAddress("HLT_PACastorEmTotemLowMultiplicity_v1", &tHlts.HLT_PACastorEmTotemLowMultiplicity_v1, &tHlts.b_HLT_PACastorEmTotemLowMultiplicity_v1);
   t->SetBranchAddress("HLT_PACastorEmTotemLowMultiplicity_v1_Prescl", &tHlts.HLT_PACastorEmTotemLowMultiplicity_v1_Prescl, &tHlts.b_HLT_PACastorEmTotemLowMultiplicity_v1_Prescl);
   t->SetBranchAddress("HLT_PACastorEmNotHfCoincidencePm_v1", &tHlts.HLT_PACastorEmNotHfCoincidencePm_v1, &tHlts.b_HLT_PACastorEmNotHfCoincidencePm_v1);
   t->SetBranchAddress("HLT_PACastorEmNotHfCoincidencePm_v1_Prescl", &tHlts.HLT_PACastorEmNotHfCoincidencePm_v1_Prescl, &tHlts.b_HLT_PACastorEmNotHfCoincidencePm_v1_Prescl);
   t->SetBranchAddress("HLT_PACastorEmNotHfSingleChannel_v1", &tHlts.HLT_PACastorEmNotHfSingleChannel_v1, &tHlts.b_HLT_PACastorEmNotHfSingleChannel_v1);
   t->SetBranchAddress("HLT_PACastorEmNotHfSingleChannel_v1_Prescl", &tHlts.HLT_PACastorEmNotHfSingleChannel_v1_Prescl, &tHlts.b_HLT_PACastorEmNotHfSingleChannel_v1_Prescl);
   t->SetBranchAddress("HLT_PAL1CastorTotalTotemLowMultiplicity_v1", &tHlts.HLT_PAL1CastorTotalTotemLowMultiplicity_v1, &tHlts.b_HLT_PAL1CastorTotalTotemLowMultiplicity_v1);
   t->SetBranchAddress("HLT_PAL1CastorTotalTotemLowMultiplicity_v1_Prescl", &tHlts.HLT_PAL1CastorTotalTotemLowMultiplicity_v1_Prescl, &tHlts.b_HLT_PAL1CastorTotalTotemLowMultiplicity_v1_Prescl);
   t->SetBranchAddress("HLT_PAMinBiasHF_v1", &tHlts.HLT_PAMinBiasHF_v1, &tHlts.b_HLT_PAMinBiasHF_v1);
   t->SetBranchAddress("HLT_PAMinBiasHF_v1_Prescl", &tHlts.HLT_PAMinBiasHF_v1_Prescl, &tHlts.b_HLT_PAMinBiasHF_v1_Prescl);
   t->SetBranchAddress("HLT_PAMinBiasHF_OR_v1", &tHlts.HLT_PAMinBiasHF_OR_v1, &tHlts.b_HLT_PAMinBiasHF_OR_v1);
   t->SetBranchAddress("HLT_PAMinBiasHF_OR_v1_Prescl", &tHlts.HLT_PAMinBiasHF_OR_v1_Prescl, &tHlts.b_HLT_PAMinBiasHF_OR_v1_Prescl);
   t->SetBranchAddress("HLT_PAMinBiasBHC_v1", &tHlts.HLT_PAMinBiasBHC_v1, &tHlts.b_HLT_PAMinBiasBHC_v1);
   t->SetBranchAddress("HLT_PAMinBiasBHC_v1_Prescl", &tHlts.HLT_PAMinBiasBHC_v1_Prescl, &tHlts.b_HLT_PAMinBiasBHC_v1_Prescl);
   t->SetBranchAddress("HLT_PAMinBiasBHC_OR_v1", &tHlts.HLT_PAMinBiasBHC_OR_v1, &tHlts.b_HLT_PAMinBiasBHC_OR_v1);
   t->SetBranchAddress("HLT_PAMinBiasBHC_OR_v1_Prescl", &tHlts.HLT_PAMinBiasBHC_OR_v1_Prescl, &tHlts.b_HLT_PAMinBiasBHC_OR_v1_Prescl);
   t->SetBranchAddress("HLT_PAMinBiasHfOrBHC_v1", &tHlts.HLT_PAMinBiasHfOrBHC_v1, &tHlts.b_HLT_PAMinBiasHfOrBHC_v1);
   t->SetBranchAddress("HLT_PAMinBiasHfOrBHC_v1_Prescl", &tHlts.HLT_PAMinBiasHfOrBHC_v1_Prescl, &tHlts.b_HLT_PAMinBiasHfOrBHC_v1_Prescl);
   t->SetBranchAddress("HLT_PABptxPlusNotBptxMinus_v1", &tHlts.HLT_PABptxPlusNotBptxMinus_v1, &tHlts.b_HLT_PABptxPlusNotBptxMinus_v1);
   t->SetBranchAddress("HLT_PABptxPlusNotBptxMinus_v1_Prescl", &tHlts.HLT_PABptxPlusNotBptxMinus_v1_Prescl, &tHlts.b_HLT_PABptxPlusNotBptxMinus_v1_Prescl);
   t->SetBranchAddress("HLT_PABptxMinusNotBptxPlus_v1", &tHlts.HLT_PABptxMinusNotBptxPlus_v1, &tHlts.b_HLT_PABptxMinusNotBptxPlus_v1);
   t->SetBranchAddress("HLT_PABptxMinusNotBptxPlus_v1_Prescl", &tHlts.HLT_PABptxMinusNotBptxPlus_v1_Prescl, &tHlts.b_HLT_PABptxMinusNotBptxPlus_v1_Prescl);
   t->SetBranchAddress("HLT_PAZeroBias_v1", &tHlts.HLT_PAZeroBias_v1, &tHlts.b_HLT_PAZeroBias_v1);
   t->SetBranchAddress("HLT_PAZeroBias_v1_Prescl", &tHlts.HLT_PAZeroBias_v1_Prescl, &tHlts.b_HLT_PAZeroBias_v1_Prescl);
   t->SetBranchAddress("HLT_PAZeroBiasPixel_SingleTrack_v1", &tHlts.HLT_PAZeroBiasPixel_SingleTrack_v1, &tHlts.b_HLT_PAZeroBiasPixel_SingleTrack_v1);
   t->SetBranchAddress("HLT_PAZeroBiasPixel_SingleTrack_v1_Prescl", &tHlts.HLT_PAZeroBiasPixel_SingleTrack_v1_Prescl, &tHlts.b_HLT_PAZeroBiasPixel_SingleTrack_v1_Prescl);
   t->SetBranchAddress("HLT_PAHFOR_SingleTrack_v1", &tHlts.HLT_PAHFOR_SingleTrack_v1, &tHlts.b_HLT_PAHFOR_SingleTrack_v1);
   t->SetBranchAddress("HLT_PAHFOR_SingleTrack_v1_Prescl", &tHlts.HLT_PAHFOR_SingleTrack_v1_Prescl, &tHlts.b_HLT_PAHFOR_SingleTrack_v1_Prescl);
   t->SetBranchAddress("HLT_PAZeroBiasPixel_DoubleTrack_v1", &tHlts.HLT_PAZeroBiasPixel_DoubleTrack_v1, &tHlts.b_HLT_PAZeroBiasPixel_DoubleTrack_v1);
   t->SetBranchAddress("HLT_PAZeroBiasPixel_DoubleTrack_v1_Prescl", &tHlts.HLT_PAZeroBiasPixel_DoubleTrack_v1_Prescl, &tHlts.b_HLT_PAZeroBiasPixel_DoubleTrack_v1_Prescl);
   t->SetBranchAddress("HLT_PADoubleMu4_Acoplanarity03_v1", &tHlts.HLT_PADoubleMu4_Acoplanarity03_v1, &tHlts.b_HLT_PADoubleMu4_Acoplanarity03_v1);
   t->SetBranchAddress("HLT_PADoubleMu4_Acoplanarity03_v1_Prescl", &tHlts.HLT_PADoubleMu4_Acoplanarity03_v1_Prescl, &tHlts.b_HLT_PADoubleMu4_Acoplanarity03_v1_Prescl);
   t->SetBranchAddress("HLT_PAExclDijet35_HFAND_v1", &tHlts.HLT_PAExclDijet35_HFAND_v1, &tHlts.b_HLT_PAExclDijet35_HFAND_v1);
   t->SetBranchAddress("HLT_PAExclDijet35_HFAND_v1_Prescl", &tHlts.HLT_PAExclDijet35_HFAND_v1_Prescl, &tHlts.b_HLT_PAExclDijet35_HFAND_v1_Prescl);
   t->SetBranchAddress("HLT_PAL1DoubleEG3_FwdVeto_v1", &tHlts.HLT_PAL1DoubleEG3_FwdVeto_v1, &tHlts.b_HLT_PAL1DoubleEG3_FwdVeto_v1);
   t->SetBranchAddress("HLT_PAL1DoubleEG3_FwdVeto_v1_Prescl", &tHlts.HLT_PAL1DoubleEG3_FwdVeto_v1_Prescl, &tHlts.b_HLT_PAL1DoubleEG3_FwdVeto_v1_Prescl);
   t->SetBranchAddress("HLT_PAL1DoubleJet20_TotemDiffractive_v1", &tHlts.HLT_PAL1DoubleJet20_TotemDiffractive_v1, &tHlts.b_HLT_PAL1DoubleJet20_TotemDiffractive_v1);
   t->SetBranchAddress("HLT_PAL1DoubleJet20_TotemDiffractive_v1_Prescl", &tHlts.HLT_PAL1DoubleJet20_TotemDiffractive_v1_Prescl, &tHlts.b_HLT_PAL1DoubleJet20_TotemDiffractive_v1_Prescl);
   t->SetBranchAddress("HLT_PADoubleJet20_ForwardBackward_v1", &tHlts.HLT_PADoubleJet20_ForwardBackward_v1, &tHlts.b_HLT_PADoubleJet20_ForwardBackward_v1);
   t->SetBranchAddress("HLT_PADoubleJet20_ForwardBackward_v1_Prescl", &tHlts.HLT_PADoubleJet20_ForwardBackward_v1_Prescl, &tHlts.b_HLT_PADoubleJet20_ForwardBackward_v1_Prescl);
   t->SetBranchAddress("HLT_PAMu7_Ele7_CaloIdT_CaloIsoVL_v1", &tHlts.HLT_PAMu7_Ele7_CaloIdT_CaloIsoVL_v1, &tHlts.b_HLT_PAMu7_Ele7_CaloIdT_CaloIsoVL_v1);
   t->SetBranchAddress("HLT_PAMu7_Ele7_CaloIdT_CaloIsoVL_v1_Prescl", &tHlts.HLT_PAMu7_Ele7_CaloIdT_CaloIsoVL_v1_Prescl, &tHlts.b_HLT_PAMu7_Ele7_CaloIdT_CaloIsoVL_v1_Prescl);
   t->SetBranchAddress("HLT_PAUpcSingleEG5Pixel_TrackVeto_v1", &tHlts.HLT_PAUpcSingleEG5Pixel_TrackVeto_v1, &tHlts.b_HLT_PAUpcSingleEG5Pixel_TrackVeto_v1);
   t->SetBranchAddress("HLT_PAUpcSingleEG5Pixel_TrackVeto_v1_Prescl", &tHlts.HLT_PAUpcSingleEG5Pixel_TrackVeto_v1_Prescl, &tHlts.b_HLT_PAUpcSingleEG5Pixel_TrackVeto_v1_Prescl);
   t->SetBranchAddress("HLT_PAUpcSingleEG5Full_TrackVeto7_v1", &tHlts.HLT_PAUpcSingleEG5Full_TrackVeto7_v1, &tHlts.b_HLT_PAUpcSingleEG5Full_TrackVeto7_v1);
   t->SetBranchAddress("HLT_PAUpcSingleEG5Full_TrackVeto7_v1_Prescl", &tHlts.HLT_PAUpcSingleEG5Full_TrackVeto7_v1_Prescl, &tHlts.b_HLT_PAUpcSingleEG5Full_TrackVeto7_v1_Prescl);
   t->SetBranchAddress("HLT_PAUpcSingleMuOpenPixel_TrackVeto_v1", &tHlts.HLT_PAUpcSingleMuOpenPixel_TrackVeto_v1, &tHlts.b_HLT_PAUpcSingleMuOpenPixel_TrackVeto_v1);
   t->SetBranchAddress("HLT_PAUpcSingleMuOpenPixel_TrackVeto_v1_Prescl", &tHlts.HLT_PAUpcSingleMuOpenPixel_TrackVeto_v1_Prescl, &tHlts.b_HLT_PAUpcSingleMuOpenPixel_TrackVeto_v1_Prescl);
   t->SetBranchAddress("HLT_PAUpcSingleMuOpenFull_TrackVeto7_v1", &tHlts.HLT_PAUpcSingleMuOpenFull_TrackVeto7_v1, &tHlts.b_HLT_PAUpcSingleMuOpenFull_TrackVeto7_v1);
   t->SetBranchAddress("HLT_PAUpcSingleMuOpenFull_TrackVeto7_v1_Prescl", &tHlts.HLT_PAUpcSingleMuOpenFull_TrackVeto7_v1_Prescl, &tHlts.b_HLT_PAUpcSingleMuOpenFull_TrackVeto7_v1_Prescl);
   t->SetBranchAddress("HLT_PAUpcSingleMuOpenTkMu_Onia_v1", &tHlts.HLT_PAUpcSingleMuOpenTkMu_Onia_v1, &tHlts.b_HLT_PAUpcSingleMuOpenTkMu_Onia_v1);
   t->SetBranchAddress("HLT_PAUpcSingleMuOpenTkMu_Onia_v1_Prescl", &tHlts.HLT_PAUpcSingleMuOpenTkMu_Onia_v1_Prescl, &tHlts.b_HLT_PAUpcSingleMuOpenTkMu_Onia_v1_Prescl);
   t->SetBranchAddress("HLT_PARandom_v1", &tHlts.HLT_PARandom_v1, &tHlts.b_HLT_PARandom_v1);
   t->SetBranchAddress("HLT_PARandom_v1_Prescl", &tHlts.HLT_PARandom_v1_Prescl, &tHlts.b_HLT_PARandom_v1_Prescl);
   t->SetBranchAddress("DQM_FEDIntegrity_v11", &tHlts.DQM_FEDIntegrity_v11, &tHlts.b_DQM_FEDIntegrity_v11);
   t->SetBranchAddress("DQM_FEDIntegrity_v11_Prescl", &tHlts.DQM_FEDIntegrity_v11_Prescl, &tHlts.b_DQM_FEDIntegrity_v11_Prescl);
   t->SetBranchAddress("HLT_LogMonitor_v4", &tHlts.HLT_LogMonitor_v4, &tHlts.b_HLT_LogMonitor_v4);
   t->SetBranchAddress("HLT_LogMonitor_v4_Prescl", &tHlts.HLT_LogMonitor_v4_Prescl, &tHlts.b_HLT_LogMonitor_v4_Prescl);
   t->SetBranchAddress("HLTriggerFinalPath", &tHlts.HLTriggerFinalPath, &tHlts.b_HLTriggerFinalPath);
   t->SetBranchAddress("HLTriggerFinalPath_Prescl", &tHlts.HLTriggerFinalPath_Prescl, &tHlts.b_HLTriggerFinalPath_Prescl);
   t->SetBranchAddress("L1_AlwaysTrue", &tHlts.L1_AlwaysTrue, &tHlts.b_L1_AlwaysTrue);
   t->SetBranchAddress("L1_AlwaysTrue_Prescl", &tHlts.L1_AlwaysTrue_Prescl, &tHlts.b_L1_AlwaysTrue_Prescl);
   t->SetBranchAddress("L1_BeamGas_Hf_BptxMinusPostQuiet", &tHlts.L1_BeamGas_Hf_BptxMinusPostQuiet, &tHlts.b_L1_BeamGas_Hf_BptxMinusPostQuiet);
   t->SetBranchAddress("L1_BeamGas_Hf_BptxMinusPostQuiet_Prescl", &tHlts.L1_BeamGas_Hf_BptxMinusPostQuiet_Prescl, &tHlts.b_L1_BeamGas_Hf_BptxMinusPostQuiet_Prescl);
   t->SetBranchAddress("L1_BeamGas_Hf_BptxPlusPostQuiet", &tHlts.L1_BeamGas_Hf_BptxPlusPostQuiet, &tHlts.b_L1_BeamGas_Hf_BptxPlusPostQuiet);
   t->SetBranchAddress("L1_BeamGas_Hf_BptxPlusPostQuiet_Prescl", &tHlts.L1_BeamGas_Hf_BptxPlusPostQuiet_Prescl, &tHlts.b_L1_BeamGas_Hf_BptxPlusPostQuiet_Prescl);
   t->SetBranchAddress("L1_BeamHalo", &tHlts.L1_BeamHalo, &tHlts.b_L1_BeamHalo);
   t->SetBranchAddress("L1_BeamHalo_Prescl", &tHlts.L1_BeamHalo_Prescl, &tHlts.b_L1_BeamHalo_Prescl);
   t->SetBranchAddress("L1_BptxMinus_NotBptxPlus", &tHlts.L1_BptxMinus_NotBptxPlus, &tHlts.b_L1_BptxMinus_NotBptxPlus);
   t->SetBranchAddress("L1_BptxMinus_NotBptxPlus_Prescl", &tHlts.L1_BptxMinus_NotBptxPlus_Prescl, &tHlts.b_L1_BptxMinus_NotBptxPlus_Prescl);
   t->SetBranchAddress("L1_BptxPlus_NotBptxMinus", &tHlts.L1_BptxPlus_NotBptxMinus, &tHlts.b_L1_BptxPlus_NotBptxMinus);
   t->SetBranchAddress("L1_BptxPlus_NotBptxMinus_Prescl", &tHlts.L1_BptxPlus_NotBptxMinus_Prescl, &tHlts.b_L1_BptxPlus_NotBptxMinus_Prescl);
   t->SetBranchAddress("L1_BscHighMultiplicity_BptxAND", &tHlts.L1_BscHighMultiplicity_BptxAND, &tHlts.b_L1_BscHighMultiplicity_BptxAND);
   t->SetBranchAddress("L1_BscHighMultiplicity_BptxAND_Prescl", &tHlts.L1_BscHighMultiplicity_BptxAND_Prescl, &tHlts.b_L1_BscHighMultiplicity_BptxAND_Prescl);
   t->SetBranchAddress("L1_BscMinBiasOR_BptxAND", &tHlts.L1_BscMinBiasOR_BptxAND, &tHlts.b_L1_BscMinBiasOR_BptxAND);
   t->SetBranchAddress("L1_BscMinBiasOR_BptxAND_Prescl", &tHlts.L1_BscMinBiasOR_BptxAND_Prescl, &tHlts.b_L1_BscMinBiasOR_BptxAND_Prescl);
   t->SetBranchAddress("L1_BscMinBiasThreshold1_BptxAND", &tHlts.L1_BscMinBiasThreshold1_BptxAND, &tHlts.b_L1_BscMinBiasThreshold1_BptxAND);
   t->SetBranchAddress("L1_BscMinBiasThreshold1_BptxAND_Prescl", &tHlts.L1_BscMinBiasThreshold1_BptxAND_Prescl, &tHlts.b_L1_BscMinBiasThreshold1_BptxAND_Prescl);
   t->SetBranchAddress("L1_BscMinBiasThreshold2_BptxAND", &tHlts.L1_BscMinBiasThreshold2_BptxAND, &tHlts.b_L1_BscMinBiasThreshold2_BptxAND);
   t->SetBranchAddress("L1_BscMinBiasThreshold2_BptxAND_Prescl", &tHlts.L1_BscMinBiasThreshold2_BptxAND_Prescl, &tHlts.b_L1_BscMinBiasThreshold2_BptxAND_Prescl);
   t->SetBranchAddress("L1_CastorEm_NotHcalHfCoincidencePm", &tHlts.L1_CastorEm_NotHcalHfCoincidencePm, &tHlts.b_L1_CastorEm_NotHcalHfCoincidencePm);
   t->SetBranchAddress("L1_CastorEm_NotHcalHfCoincidencePm_Prescl", &tHlts.L1_CastorEm_NotHcalHfCoincidencePm_Prescl, &tHlts.b_L1_CastorEm_NotHcalHfCoincidencePm_Prescl);
   t->SetBranchAddress("L1_CastorEm_NotHcalHfSingleChannel", &tHlts.L1_CastorEm_NotHcalHfSingleChannel, &tHlts.b_L1_CastorEm_NotHcalHfSingleChannel);
   t->SetBranchAddress("L1_CastorEm_NotHcalHfSingleChannel_Prescl", &tHlts.L1_CastorEm_NotHcalHfSingleChannel_Prescl, &tHlts.b_L1_CastorEm_NotHcalHfSingleChannel_Prescl);
   t->SetBranchAddress("L1_CastorEm_TotemLowMultiplicity", &tHlts.L1_CastorEm_TotemLowMultiplicity, &tHlts.b_L1_CastorEm_TotemLowMultiplicity);
   t->SetBranchAddress("L1_CastorEm_TotemLowMultiplicity_Prescl", &tHlts.L1_CastorEm_TotemLowMultiplicity_Prescl, &tHlts.b_L1_CastorEm_TotemLowMultiplicity_Prescl);
   t->SetBranchAddress("L1_CastorTotalEnergy_TotemLowMultiplicity", &tHlts.L1_CastorTotalEnergy_TotemLowMultiplicity, &tHlts.b_L1_CastorTotalEnergy_TotemLowMultiplicity);
   t->SetBranchAddress("L1_CastorTotalEnergy_TotemLowMultiplicity_Prescl", &tHlts.L1_CastorTotalEnergy_TotemLowMultiplicity_Prescl, &tHlts.b_L1_CastorTotalEnergy_TotemLowMultiplicity_Prescl);
   t->SetBranchAddress("L1_DoubleEG3_FwdVeto", &tHlts.L1_DoubleEG3_FwdVeto, &tHlts.b_L1_DoubleEG3_FwdVeto);
   t->SetBranchAddress("L1_DoubleEG3_FwdVeto_Prescl", &tHlts.L1_DoubleEG3_FwdVeto_Prescl, &tHlts.b_L1_DoubleEG3_FwdVeto_Prescl);
   t->SetBranchAddress("L1_DoubleEG5", &tHlts.L1_DoubleEG5, &tHlts.b_L1_DoubleEG5);
   t->SetBranchAddress("L1_DoubleEG5_Prescl", &tHlts.L1_DoubleEG5_Prescl, &tHlts.b_L1_DoubleEG5_Prescl);
   t->SetBranchAddress("L1_DoubleEG5_TotemDiffractive", &tHlts.L1_DoubleEG5_TotemDiffractive, &tHlts.b_L1_DoubleEG5_TotemDiffractive);
   t->SetBranchAddress("L1_DoubleEG5_TotemDiffractive_Prescl", &tHlts.L1_DoubleEG5_TotemDiffractive_Prescl, &tHlts.b_L1_DoubleEG5_TotemDiffractive_Prescl);
   t->SetBranchAddress("L1_DoubleEG6_HTT100", &tHlts.L1_DoubleEG6_HTT100, &tHlts.b_L1_DoubleEG6_HTT100);
   t->SetBranchAddress("L1_DoubleEG6_HTT100_Prescl", &tHlts.L1_DoubleEG6_HTT100_Prescl, &tHlts.b_L1_DoubleEG6_HTT100_Prescl);
   t->SetBranchAddress("L1_DoubleEG6_HTT125", &tHlts.L1_DoubleEG6_HTT125, &tHlts.b_L1_DoubleEG6_HTT125);
   t->SetBranchAddress("L1_DoubleEG6_HTT125_Prescl", &tHlts.L1_DoubleEG6_HTT125_Prescl, &tHlts.b_L1_DoubleEG6_HTT125_Prescl);
   t->SetBranchAddress("L1_DoubleEG_13_7", &tHlts.L1_DoubleEG_13_7, &tHlts.b_L1_DoubleEG_13_7);
   t->SetBranchAddress("L1_DoubleEG_13_7_Prescl", &tHlts.L1_DoubleEG_13_7_Prescl, &tHlts.b_L1_DoubleEG_13_7_Prescl);
   t->SetBranchAddress("L1_DoubleForJet16_EtaOpp", &tHlts.L1_DoubleForJet16_EtaOpp, &tHlts.b_L1_DoubleForJet16_EtaOpp);
   t->SetBranchAddress("L1_DoubleForJet16_EtaOpp_Prescl", &tHlts.L1_DoubleForJet16_EtaOpp_Prescl, &tHlts.b_L1_DoubleForJet16_EtaOpp_Prescl);
   t->SetBranchAddress("L1_DoubleJet20", &tHlts.L1_DoubleJet20, &tHlts.b_L1_DoubleJet20);
   t->SetBranchAddress("L1_DoubleJet20_Prescl", &tHlts.L1_DoubleJet20_Prescl, &tHlts.b_L1_DoubleJet20_Prescl);
   t->SetBranchAddress("L1_DoubleJet20_TotemDiffractive", &tHlts.L1_DoubleJet20_TotemDiffractive, &tHlts.b_L1_DoubleJet20_TotemDiffractive);
   t->SetBranchAddress("L1_DoubleJet20_TotemDiffractive_Prescl", &tHlts.L1_DoubleJet20_TotemDiffractive_Prescl, &tHlts.b_L1_DoubleJet20_TotemDiffractive_Prescl);
   t->SetBranchAddress("L1_DoubleJet24_v1", &tHlts.L1_DoubleJet24_v1, &tHlts.b_L1_DoubleJet24_v1);
   t->SetBranchAddress("L1_DoubleJet24_v1_Prescl", &tHlts.L1_DoubleJet24_v1_Prescl, &tHlts.b_L1_DoubleJet24_v1_Prescl);
   t->SetBranchAddress("L1_DoubleJet36_Central", &tHlts.L1_DoubleJet36_Central, &tHlts.b_L1_DoubleJet36_Central);
   t->SetBranchAddress("L1_DoubleJet36_Central_Prescl", &tHlts.L1_DoubleJet36_Central_Prescl, &tHlts.b_L1_DoubleJet36_Central_Prescl);
   t->SetBranchAddress("L1_DoubleJet52_Central", &tHlts.L1_DoubleJet52_Central, &tHlts.b_L1_DoubleJet52_Central);
   t->SetBranchAddress("L1_DoubleJet52_Central_Prescl", &tHlts.L1_DoubleJet52_Central_Prescl, &tHlts.b_L1_DoubleJet52_Central_Prescl);
   t->SetBranchAddress("L1_DoubleJetC36_TotemDiffractive", &tHlts.L1_DoubleJetC36_TotemDiffractive, &tHlts.b_L1_DoubleJetC36_TotemDiffractive);
   t->SetBranchAddress("L1_DoubleJetC36_TotemDiffractive_Prescl", &tHlts.L1_DoubleJetC36_TotemDiffractive_Prescl, &tHlts.b_L1_DoubleJetC36_TotemDiffractive_Prescl);
   t->SetBranchAddress("L1_DoubleJetC44_ETM30", &tHlts.L1_DoubleJetC44_ETM30, &tHlts.b_L1_DoubleJetC44_ETM30);
   t->SetBranchAddress("L1_DoubleJetC44_ETM30_Prescl", &tHlts.L1_DoubleJetC44_ETM30_Prescl, &tHlts.b_L1_DoubleJetC44_ETM30_Prescl);
   t->SetBranchAddress("L1_DoubleJetC56", &tHlts.L1_DoubleJetC56, &tHlts.b_L1_DoubleJetC56);
   t->SetBranchAddress("L1_DoubleJetC56_Prescl", &tHlts.L1_DoubleJetC56_Prescl, &tHlts.b_L1_DoubleJetC56_Prescl);
   t->SetBranchAddress("L1_DoubleJetC56_Eta1p74_WdEta4", &tHlts.L1_DoubleJetC56_Eta1p74_WdEta4, &tHlts.b_L1_DoubleJetC56_Eta1p74_WdEta4);
   t->SetBranchAddress("L1_DoubleJetC56_Eta1p74_WdEta4_Prescl", &tHlts.L1_DoubleJetC56_Eta1p74_WdEta4_Prescl, &tHlts.b_L1_DoubleJetC56_Eta1p74_WdEta4_Prescl);
   t->SetBranchAddress("L1_DoubleMu0", &tHlts.L1_DoubleMu0, &tHlts.b_L1_DoubleMu0);
   t->SetBranchAddress("L1_DoubleMu0_Prescl", &tHlts.L1_DoubleMu0_Prescl, &tHlts.b_L1_DoubleMu0_Prescl);
   t->SetBranchAddress("L1_DoubleMu0_HighQ_EtaCuts", &tHlts.L1_DoubleMu0_HighQ_EtaCuts, &tHlts.b_L1_DoubleMu0_HighQ_EtaCuts);
   t->SetBranchAddress("L1_DoubleMu0_HighQ_EtaCuts_Prescl", &tHlts.L1_DoubleMu0_HighQ_EtaCuts_Prescl, &tHlts.b_L1_DoubleMu0_HighQ_EtaCuts_Prescl);
   t->SetBranchAddress("L1_DoubleMu3p5_EG5", &tHlts.L1_DoubleMu3p5_EG5, &tHlts.b_L1_DoubleMu3p5_EG5);
   t->SetBranchAddress("L1_DoubleMu3p5_EG5_Prescl", &tHlts.L1_DoubleMu3p5_EG5_Prescl, &tHlts.b_L1_DoubleMu3p5_EG5_Prescl);
   t->SetBranchAddress("L1_DoubleMu5_EG5", &tHlts.L1_DoubleMu5_EG5, &tHlts.b_L1_DoubleMu5_EG5);
   t->SetBranchAddress("L1_DoubleMu5_EG5_Prescl", &tHlts.L1_DoubleMu5_EG5_Prescl, &tHlts.b_L1_DoubleMu5_EG5_Prescl);
   t->SetBranchAddress("L1_DoubleMu5_TotemDiffractive", &tHlts.L1_DoubleMu5_TotemDiffractive, &tHlts.b_L1_DoubleMu5_TotemDiffractive);
   t->SetBranchAddress("L1_DoubleMu5_TotemDiffractive_Prescl", &tHlts.L1_DoubleMu5_TotemDiffractive_Prescl, &tHlts.b_L1_DoubleMu5_TotemDiffractive_Prescl);
   t->SetBranchAddress("L1_DoubleMu5_v1", &tHlts.L1_DoubleMu5_v1, &tHlts.b_L1_DoubleMu5_v1);
   t->SetBranchAddress("L1_DoubleMu5_v1_Prescl", &tHlts.L1_DoubleMu5_v1_Prescl, &tHlts.b_L1_DoubleMu5_v1_Prescl);
   t->SetBranchAddress("L1_DoubleMuOpen_BptxAND", &tHlts.L1_DoubleMuOpen_BptxAND, &tHlts.b_L1_DoubleMuOpen_BptxAND);
   t->SetBranchAddress("L1_DoubleMuOpen_BptxAND_Prescl", &tHlts.L1_DoubleMuOpen_BptxAND_Prescl, &tHlts.b_L1_DoubleMuOpen_BptxAND_Prescl);
   t->SetBranchAddress("L1_DoubleMu_10_3p5", &tHlts.L1_DoubleMu_10_3p5, &tHlts.b_L1_DoubleMu_10_3p5);
   t->SetBranchAddress("L1_DoubleMu_10_3p5_Prescl", &tHlts.L1_DoubleMu_10_3p5_Prescl, &tHlts.b_L1_DoubleMu_10_3p5_Prescl);
   t->SetBranchAddress("L1_DoubleMu_10_Open", &tHlts.L1_DoubleMu_10_Open, &tHlts.b_L1_DoubleMu_10_Open);
   t->SetBranchAddress("L1_DoubleMu_10_Open_Prescl", &tHlts.L1_DoubleMu_10_Open_Prescl, &tHlts.b_L1_DoubleMu_10_Open_Prescl);
   t->SetBranchAddress("L1_DoubleMu_12_5", &tHlts.L1_DoubleMu_12_5, &tHlts.b_L1_DoubleMu_12_5);
   t->SetBranchAddress("L1_DoubleMu_12_5_Prescl", &tHlts.L1_DoubleMu_12_5_Prescl, &tHlts.b_L1_DoubleMu_12_5_Prescl);
   t->SetBranchAddress("L1_DoubleMu_3er_0er_HighQ_WdEta22", &tHlts.L1_DoubleMu_3er_0er_HighQ_WdEta22, &tHlts.b_L1_DoubleMu_3er_0er_HighQ_WdEta22);
   t->SetBranchAddress("L1_DoubleMu_3er_0er_HighQ_WdEta22_Prescl", &tHlts.L1_DoubleMu_3er_0er_HighQ_WdEta22_Prescl, &tHlts.b_L1_DoubleMu_3er_0er_HighQ_WdEta22_Prescl);
   t->SetBranchAddress("L1_DoubleMu_5er_0er_HighQ_WdEta22", &tHlts.L1_DoubleMu_5er_0er_HighQ_WdEta22, &tHlts.b_L1_DoubleMu_5er_0er_HighQ_WdEta22);
   t->SetBranchAddress("L1_DoubleMu_5er_0er_HighQ_WdEta22_Prescl", &tHlts.L1_DoubleMu_5er_0er_HighQ_WdEta22_Prescl, &tHlts.b_L1_DoubleMu_5er_0er_HighQ_WdEta22_Prescl);
   t->SetBranchAddress("L1_EG8_DoubleJetC20", &tHlts.L1_EG8_DoubleJetC20, &tHlts.b_L1_EG8_DoubleJetC20);
   t->SetBranchAddress("L1_EG8_DoubleJetC20_Prescl", &tHlts.L1_EG8_DoubleJetC20_Prescl, &tHlts.b_L1_EG8_DoubleJetC20_Prescl);
   t->SetBranchAddress("L1_ETM100", &tHlts.L1_ETM100, &tHlts.b_L1_ETM100);
   t->SetBranchAddress("L1_ETM100_Prescl", &tHlts.L1_ETM100_Prescl, &tHlts.b_L1_ETM100_Prescl);
   t->SetBranchAddress("L1_ETM30", &tHlts.L1_ETM30, &tHlts.b_L1_ETM30);
   t->SetBranchAddress("L1_ETM30_Prescl", &tHlts.L1_ETM30_Prescl, &tHlts.b_L1_ETM30_Prescl);
   t->SetBranchAddress("L1_ETM36", &tHlts.L1_ETM36, &tHlts.b_L1_ETM36);
   t->SetBranchAddress("L1_ETM36_Prescl", &tHlts.L1_ETM36_Prescl, &tHlts.b_L1_ETM36_Prescl);
   t->SetBranchAddress("L1_ETM40", &tHlts.L1_ETM40, &tHlts.b_L1_ETM40);
   t->SetBranchAddress("L1_ETM40_Prescl", &tHlts.L1_ETM40_Prescl, &tHlts.b_L1_ETM40_Prescl);
   t->SetBranchAddress("L1_ETM50", &tHlts.L1_ETM50, &tHlts.b_L1_ETM50);
   t->SetBranchAddress("L1_ETM50_Prescl", &tHlts.L1_ETM50_Prescl, &tHlts.b_L1_ETM50_Prescl);
   t->SetBranchAddress("L1_ETM70", &tHlts.L1_ETM70, &tHlts.b_L1_ETM70);
   t->SetBranchAddress("L1_ETM70_Prescl", &tHlts.L1_ETM70_Prescl, &tHlts.b_L1_ETM70_Prescl);
   t->SetBranchAddress("L1_ETT140", &tHlts.L1_ETT140, &tHlts.b_L1_ETT140);
   t->SetBranchAddress("L1_ETT140_Prescl", &tHlts.L1_ETT140_Prescl, &tHlts.b_L1_ETT140_Prescl);
   t->SetBranchAddress("L1_ETT20_BptxAND", &tHlts.L1_ETT20_BptxAND, &tHlts.b_L1_ETT20_BptxAND);
   t->SetBranchAddress("L1_ETT20_BptxAND_Prescl", &tHlts.L1_ETT20_BptxAND_Prescl, &tHlts.b_L1_ETT20_BptxAND_Prescl);
   t->SetBranchAddress("L1_ETT300", &tHlts.L1_ETT300, &tHlts.b_L1_ETT300);
   t->SetBranchAddress("L1_ETT300_Prescl", &tHlts.L1_ETT300_Prescl, &tHlts.b_L1_ETT300_Prescl);
   t->SetBranchAddress("L1_ETT40", &tHlts.L1_ETT40, &tHlts.b_L1_ETT40);
   t->SetBranchAddress("L1_ETT40_Prescl", &tHlts.L1_ETT40_Prescl, &tHlts.b_L1_ETT40_Prescl);
   t->SetBranchAddress("L1_ETT60", &tHlts.L1_ETT60, &tHlts.b_L1_ETT60);
   t->SetBranchAddress("L1_ETT60_Prescl", &tHlts.L1_ETT60_Prescl, &tHlts.b_L1_ETT60_Prescl);
   t->SetBranchAddress("L1_ETT80", &tHlts.L1_ETT80, &tHlts.b_L1_ETT80);
   t->SetBranchAddress("L1_ETT80_Prescl", &tHlts.L1_ETT80_Prescl, &tHlts.b_L1_ETT80_Prescl);
   t->SetBranchAddress("L1_HTT100", &tHlts.L1_HTT100, &tHlts.b_L1_HTT100);
   t->SetBranchAddress("L1_HTT100_Prescl", &tHlts.L1_HTT100_Prescl, &tHlts.b_L1_HTT100_Prescl);
   t->SetBranchAddress("L1_HTT125", &tHlts.L1_HTT125, &tHlts.b_L1_HTT125);
   t->SetBranchAddress("L1_HTT125_Prescl", &tHlts.L1_HTT125_Prescl, &tHlts.b_L1_HTT125_Prescl);
   t->SetBranchAddress("L1_HTT150", &tHlts.L1_HTT150, &tHlts.b_L1_HTT150);
   t->SetBranchAddress("L1_HTT150_Prescl", &tHlts.L1_HTT150_Prescl, &tHlts.b_L1_HTT150_Prescl);
   t->SetBranchAddress("L1_HTT175", &tHlts.L1_HTT175, &tHlts.b_L1_HTT175);
   t->SetBranchAddress("L1_HTT175_Prescl", &tHlts.L1_HTT175_Prescl, &tHlts.b_L1_HTT175_Prescl);
   t->SetBranchAddress("L1_HTT200", &tHlts.L1_HTT200, &tHlts.b_L1_HTT200);
   t->SetBranchAddress("L1_HTT200_Prescl", &tHlts.L1_HTT200_Prescl, &tHlts.b_L1_HTT200_Prescl);
   t->SetBranchAddress("L1_HTT50", &tHlts.L1_HTT50, &tHlts.b_L1_HTT50);
   t->SetBranchAddress("L1_HTT50_Prescl", &tHlts.L1_HTT50_Prescl, &tHlts.b_L1_HTT50_Prescl);
   t->SetBranchAddress("L1_HTT75", &tHlts.L1_HTT75, &tHlts.b_L1_HTT75);
   t->SetBranchAddress("L1_HTT75_Prescl", &tHlts.L1_HTT75_Prescl, &tHlts.b_L1_HTT75_Prescl);
   t->SetBranchAddress("L1_HcalHfCoincidencePm_BptxAND_v1", &tHlts.L1_HcalHfCoincidencePm_BptxAND_v1, &tHlts.b_L1_HcalHfCoincidencePm_BptxAND_v1);
   t->SetBranchAddress("L1_HcalHfCoincidencePm_BptxAND_v1_Prescl", &tHlts.L1_HcalHfCoincidencePm_BptxAND_v1_Prescl, &tHlts.b_L1_HcalHfCoincidencePm_BptxAND_v1_Prescl);
   t->SetBranchAddress("L1_HcalHfSingleChannel_BptxAND", &tHlts.L1_HcalHfSingleChannel_BptxAND, &tHlts.b_L1_HcalHfSingleChannel_BptxAND);
   t->SetBranchAddress("L1_HcalHfSingleChannel_BptxAND_Prescl", &tHlts.L1_HcalHfSingleChannel_BptxAND_Prescl, &tHlts.b_L1_HcalHfSingleChannel_BptxAND_Prescl);
   t->SetBranchAddress("L1_Mu10er_JetC32", &tHlts.L1_Mu10er_JetC32, &tHlts.b_L1_Mu10er_JetC32);
   t->SetBranchAddress("L1_Mu10er_JetC32_Prescl", &tHlts.L1_Mu10er_JetC32_Prescl, &tHlts.b_L1_Mu10er_JetC32_Prescl);
   t->SetBranchAddress("L1_Mu12_EG7", &tHlts.L1_Mu12_EG7, &tHlts.b_L1_Mu12_EG7);
   t->SetBranchAddress("L1_Mu12_EG7_Prescl", &tHlts.L1_Mu12_EG7_Prescl, &tHlts.b_L1_Mu12_EG7_Prescl);
   t->SetBranchAddress("L1_Mu3_Jet16", &tHlts.L1_Mu3_Jet16, &tHlts.b_L1_Mu3_Jet16);
   t->SetBranchAddress("L1_Mu3_Jet16_Prescl", &tHlts.L1_Mu3_Jet16_Prescl, &tHlts.b_L1_Mu3_Jet16_Prescl);
   t->SetBranchAddress("L1_Mu3_Jet36", &tHlts.L1_Mu3_Jet36, &tHlts.b_L1_Mu3_Jet36);
   t->SetBranchAddress("L1_Mu3_Jet36_Prescl", &tHlts.L1_Mu3_Jet36_Prescl, &tHlts.b_L1_Mu3_Jet36_Prescl);
   t->SetBranchAddress("L1_Mu3_JetC16_WdEtaPhi2", &tHlts.L1_Mu3_JetC16_WdEtaPhi2, &tHlts.b_L1_Mu3_JetC16_WdEtaPhi2);
   t->SetBranchAddress("L1_Mu3_JetC16_WdEtaPhi2_Prescl", &tHlts.L1_Mu3_JetC16_WdEtaPhi2_Prescl, &tHlts.b_L1_Mu3_JetC16_WdEtaPhi2_Prescl);
   t->SetBranchAddress("L1_Mu3_JetC52_WdEtaPhi2", &tHlts.L1_Mu3_JetC52_WdEtaPhi2, &tHlts.b_L1_Mu3_JetC52_WdEtaPhi2);
   t->SetBranchAddress("L1_Mu3_JetC52_WdEtaPhi2_Prescl", &tHlts.L1_Mu3_JetC52_WdEtaPhi2_Prescl, &tHlts.b_L1_Mu3_JetC52_WdEtaPhi2_Prescl);
   t->SetBranchAddress("L1_Mu5_DoubleEG5", &tHlts.L1_Mu5_DoubleEG5, &tHlts.b_L1_Mu5_DoubleEG5);
   t->SetBranchAddress("L1_Mu5_DoubleEG5_Prescl", &tHlts.L1_Mu5_DoubleEG5_Prescl, &tHlts.b_L1_Mu5_DoubleEG5_Prescl);
   t->SetBranchAddress("L1_Mu5_DoubleEG6", &tHlts.L1_Mu5_DoubleEG6, &tHlts.b_L1_Mu5_DoubleEG6);
   t->SetBranchAddress("L1_Mu5_DoubleEG6_Prescl", &tHlts.L1_Mu5_DoubleEG6_Prescl, &tHlts.b_L1_Mu5_DoubleEG6_Prescl);
   t->SetBranchAddress("L1_Mu7_Jet16", &tHlts.L1_Mu7_Jet16, &tHlts.b_L1_Mu7_Jet16);
   t->SetBranchAddress("L1_Mu7_Jet16_Prescl", &tHlts.L1_Mu7_Jet16_Prescl, &tHlts.b_L1_Mu7_Jet16_Prescl);
   t->SetBranchAddress("L1_Mu8_DoubleJetC20", &tHlts.L1_Mu8_DoubleJetC20, &tHlts.b_L1_Mu8_DoubleJetC20);
   t->SetBranchAddress("L1_Mu8_DoubleJetC20_Prescl", &tHlts.L1_Mu8_DoubleJetC20_Prescl, &tHlts.b_L1_Mu8_DoubleJetC20_Prescl);
   t->SetBranchAddress("L1_MuOpen_EG12", &tHlts.L1_MuOpen_EG12, &tHlts.b_L1_MuOpen_EG12);
   t->SetBranchAddress("L1_MuOpen_EG12_Prescl", &tHlts.L1_MuOpen_EG12_Prescl, &tHlts.b_L1_MuOpen_EG12_Prescl);
   t->SetBranchAddress("L1_MuOpen_EG5", &tHlts.L1_MuOpen_EG5, &tHlts.b_L1_MuOpen_EG5);
   t->SetBranchAddress("L1_MuOpen_EG5_Prescl", &tHlts.L1_MuOpen_EG5_Prescl, &tHlts.b_L1_MuOpen_EG5_Prescl);
   t->SetBranchAddress("L1_QuadJetC32", &tHlts.L1_QuadJetC32, &tHlts.b_L1_QuadJetC32);
   t->SetBranchAddress("L1_QuadJetC32_Prescl", &tHlts.L1_QuadJetC32_Prescl, &tHlts.b_L1_QuadJetC32_Prescl);
   t->SetBranchAddress("L1_QuadJetC36", &tHlts.L1_QuadJetC36, &tHlts.b_L1_QuadJetC36);
   t->SetBranchAddress("L1_QuadJetC36_Prescl", &tHlts.L1_QuadJetC36_Prescl, &tHlts.b_L1_QuadJetC36_Prescl);
   t->SetBranchAddress("L1_QuadJetC40", &tHlts.L1_QuadJetC40, &tHlts.b_L1_QuadJetC40);
   t->SetBranchAddress("L1_QuadJetC40_Prescl", &tHlts.L1_QuadJetC40_Prescl, &tHlts.b_L1_QuadJetC40_Prescl);
   t->SetBranchAddress("L1_SingleEG12", &tHlts.L1_SingleEG12, &tHlts.b_L1_SingleEG12);
   t->SetBranchAddress("L1_SingleEG12_Prescl", &tHlts.L1_SingleEG12_Prescl, &tHlts.b_L1_SingleEG12_Prescl);
   t->SetBranchAddress("L1_SingleEG18er", &tHlts.L1_SingleEG18er, &tHlts.b_L1_SingleEG18er);
   t->SetBranchAddress("L1_SingleEG18er_Prescl", &tHlts.L1_SingleEG18er_Prescl, &tHlts.b_L1_SingleEG18er_Prescl);
   t->SetBranchAddress("L1_SingleEG20", &tHlts.L1_SingleEG20, &tHlts.b_L1_SingleEG20);
   t->SetBranchAddress("L1_SingleEG20_Prescl", &tHlts.L1_SingleEG20_Prescl, &tHlts.b_L1_SingleEG20_Prescl);
   t->SetBranchAddress("L1_SingleEG20_TotemDiffractive", &tHlts.L1_SingleEG20_TotemDiffractive, &tHlts.b_L1_SingleEG20_TotemDiffractive);
   t->SetBranchAddress("L1_SingleEG20_TotemDiffractive_Prescl", &tHlts.L1_SingleEG20_TotemDiffractive_Prescl, &tHlts.b_L1_SingleEG20_TotemDiffractive_Prescl);
   t->SetBranchAddress("L1_SingleEG22", &tHlts.L1_SingleEG22, &tHlts.b_L1_SingleEG22);
   t->SetBranchAddress("L1_SingleEG22_Prescl", &tHlts.L1_SingleEG22_Prescl, &tHlts.b_L1_SingleEG22_Prescl);
   t->SetBranchAddress("L1_SingleEG24", &tHlts.L1_SingleEG24, &tHlts.b_L1_SingleEG24);
   t->SetBranchAddress("L1_SingleEG24_Prescl", &tHlts.L1_SingleEG24_Prescl, &tHlts.b_L1_SingleEG24_Prescl);
   t->SetBranchAddress("L1_SingleEG30", &tHlts.L1_SingleEG30, &tHlts.b_L1_SingleEG30);
   t->SetBranchAddress("L1_SingleEG30_Prescl", &tHlts.L1_SingleEG30_Prescl, &tHlts.b_L1_SingleEG30_Prescl);
   t->SetBranchAddress("L1_SingleEG5_BptxAND", &tHlts.L1_SingleEG5_BptxAND, &tHlts.b_L1_SingleEG5_BptxAND);
   t->SetBranchAddress("L1_SingleEG5_BptxAND_Prescl", &tHlts.L1_SingleEG5_BptxAND_Prescl, &tHlts.b_L1_SingleEG5_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleEG7", &tHlts.L1_SingleEG7, &tHlts.b_L1_SingleEG7);
   t->SetBranchAddress("L1_SingleEG7_Prescl", &tHlts.L1_SingleEG7_Prescl, &tHlts.b_L1_SingleEG7_Prescl);
   t->SetBranchAddress("L1_SingleForJet16", &tHlts.L1_SingleForJet16, &tHlts.b_L1_SingleForJet16);
   t->SetBranchAddress("L1_SingleForJet16_Prescl", &tHlts.L1_SingleForJet16_Prescl, &tHlts.b_L1_SingleForJet16_Prescl);
   t->SetBranchAddress("L1_SingleIsoEG18er", &tHlts.L1_SingleIsoEG18er, &tHlts.b_L1_SingleIsoEG18er);
   t->SetBranchAddress("L1_SingleIsoEG18er_Prescl", &tHlts.L1_SingleIsoEG18er_Prescl, &tHlts.b_L1_SingleIsoEG18er_Prescl);
   t->SetBranchAddress("L1_SingleIsoEG20er", &tHlts.L1_SingleIsoEG20er, &tHlts.b_L1_SingleIsoEG20er);
   t->SetBranchAddress("L1_SingleIsoEG20er_Prescl", &tHlts.L1_SingleIsoEG20er_Prescl, &tHlts.b_L1_SingleIsoEG20er_Prescl);
   t->SetBranchAddress("L1_SingleJet128", &tHlts.L1_SingleJet128, &tHlts.b_L1_SingleJet128);
   t->SetBranchAddress("L1_SingleJet128_Prescl", &tHlts.L1_SingleJet128_Prescl, &tHlts.b_L1_SingleJet128_Prescl);
   t->SetBranchAddress("L1_SingleJet12_BptxAND", &tHlts.L1_SingleJet12_BptxAND, &tHlts.b_L1_SingleJet12_BptxAND);
   t->SetBranchAddress("L1_SingleJet12_BptxAND_Prescl", &tHlts.L1_SingleJet12_BptxAND_Prescl, &tHlts.b_L1_SingleJet12_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleJet16_BptxAND", &tHlts.L1_SingleJet16_BptxAND, &tHlts.b_L1_SingleJet16_BptxAND);
   t->SetBranchAddress("L1_SingleJet16_BptxAND_Prescl", &tHlts.L1_SingleJet16_BptxAND_Prescl, &tHlts.b_L1_SingleJet16_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleJet16_FwdVeto5", &tHlts.L1_SingleJet16_FwdVeto5, &tHlts.b_L1_SingleJet16_FwdVeto5);
   t->SetBranchAddress("L1_SingleJet16_FwdVeto5_Prescl", &tHlts.L1_SingleJet16_FwdVeto5_Prescl, &tHlts.b_L1_SingleJet16_FwdVeto5_Prescl);
   t->SetBranchAddress("L1_SingleJet20_Central_NotBptxOR", &tHlts.L1_SingleJet20_Central_NotBptxOR, &tHlts.b_L1_SingleJet20_Central_NotBptxOR);
   t->SetBranchAddress("L1_SingleJet20_Central_NotBptxOR_Prescl", &tHlts.L1_SingleJet20_Central_NotBptxOR_Prescl, &tHlts.b_L1_SingleJet20_Central_NotBptxOR_Prescl);
   t->SetBranchAddress("L1_SingleJet36", &tHlts.L1_SingleJet36, &tHlts.b_L1_SingleJet36);
   t->SetBranchAddress("L1_SingleJet36_Prescl", &tHlts.L1_SingleJet36_Prescl, &tHlts.b_L1_SingleJet36_Prescl);
   t->SetBranchAddress("L1_SingleJet36_FwdVeto5", &tHlts.L1_SingleJet36_FwdVeto5, &tHlts.b_L1_SingleJet36_FwdVeto5);
   t->SetBranchAddress("L1_SingleJet36_FwdVeto5_Prescl", &tHlts.L1_SingleJet36_FwdVeto5_Prescl, &tHlts.b_L1_SingleJet36_FwdVeto5_Prescl);
   t->SetBranchAddress("L1_SingleJet52", &tHlts.L1_SingleJet52, &tHlts.b_L1_SingleJet52);
   t->SetBranchAddress("L1_SingleJet52_Prescl", &tHlts.L1_SingleJet52_Prescl, &tHlts.b_L1_SingleJet52_Prescl);
   t->SetBranchAddress("L1_SingleJet52_TotemDiffractive", &tHlts.L1_SingleJet52_TotemDiffractive, &tHlts.b_L1_SingleJet52_TotemDiffractive);
   t->SetBranchAddress("L1_SingleJet52_TotemDiffractive_Prescl", &tHlts.L1_SingleJet52_TotemDiffractive_Prescl, &tHlts.b_L1_SingleJet52_TotemDiffractive_Prescl);
   t->SetBranchAddress("L1_SingleJet68", &tHlts.L1_SingleJet68, &tHlts.b_L1_SingleJet68);
   t->SetBranchAddress("L1_SingleJet68_Prescl", &tHlts.L1_SingleJet68_Prescl, &tHlts.b_L1_SingleJet68_Prescl);
   t->SetBranchAddress("L1_SingleJet92", &tHlts.L1_SingleJet92, &tHlts.b_L1_SingleJet92);
   t->SetBranchAddress("L1_SingleJet92_Prescl", &tHlts.L1_SingleJet92_Prescl, &tHlts.b_L1_SingleJet92_Prescl);
   t->SetBranchAddress("L1_SingleJetC32_NotBptxOR", &tHlts.L1_SingleJetC32_NotBptxOR, &tHlts.b_L1_SingleJetC32_NotBptxOR);
   t->SetBranchAddress("L1_SingleJetC32_NotBptxOR_Prescl", &tHlts.L1_SingleJetC32_NotBptxOR_Prescl, &tHlts.b_L1_SingleJetC32_NotBptxOR_Prescl);
   t->SetBranchAddress("L1_SingleMu12", &tHlts.L1_SingleMu12, &tHlts.b_L1_SingleMu12);
   t->SetBranchAddress("L1_SingleMu12_Prescl", &tHlts.L1_SingleMu12_Prescl, &tHlts.b_L1_SingleMu12_Prescl);
   t->SetBranchAddress("L1_SingleMu12er", &tHlts.L1_SingleMu12er, &tHlts.b_L1_SingleMu12er);
   t->SetBranchAddress("L1_SingleMu12er_Prescl", &tHlts.L1_SingleMu12er_Prescl, &tHlts.b_L1_SingleMu12er_Prescl);
   t->SetBranchAddress("L1_SingleMu14_Eta2p1", &tHlts.L1_SingleMu14_Eta2p1, &tHlts.b_L1_SingleMu14_Eta2p1);
   t->SetBranchAddress("L1_SingleMu14_Eta2p1_Prescl", &tHlts.L1_SingleMu14_Eta2p1_Prescl, &tHlts.b_L1_SingleMu14_Eta2p1_Prescl);
   t->SetBranchAddress("L1_SingleMu16", &tHlts.L1_SingleMu16, &tHlts.b_L1_SingleMu16);
   t->SetBranchAddress("L1_SingleMu16_Prescl", &tHlts.L1_SingleMu16_Prescl, &tHlts.b_L1_SingleMu16_Prescl);
   t->SetBranchAddress("L1_SingleMu16_Eta2p1", &tHlts.L1_SingleMu16_Eta2p1, &tHlts.b_L1_SingleMu16_Eta2p1);
   t->SetBranchAddress("L1_SingleMu16_Eta2p1_Prescl", &tHlts.L1_SingleMu16_Eta2p1_Prescl, &tHlts.b_L1_SingleMu16_Eta2p1_Prescl);
   t->SetBranchAddress("L1_SingleMu18er", &tHlts.L1_SingleMu18er, &tHlts.b_L1_SingleMu18er);
   t->SetBranchAddress("L1_SingleMu18er_Prescl", &tHlts.L1_SingleMu18er_Prescl, &tHlts.b_L1_SingleMu18er_Prescl);
   t->SetBranchAddress("L1_SingleMu20", &tHlts.L1_SingleMu20, &tHlts.b_L1_SingleMu20);
   t->SetBranchAddress("L1_SingleMu20_Prescl", &tHlts.L1_SingleMu20_Prescl, &tHlts.b_L1_SingleMu20_Prescl);
   t->SetBranchAddress("L1_SingleMu20_TotemDiffractive", &tHlts.L1_SingleMu20_TotemDiffractive, &tHlts.b_L1_SingleMu20_TotemDiffractive);
   t->SetBranchAddress("L1_SingleMu20_TotemDiffractive_Prescl", &tHlts.L1_SingleMu20_TotemDiffractive_Prescl, &tHlts.b_L1_SingleMu20_TotemDiffractive_Prescl);
   t->SetBranchAddress("L1_SingleMu20er", &tHlts.L1_SingleMu20er, &tHlts.b_L1_SingleMu20er);
   t->SetBranchAddress("L1_SingleMu20er_Prescl", &tHlts.L1_SingleMu20er_Prescl, &tHlts.b_L1_SingleMu20er_Prescl);
   t->SetBranchAddress("L1_SingleMu25er", &tHlts.L1_SingleMu25er, &tHlts.b_L1_SingleMu25er);
   t->SetBranchAddress("L1_SingleMu25er_Prescl", &tHlts.L1_SingleMu25er_Prescl, &tHlts.b_L1_SingleMu25er_Prescl);
   t->SetBranchAddress("L1_SingleMu3", &tHlts.L1_SingleMu3, &tHlts.b_L1_SingleMu3);
   t->SetBranchAddress("L1_SingleMu3_Prescl", &tHlts.L1_SingleMu3_Prescl, &tHlts.b_L1_SingleMu3_Prescl);
   t->SetBranchAddress("L1_SingleMu6_NotBptxOR", &tHlts.L1_SingleMu6_NotBptxOR, &tHlts.b_L1_SingleMu6_NotBptxOR);
   t->SetBranchAddress("L1_SingleMu6_NotBptxOR_Prescl", &tHlts.L1_SingleMu6_NotBptxOR_Prescl, &tHlts.b_L1_SingleMu6_NotBptxOR_Prescl);
   t->SetBranchAddress("L1_SingleMu7", &tHlts.L1_SingleMu7, &tHlts.b_L1_SingleMu7);
   t->SetBranchAddress("L1_SingleMu7_Prescl", &tHlts.L1_SingleMu7_Prescl, &tHlts.b_L1_SingleMu7_Prescl);
   t->SetBranchAddress("L1_SingleMuBeamHalo", &tHlts.L1_SingleMuBeamHalo, &tHlts.b_L1_SingleMuBeamHalo);
   t->SetBranchAddress("L1_SingleMuBeamHalo_Prescl", &tHlts.L1_SingleMuBeamHalo_Prescl, &tHlts.b_L1_SingleMuBeamHalo_Prescl);
   t->SetBranchAddress("L1_SingleMuOpen", &tHlts.L1_SingleMuOpen, &tHlts.b_L1_SingleMuOpen);
   t->SetBranchAddress("L1_SingleMuOpen_Prescl", &tHlts.L1_SingleMuOpen_Prescl, &tHlts.b_L1_SingleMuOpen_Prescl);
   t->SetBranchAddress("L1_TripleEG7", &tHlts.L1_TripleEG7, &tHlts.b_L1_TripleEG7);
   t->SetBranchAddress("L1_TripleEG7_Prescl", &tHlts.L1_TripleEG7_Prescl, &tHlts.b_L1_TripleEG7_Prescl);
   t->SetBranchAddress("L1_TripleEG_12_7_5", &tHlts.L1_TripleEG_12_7_5, &tHlts.b_L1_TripleEG_12_7_5);
   t->SetBranchAddress("L1_TripleEG_12_7_5_Prescl", &tHlts.L1_TripleEG_12_7_5_Prescl, &tHlts.b_L1_TripleEG_12_7_5_Prescl);
   t->SetBranchAddress("L1_TripleJetC_52_28_28", &tHlts.L1_TripleJetC_52_28_28, &tHlts.b_L1_TripleJetC_52_28_28);
   t->SetBranchAddress("L1_TripleJetC_52_28_28_Prescl", &tHlts.L1_TripleJetC_52_28_28_Prescl, &tHlts.b_L1_TripleJetC_52_28_28_Prescl);
   t->SetBranchAddress("L1_TripleJet_64_44_24_VBF", &tHlts.L1_TripleJet_64_44_24_VBF, &tHlts.b_L1_TripleJet_64_44_24_VBF);
   t->SetBranchAddress("L1_TripleJet_64_44_24_VBF_Prescl", &tHlts.L1_TripleJet_64_44_24_VBF_Prescl, &tHlts.b_L1_TripleJet_64_44_24_VBF_Prescl);
   t->SetBranchAddress("L1_TripleJet_64_48_28_VBF", &tHlts.L1_TripleJet_64_48_28_VBF, &tHlts.b_L1_TripleJet_64_48_28_VBF);
   t->SetBranchAddress("L1_TripleJet_64_48_28_VBF_Prescl", &tHlts.L1_TripleJet_64_48_28_VBF_Prescl, &tHlts.b_L1_TripleJet_64_48_28_VBF_Prescl);
   t->SetBranchAddress("L1_ZdcCaloPlus_TotemDiffractive_QElastic", &tHlts.L1_ZdcCaloPlus_TotemDiffractive_QElastic, &tHlts.b_L1_ZdcCaloPlus_TotemDiffractive_QElastic);
   t->SetBranchAddress("L1_ZdcCaloPlus_TotemDiffractive_QElastic_Prescl", &tHlts.L1_ZdcCaloPlus_TotemDiffractive_QElastic_Prescl, &tHlts.b_L1_ZdcCaloPlus_TotemDiffractive_QElastic_Prescl);
   t->SetBranchAddress("L1_ZeroBias", &tHlts.L1_ZeroBias, &tHlts.b_L1_ZeroBias);
   t->SetBranchAddress("L1_ZeroBias_Prescl", &tHlts.L1_ZeroBias_Prescl, &tHlts.b_L1_ZeroBias_Prescl);
   t->SetBranchAddress("L1Tech_BPTX_PreBPTX.v0", &tHlts.L1Tech_BPTX_PreBPTX_v0, &tHlts.b_L1Tech_BPTX_PreBPTX_v0);
   t->SetBranchAddress("L1Tech_BPTX_PreBPTX.v0_Prescl", &tHlts.L1Tech_BPTX_PreBPTX_v0_Prescl, &tHlts.b_L1Tech_BPTX_PreBPTX_v0_Prescl);
   t->SetBranchAddress("L1Tech_BPTX_minus.v0", &tHlts.L1Tech_BPTX_minus_v0, &tHlts.b_L1Tech_BPTX_minus_v0);
   t->SetBranchAddress("L1Tech_BPTX_minus.v0_Prescl", &tHlts.L1Tech_BPTX_minus_v0_Prescl, &tHlts.b_L1Tech_BPTX_minus_v0_Prescl);
   t->SetBranchAddress("L1Tech_BPTX_minus_AND_not_plus.v0", &tHlts.L1Tech_BPTX_minus_AND_not_plus_v0, &tHlts.b_L1Tech_BPTX_minus_AND_not_plus_v0);
   t->SetBranchAddress("L1Tech_BPTX_minus_AND_not_plus.v0_Prescl", &tHlts.L1Tech_BPTX_minus_AND_not_plus_v0_Prescl, &tHlts.b_L1Tech_BPTX_minus_AND_not_plus_v0_Prescl);
   t->SetBranchAddress("L1Tech_BPTX_plus.v0", &tHlts.L1Tech_BPTX_plus_v0, &tHlts.b_L1Tech_BPTX_plus_v0);
   t->SetBranchAddress("L1Tech_BPTX_plus.v0_Prescl", &tHlts.L1Tech_BPTX_plus_v0_Prescl, &tHlts.b_L1Tech_BPTX_plus_v0_Prescl);
   t->SetBranchAddress("L1Tech_BPTX_plus_AND_NOT_minus.v0", &tHlts.L1Tech_BPTX_plus_AND_NOT_minus_v0, &tHlts.b_L1Tech_BPTX_plus_AND_NOT_minus_v0);
   t->SetBranchAddress("L1Tech_BPTX_plus_AND_NOT_minus.v0_Prescl", &tHlts.L1Tech_BPTX_plus_AND_NOT_minus_v0_Prescl, &tHlts.b_L1Tech_BPTX_plus_AND_NOT_minus_v0_Prescl);
   t->SetBranchAddress("L1Tech_BPTX_plus_AND_minus.v0", &tHlts.L1Tech_BPTX_plus_AND_minus_v0, &tHlts.b_L1Tech_BPTX_plus_AND_minus_v0);
   t->SetBranchAddress("L1Tech_BPTX_plus_AND_minus.v0_Prescl", &tHlts.L1Tech_BPTX_plus_AND_minus_v0_Prescl, &tHlts.b_L1Tech_BPTX_plus_AND_minus_v0_Prescl);
   t->SetBranchAddress("L1Tech_BPTX_plus_AND_minus_instance1.v0", &tHlts.L1Tech_BPTX_plus_AND_minus_instance1_v0, &tHlts.b_L1Tech_BPTX_plus_AND_minus_instance1_v0);
   t->SetBranchAddress("L1Tech_BPTX_plus_AND_minus_instance1.v0_Prescl", &tHlts.L1Tech_BPTX_plus_AND_minus_instance1_v0_Prescl, &tHlts.b_L1Tech_BPTX_plus_AND_minus_instance1_v0_Prescl);
   t->SetBranchAddress("L1Tech_BPTX_plus_OR_minus.v0", &tHlts.L1Tech_BPTX_plus_OR_minus_v0, &tHlts.b_L1Tech_BPTX_plus_OR_minus_v0);
   t->SetBranchAddress("L1Tech_BPTX_plus_OR_minus.v0_Prescl", &tHlts.L1Tech_BPTX_plus_OR_minus_v0_Prescl, &tHlts.b_L1Tech_BPTX_plus_OR_minus_v0_Prescl);
   t->SetBranchAddress("L1Tech_BPTX_quiet.v0", &tHlts.L1Tech_BPTX_quiet_v0, &tHlts.b_L1Tech_BPTX_quiet_v0);
   t->SetBranchAddress("L1Tech_BPTX_quiet.v0_Prescl", &tHlts.L1Tech_BPTX_quiet_v0_Prescl, &tHlts.b_L1Tech_BPTX_quiet_v0_Prescl);
   t->SetBranchAddress("L1Tech_BSC_HighMultiplicity.v0", &tHlts.L1Tech_BSC_HighMultiplicity_v0, &tHlts.b_L1Tech_BSC_HighMultiplicity_v0);
   t->SetBranchAddress("L1Tech_BSC_HighMultiplicity.v0_Prescl", &tHlts.L1Tech_BSC_HighMultiplicity_v0_Prescl, &tHlts.b_L1Tech_BSC_HighMultiplicity_v0_Prescl);
   t->SetBranchAddress("L1Tech_BSC_halo_beam1_inner.v0", &tHlts.L1Tech_BSC_halo_beam1_inner_v0, &tHlts.b_L1Tech_BSC_halo_beam1_inner_v0);
   t->SetBranchAddress("L1Tech_BSC_halo_beam1_inner.v0_Prescl", &tHlts.L1Tech_BSC_halo_beam1_inner_v0_Prescl, &tHlts.b_L1Tech_BSC_halo_beam1_inner_v0_Prescl);
   t->SetBranchAddress("L1Tech_BSC_halo_beam1_outer.v0", &tHlts.L1Tech_BSC_halo_beam1_outer_v0, &tHlts.b_L1Tech_BSC_halo_beam1_outer_v0);
   t->SetBranchAddress("L1Tech_BSC_halo_beam1_outer.v0_Prescl", &tHlts.L1Tech_BSC_halo_beam1_outer_v0_Prescl, &tHlts.b_L1Tech_BSC_halo_beam1_outer_v0_Prescl);
   t->SetBranchAddress("L1Tech_BSC_halo_beam2_inner.v0", &tHlts.L1Tech_BSC_halo_beam2_inner_v0, &tHlts.b_L1Tech_BSC_halo_beam2_inner_v0);
   t->SetBranchAddress("L1Tech_BSC_halo_beam2_inner.v0_Prescl", &tHlts.L1Tech_BSC_halo_beam2_inner_v0_Prescl, &tHlts.b_L1Tech_BSC_halo_beam2_inner_v0_Prescl);
   t->SetBranchAddress("L1Tech_BSC_halo_beam2_outer.v0", &tHlts.L1Tech_BSC_halo_beam2_outer_v0, &tHlts.b_L1Tech_BSC_halo_beam2_outer_v0);
   t->SetBranchAddress("L1Tech_BSC_halo_beam2_outer.v0_Prescl", &tHlts.L1Tech_BSC_halo_beam2_outer_v0_Prescl, &tHlts.b_L1Tech_BSC_halo_beam2_outer_v0_Prescl);
   t->SetBranchAddress("L1Tech_BSC_minBias_OR.v0", &tHlts.L1Tech_BSC_minBias_OR_v0, &tHlts.b_L1Tech_BSC_minBias_OR_v0);
   t->SetBranchAddress("L1Tech_BSC_minBias_OR.v0_Prescl", &tHlts.L1Tech_BSC_minBias_OR_v0_Prescl, &tHlts.b_L1Tech_BSC_minBias_OR_v0_Prescl);
   t->SetBranchAddress("L1Tech_BSC_minBias_inner_threshold1.v0", &tHlts.L1Tech_BSC_minBias_inner_threshold1_v0, &tHlts.b_L1Tech_BSC_minBias_inner_threshold1_v0);
   t->SetBranchAddress("L1Tech_BSC_minBias_inner_threshold1.v0_Prescl", &tHlts.L1Tech_BSC_minBias_inner_threshold1_v0_Prescl, &tHlts.b_L1Tech_BSC_minBias_inner_threshold1_v0_Prescl);
   t->SetBranchAddress("L1Tech_BSC_minBias_inner_threshold2.v0", &tHlts.L1Tech_BSC_minBias_inner_threshold2_v0, &tHlts.b_L1Tech_BSC_minBias_inner_threshold2_v0);
   t->SetBranchAddress("L1Tech_BSC_minBias_inner_threshold2.v0_Prescl", &tHlts.L1Tech_BSC_minBias_inner_threshold2_v0_Prescl, &tHlts.b_L1Tech_BSC_minBias_inner_threshold2_v0_Prescl);
   t->SetBranchAddress("L1Tech_BSC_minBias_threshold1.v0", &tHlts.L1Tech_BSC_minBias_threshold1_v0, &tHlts.b_L1Tech_BSC_minBias_threshold1_v0);
   t->SetBranchAddress("L1Tech_BSC_minBias_threshold1.v0_Prescl", &tHlts.L1Tech_BSC_minBias_threshold1_v0_Prescl, &tHlts.b_L1Tech_BSC_minBias_threshold1_v0_Prescl);
   t->SetBranchAddress("L1Tech_BSC_minBias_threshold2.v0", &tHlts.L1Tech_BSC_minBias_threshold2_v0, &tHlts.b_L1Tech_BSC_minBias_threshold2_v0);
   t->SetBranchAddress("L1Tech_BSC_minBias_threshold2.v0_Prescl", &tHlts.L1Tech_BSC_minBias_threshold2_v0_Prescl, &tHlts.b_L1Tech_BSC_minBias_threshold2_v0_Prescl);
   t->SetBranchAddress("L1Tech_BSC_splash_beam1.v0", &tHlts.L1Tech_BSC_splash_beam1_v0, &tHlts.b_L1Tech_BSC_splash_beam1_v0);
   t->SetBranchAddress("L1Tech_BSC_splash_beam1.v0_Prescl", &tHlts.L1Tech_BSC_splash_beam1_v0_Prescl, &tHlts.b_L1Tech_BSC_splash_beam1_v0_Prescl);
   t->SetBranchAddress("L1Tech_BSC_splash_beam2.v0", &tHlts.L1Tech_BSC_splash_beam2_v0, &tHlts.b_L1Tech_BSC_splash_beam2_v0);
   t->SetBranchAddress("L1Tech_BSC_splash_beam2.v0_Prescl", &tHlts.L1Tech_BSC_splash_beam2_v0_Prescl, &tHlts.b_L1Tech_BSC_splash_beam2_v0_Prescl);
   t->SetBranchAddress("L1Tech_CASTOR_0.v0", &tHlts.L1Tech_CASTOR_0_v0, &tHlts.b_L1Tech_CASTOR_0_v0);
   t->SetBranchAddress("L1Tech_CASTOR_0.v0_Prescl", &tHlts.L1Tech_CASTOR_0_v0_Prescl, &tHlts.b_L1Tech_CASTOR_0_v0_Prescl);
   t->SetBranchAddress("L1Tech_CASTOR_EM.v0", &tHlts.L1Tech_CASTOR_EM_v0, &tHlts.b_L1Tech_CASTOR_EM_v0);
   t->SetBranchAddress("L1Tech_CASTOR_EM.v0_Prescl", &tHlts.L1Tech_CASTOR_EM_v0_Prescl, &tHlts.b_L1Tech_CASTOR_EM_v0_Prescl);
   t->SetBranchAddress("L1Tech_CASTOR_HaloMuon.v0", &tHlts.L1Tech_CASTOR_HaloMuon_v0, &tHlts.b_L1Tech_CASTOR_HaloMuon_v0);
   t->SetBranchAddress("L1Tech_CASTOR_HaloMuon.v0_Prescl", &tHlts.L1Tech_CASTOR_HaloMuon_v0_Prescl, &tHlts.b_L1Tech_CASTOR_HaloMuon_v0_Prescl);
   t->SetBranchAddress("L1Tech_CASTOR_TotalEnergy.v0", &tHlts.L1Tech_CASTOR_TotalEnergy_v0, &tHlts.b_L1Tech_CASTOR_TotalEnergy_v0);
   t->SetBranchAddress("L1Tech_CASTOR_TotalEnergy.v0_Prescl", &tHlts.L1Tech_CASTOR_TotalEnergy_v0_Prescl, &tHlts.b_L1Tech_CASTOR_TotalEnergy_v0_Prescl);
   t->SetBranchAddress("L1Tech_DT_GlobalOR.v0", &tHlts.L1Tech_DT_GlobalOR_v0, &tHlts.b_L1Tech_DT_GlobalOR_v0);
   t->SetBranchAddress("L1Tech_DT_GlobalOR.v0_Prescl", &tHlts.L1Tech_DT_GlobalOR_v0_Prescl, &tHlts.b_L1Tech_DT_GlobalOR_v0_Prescl);
   t->SetBranchAddress("L1Tech_FSC_St3Sect45_downLeft.v0", &tHlts.L1Tech_FSC_St3Sect45_downLeft_v0, &tHlts.b_L1Tech_FSC_St3Sect45_downLeft_v0);
   t->SetBranchAddress("L1Tech_FSC_St3Sect45_downLeft.v0_Prescl", &tHlts.L1Tech_FSC_St3Sect45_downLeft_v0_Prescl, &tHlts.b_L1Tech_FSC_St3Sect45_downLeft_v0_Prescl);
   t->SetBranchAddress("L1Tech_FSC_St3Sect45_downRight.v0", &tHlts.L1Tech_FSC_St3Sect45_downRight_v0, &tHlts.b_L1Tech_FSC_St3Sect45_downRight_v0);
   t->SetBranchAddress("L1Tech_FSC_St3Sect45_downRight.v0_Prescl", &tHlts.L1Tech_FSC_St3Sect45_downRight_v0_Prescl, &tHlts.b_L1Tech_FSC_St3Sect45_downRight_v0_Prescl);
   t->SetBranchAddress("L1Tech_FSC_St3Sect45_uppLeft.v0", &tHlts.L1Tech_FSC_St3Sect45_uppLeft_v0, &tHlts.b_L1Tech_FSC_St3Sect45_uppLeft_v0);
   t->SetBranchAddress("L1Tech_FSC_St3Sect45_uppLeft.v0_Prescl", &tHlts.L1Tech_FSC_St3Sect45_uppLeft_v0_Prescl, &tHlts.b_L1Tech_FSC_St3Sect45_uppLeft_v0_Prescl);
   t->SetBranchAddress("L1Tech_FSC_St3Sect45_uppRight.v0", &tHlts.L1Tech_FSC_St3Sect45_uppRight_v0, &tHlts.b_L1Tech_FSC_St3Sect45_uppRight_v0);
   t->SetBranchAddress("L1Tech_FSC_St3Sect45_uppRight.v0_Prescl", &tHlts.L1Tech_FSC_St3Sect45_uppRight_v0_Prescl, &tHlts.b_L1Tech_FSC_St3Sect45_uppRight_v0_Prescl);
   t->SetBranchAddress("L1Tech_FSC_St3Sect56_downLeft.v0", &tHlts.L1Tech_FSC_St3Sect56_downLeft_v0, &tHlts.b_L1Tech_FSC_St3Sect56_downLeft_v0);
   t->SetBranchAddress("L1Tech_FSC_St3Sect56_downLeft.v0_Prescl", &tHlts.L1Tech_FSC_St3Sect56_downLeft_v0_Prescl, &tHlts.b_L1Tech_FSC_St3Sect56_downLeft_v0_Prescl);
   t->SetBranchAddress("L1Tech_FSC_St3Sect56_downRight.v0", &tHlts.L1Tech_FSC_St3Sect56_downRight_v0, &tHlts.b_L1Tech_FSC_St3Sect56_downRight_v0);
   t->SetBranchAddress("L1Tech_FSC_St3Sect56_downRight.v0_Prescl", &tHlts.L1Tech_FSC_St3Sect56_downRight_v0_Prescl, &tHlts.b_L1Tech_FSC_St3Sect56_downRight_v0_Prescl);
   t->SetBranchAddress("L1Tech_FSC_St3Sect56_uppLeft.v0", &tHlts.L1Tech_FSC_St3Sect56_uppLeft_v0, &tHlts.b_L1Tech_FSC_St3Sect56_uppLeft_v0);
   t->SetBranchAddress("L1Tech_FSC_St3Sect56_uppLeft.v0_Prescl", &tHlts.L1Tech_FSC_St3Sect56_uppLeft_v0_Prescl, &tHlts.b_L1Tech_FSC_St3Sect56_uppLeft_v0_Prescl);
   t->SetBranchAddress("L1Tech_FSC_St3Sect56_uppRight.v0", &tHlts.L1Tech_FSC_St3Sect56_uppRight_v0, &tHlts.b_L1Tech_FSC_St3Sect56_uppRight_v0);
   t->SetBranchAddress("L1Tech_FSC_St3Sect56_uppRight.v0_Prescl", &tHlts.L1Tech_FSC_St3Sect56_uppRight_v0_Prescl, &tHlts.b_L1Tech_FSC_St3Sect56_uppRight_v0_Prescl);
   t->SetBranchAddress("L1Tech_HCAL_HBHE_totalOR.v0", &tHlts.L1Tech_HCAL_HBHE_totalOR_v0, &tHlts.b_L1Tech_HCAL_HBHE_totalOR_v0);
   t->SetBranchAddress("L1Tech_HCAL_HBHE_totalOR.v0_Prescl", &tHlts.L1Tech_HCAL_HBHE_totalOR_v0_Prescl, &tHlts.b_L1Tech_HCAL_HBHE_totalOR_v0_Prescl);
   t->SetBranchAddress("L1Tech_HCAL_HF_MMP_or_MPP.v1", &tHlts.L1Tech_HCAL_HF_MMP_or_MPP_v1, &tHlts.b_L1Tech_HCAL_HF_MMP_or_MPP_v1);
   t->SetBranchAddress("L1Tech_HCAL_HF_MMP_or_MPP.v1_Prescl", &tHlts.L1Tech_HCAL_HF_MMP_or_MPP_v1_Prescl, &tHlts.b_L1Tech_HCAL_HF_MMP_or_MPP_v1_Prescl);
   t->SetBranchAddress("L1Tech_HCAL_HF_coincidence_PM.v2", &tHlts.L1Tech_HCAL_HF_coincidence_PM_v2, &tHlts.b_L1Tech_HCAL_HF_coincidence_PM_v2);
   t->SetBranchAddress("L1Tech_HCAL_HF_coincidence_PM.v2_Prescl", &tHlts.L1Tech_HCAL_HF_coincidence_PM_v2_Prescl, &tHlts.b_L1Tech_HCAL_HF_coincidence_PM_v2_Prescl);
   t->SetBranchAddress("L1Tech_HCAL_HF_single_channel.v0", &tHlts.L1Tech_HCAL_HF_single_channel_v0, &tHlts.b_L1Tech_HCAL_HF_single_channel_v0);
   t->SetBranchAddress("L1Tech_HCAL_HF_single_channel.v0_Prescl", &tHlts.L1Tech_HCAL_HF_single_channel_v0_Prescl, &tHlts.b_L1Tech_HCAL_HF_single_channel_v0_Prescl);
   t->SetBranchAddress("L1Tech_HCAL_HO_totalOR.v0", &tHlts.L1Tech_HCAL_HO_totalOR_v0, &tHlts.b_L1Tech_HCAL_HO_totalOR_v0);
   t->SetBranchAddress("L1Tech_HCAL_HO_totalOR.v0_Prescl", &tHlts.L1Tech_HCAL_HO_totalOR_v0_Prescl, &tHlts.b_L1Tech_HCAL_HO_totalOR_v0_Prescl);
   t->SetBranchAddress("L1Tech_RPC_TTU_RB0_Cosmics.v0", &tHlts.L1Tech_RPC_TTU_RB0_Cosmics_v0, &tHlts.b_L1Tech_RPC_TTU_RB0_Cosmics_v0);
   t->SetBranchAddress("L1Tech_RPC_TTU_RB0_Cosmics.v0_Prescl", &tHlts.L1Tech_RPC_TTU_RB0_Cosmics_v0_Prescl, &tHlts.b_L1Tech_RPC_TTU_RB0_Cosmics_v0_Prescl);
   t->SetBranchAddress("L1Tech_RPC_TTU_RBminus1_Cosmics.v0", &tHlts.L1Tech_RPC_TTU_RBminus1_Cosmics_v0, &tHlts.b_L1Tech_RPC_TTU_RBminus1_Cosmics_v0);
   t->SetBranchAddress("L1Tech_RPC_TTU_RBminus1_Cosmics.v0_Prescl", &tHlts.L1Tech_RPC_TTU_RBminus1_Cosmics_v0_Prescl, &tHlts.b_L1Tech_RPC_TTU_RBminus1_Cosmics_v0_Prescl);
   t->SetBranchAddress("L1Tech_RPC_TTU_RBminus2_Cosmics.v0", &tHlts.L1Tech_RPC_TTU_RBminus2_Cosmics_v0, &tHlts.b_L1Tech_RPC_TTU_RBminus2_Cosmics_v0);
   t->SetBranchAddress("L1Tech_RPC_TTU_RBminus2_Cosmics.v0_Prescl", &tHlts.L1Tech_RPC_TTU_RBminus2_Cosmics_v0_Prescl, &tHlts.b_L1Tech_RPC_TTU_RBminus2_Cosmics_v0_Prescl);
   t->SetBranchAddress("L1Tech_RPC_TTU_RBplus1_Cosmics.v0", &tHlts.L1Tech_RPC_TTU_RBplus1_Cosmics_v0, &tHlts.b_L1Tech_RPC_TTU_RBplus1_Cosmics_v0);
   t->SetBranchAddress("L1Tech_RPC_TTU_RBplus1_Cosmics.v0_Prescl", &tHlts.L1Tech_RPC_TTU_RBplus1_Cosmics_v0_Prescl, &tHlts.b_L1Tech_RPC_TTU_RBplus1_Cosmics_v0_Prescl);
   t->SetBranchAddress("L1Tech_RPC_TTU_RBplus2_Cosmics.v0", &tHlts.L1Tech_RPC_TTU_RBplus2_Cosmics_v0, &tHlts.b_L1Tech_RPC_TTU_RBplus2_Cosmics_v0);
   t->SetBranchAddress("L1Tech_RPC_TTU_RBplus2_Cosmics.v0_Prescl", &tHlts.L1Tech_RPC_TTU_RBplus2_Cosmics_v0_Prescl, &tHlts.b_L1Tech_RPC_TTU_RBplus2_Cosmics_v0_Prescl);
   t->SetBranchAddress("L1Tech_RPC_TTU_RBst1_collisions.v0", &tHlts.L1Tech_RPC_TTU_RBst1_collisions_v0, &tHlts.b_L1Tech_RPC_TTU_RBst1_collisions_v0);
   t->SetBranchAddress("L1Tech_RPC_TTU_RBst1_collisions.v0_Prescl", &tHlts.L1Tech_RPC_TTU_RBst1_collisions_v0_Prescl, &tHlts.b_L1Tech_RPC_TTU_RBst1_collisions_v0_Prescl);
   t->SetBranchAddress("L1Tech_RPC_TTU_barrel_Cosmics.v0", &tHlts.L1Tech_RPC_TTU_barrel_Cosmics_v0, &tHlts.b_L1Tech_RPC_TTU_barrel_Cosmics_v0);
   t->SetBranchAddress("L1Tech_RPC_TTU_barrel_Cosmics.v0_Prescl", &tHlts.L1Tech_RPC_TTU_barrel_Cosmics_v0_Prescl, &tHlts.b_L1Tech_RPC_TTU_barrel_Cosmics_v0_Prescl);
   t->SetBranchAddress("L1Tech_RPC_TTU_pointing_Cosmics.v0", &tHlts.L1Tech_RPC_TTU_pointing_Cosmics_v0, &tHlts.b_L1Tech_RPC_TTU_pointing_Cosmics_v0);
   t->SetBranchAddress("L1Tech_RPC_TTU_pointing_Cosmics.v0_Prescl", &tHlts.L1Tech_RPC_TTU_pointing_Cosmics_v0_Prescl, &tHlts.b_L1Tech_RPC_TTU_pointing_Cosmics_v0_Prescl);
   t->SetBranchAddress("L1Tech_TOTEM_Diffractive.v0", &tHlts.L1Tech_TOTEM_Diffractive_v0, &tHlts.b_L1Tech_TOTEM_Diffractive_v0);
   t->SetBranchAddress("L1Tech_TOTEM_Diffractive.v0_Prescl", &tHlts.L1Tech_TOTEM_Diffractive_v0_Prescl, &tHlts.b_L1Tech_TOTEM_Diffractive_v0_Prescl);
   t->SetBranchAddress("L1Tech_TOTEM_LowMultiplicity.v0", &tHlts.L1Tech_TOTEM_LowMultiplicity_v0, &tHlts.b_L1Tech_TOTEM_LowMultiplicity_v0);
   t->SetBranchAddress("L1Tech_TOTEM_LowMultiplicity.v0_Prescl", &tHlts.L1Tech_TOTEM_LowMultiplicity_v0_Prescl, &tHlts.b_L1Tech_TOTEM_LowMultiplicity_v0_Prescl);
   t->SetBranchAddress("L1Tech_TOTEM_MinBias.v0", &tHlts.L1Tech_TOTEM_MinBias_v0, &tHlts.b_L1Tech_TOTEM_MinBias_v0);
   t->SetBranchAddress("L1Tech_TOTEM_MinBias.v0_Prescl", &tHlts.L1Tech_TOTEM_MinBias_v0_Prescl, &tHlts.b_L1Tech_TOTEM_MinBias_v0_Prescl);
   t->SetBranchAddress("L1Tech_TOTEM_ZeroBias.v0", &tHlts.L1Tech_TOTEM_ZeroBias_v0, &tHlts.b_L1Tech_TOTEM_ZeroBias_v0);
   t->SetBranchAddress("L1Tech_TOTEM_ZeroBias.v0_Prescl", &tHlts.L1Tech_TOTEM_ZeroBias_v0_Prescl, &tHlts.b_L1Tech_TOTEM_ZeroBias_v0_Prescl);
   t->SetBranchAddress("L1Tech_ZDC_Scint_loose_vertex.v0", &tHlts.L1Tech_ZDC_Scint_loose_vertex_v0, &tHlts.b_L1Tech_ZDC_Scint_loose_vertex_v0);
   t->SetBranchAddress("L1Tech_ZDC_Scint_loose_vertex.v0_Prescl", &tHlts.L1Tech_ZDC_Scint_loose_vertex_v0_Prescl, &tHlts.b_L1Tech_ZDC_Scint_loose_vertex_v0_Prescl);
   t->SetBranchAddress("L1Tech_ZDC_Scint_minus.v0", &tHlts.L1Tech_ZDC_Scint_minus_v0, &tHlts.b_L1Tech_ZDC_Scint_minus_v0);
   t->SetBranchAddress("L1Tech_ZDC_Scint_minus.v0_Prescl", &tHlts.L1Tech_ZDC_Scint_minus_v0_Prescl, &tHlts.b_L1Tech_ZDC_Scint_minus_v0_Prescl);
   t->SetBranchAddress("L1Tech_ZDC_Scint_plus.v0", &tHlts.L1Tech_ZDC_Scint_plus_v0, &tHlts.b_L1Tech_ZDC_Scint_plus_v0);
   t->SetBranchAddress("L1Tech_ZDC_Scint_plus.v0_Prescl", &tHlts.L1Tech_ZDC_Scint_plus_v0_Prescl, &tHlts.b_L1Tech_ZDC_Scint_plus_v0_Prescl);
   t->SetBranchAddress("L1Tech_ZDC_Scint_tight_vertex.v0", &tHlts.L1Tech_ZDC_Scint_tight_vertex_v0, &tHlts.b_L1Tech_ZDC_Scint_tight_vertex_v0);
   t->SetBranchAddress("L1Tech_ZDC_Scint_tight_vertex.v0_Prescl", &tHlts.L1Tech_ZDC_Scint_tight_vertex_v0_Prescl, &tHlts.b_L1Tech_ZDC_Scint_tight_vertex_v0_Prescl);
   if (doCheck) {
      if (t->GetMaximum("NL1IsolEm")>8) cout <<"FATAL ERROR: Arrary size of NL1IsolEm too small!!!  "<<t->GetMaximum("NL1IsolEm")<<endl;
      if (t->GetMaximum("NL1NIsolEm")>8) cout <<"FATAL ERROR: Arrary size of NL1NIsolEm too small!!!  "<<t->GetMaximum("NL1NIsolEm")<<endl;
      if (t->GetMaximum("NL1Mu")>8) cout <<"FATAL ERROR: Arrary size of NL1Mu too small!!!  "<<t->GetMaximum("NL1Mu")<<endl;
      if (t->GetMaximum("NL1CenJet")>8) cout <<"FATAL ERROR: Arrary size of NL1CenJet too small!!!  "<<t->GetMaximum("NL1CenJet")<<endl;
      if (t->GetMaximum("NL1ForJet")>8) cout <<"FATAL ERROR: Arrary size of NL1ForJet too small!!!  "<<t->GetMaximum("NL1ForJet")<<endl;
      if (t->GetMaximum("NL1Tau")>8) cout <<"FATAL ERROR: Arrary size of NL1Tau too small!!!  "<<t->GetMaximum("NL1Tau")<<endl;
   }
}

