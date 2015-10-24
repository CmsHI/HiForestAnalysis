//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Sat Oct 24 17:09:15 2015 by ROOT version 5.32/00
// from TTree HltTree/
// found on file: ../../HiForest2015/Pyquen_Unquenched_AllQCDPhoton30_PhotonFilter20GeV_eta24_TuneZ2_PbPb_5020GeV_0.root
//////////////////////////////////////////////////////////
#include "commonSetup.h"
#include <iostream>
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TTree.h>
#include <TBranch.h>

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
   ULong64_t       Event;
   Int_t           LumiBlock;
   Int_t           Run;
   Int_t           Bx;
   Int_t           Orbit;
   Double_t        AvgInstDelLumi;
   Int_t           L1_BptxAND_HcalHfCoincPm;
   Int_t           L1_BptxAND_HcalHfCoincPm_Prescl;
   Int_t           L1_BptxAND_HcalHfMmOrPpOrPm;
   Int_t           L1_BptxAND_HcalHfMmOrPpOrPm_Prescl;
   Int_t           L1_BptxAND_HcalHfMmpOrMpp;
   Int_t           L1_BptxAND_HcalHfMmpOrMpp_Prescl;
   Int_t           L1_BptxMinus;
   Int_t           L1_BptxMinus_Prescl;
   Int_t           L1_BptxMinus_NotBptxPlus;
   Int_t           L1_BptxMinus_NotBptxPlus_Prescl;
   Int_t           L1_BptxPlus;
   Int_t           L1_BptxPlus_Prescl;
   Int_t           L1_BptxPlusORMinus;
   Int_t           L1_BptxPlusORMinus_Prescl;
   Int_t           L1_BptxPlus_NotBptxMinus;
   Int_t           L1_BptxPlus_NotBptxMinus_Prescl;
   Int_t           L1_BptxXOR;
   Int_t           L1_BptxXOR_Prescl;
   Int_t           L1_Centrality0_5;
   Int_t           L1_Centrality0_5_Prescl;
   Int_t           L1_Centrality10_30;
   Int_t           L1_Centrality10_30_Prescl;
   Int_t           L1_Centrality30_50;
   Int_t           L1_Centrality30_50_Prescl;
   Int_t           L1_Centrality50_70;
   Int_t           L1_Centrality50_70_Prescl;
   Int_t           L1_Centrality5_10;
   Int_t           L1_Centrality5_10_Prescl;
   Int_t           L1_Centrality70_100;
   Int_t           L1_Centrality70_100_Prescl;
   Int_t           L1_DoubleEG10;
   Int_t           L1_DoubleEG10_Prescl;
   Int_t           L1_DoubleEG3;
   Int_t           L1_DoubleEG3_Prescl;
   Int_t           L1_DoubleEG3_BptxAND;
   Int_t           L1_DoubleEG3_BptxAND_Prescl;
   Int_t           L1_DoubleEG5_BptxAND;
   Int_t           L1_DoubleEG5_BptxAND_Prescl;
   Int_t           L1_DoubleEG8_BptxAND;
   Int_t           L1_DoubleEG8_BptxAND_Prescl;
   Int_t           L1_DoubleForJet32_EtaOpp;
   Int_t           L1_DoubleForJet32_EtaOpp_Prescl;
   Int_t           L1_DoubleForJet44_EtaOpp;
   Int_t           L1_DoubleForJet44_EtaOpp_Prescl;
   Int_t           L1_DoubleHfBitCountsRing1_P1N1;
   Int_t           L1_DoubleHfBitCountsRing1_P1N1_Prescl;
   Int_t           L1_DoubleHfBitCountsRing2_P1N1;
   Int_t           L1_DoubleHfBitCountsRing2_P1N1_Prescl;
   Int_t           L1_DoubleHfRingEtSumsRing1_P200N200;
   Int_t           L1_DoubleHfRingEtSumsRing1_P200N200_Prescl;
   Int_t           L1_DoubleHfRingEtSumsRing1_P4N4;
   Int_t           L1_DoubleHfRingEtSumsRing1_P4N4_Prescl;
   Int_t           L1_DoubleHfRingEtSumsRing2_P200N200;
   Int_t           L1_DoubleHfRingEtSumsRing2_P200N200_Prescl;
   Int_t           L1_DoubleHfRingEtSumsRing2_P4N4;
   Int_t           L1_DoubleHfRingEtSumsRing2_P4N4_Prescl;
   Int_t           L1_DoubleMu3_BptxAND;
   Int_t           L1_DoubleMu3_BptxAND_Prescl;
   Int_t           L1_DoubleMuOpen_BptxAND;
   Int_t           L1_DoubleMuOpen_BptxAND_Prescl;
   Int_t           L1_EG2_ZdcCalo_BptxAND;
   Int_t           L1_EG2_ZdcCalo_BptxAND_Prescl;
   Int_t           L1_EG2_ZdcCalo_NotHcalHfCoincidencePm_BptxAND;
   Int_t           L1_EG2_ZdcCalo_NotHcalHfCoincidencePm_BptxAND_Prescl;
   Int_t           L1_EG5_ZdcCalo_BptxAND;
   Int_t           L1_EG5_ZdcCalo_BptxAND_Prescl;
   Int_t           L1_EG5_ZdcCalo_NotHcalHfCoincidencePm_BptxAND;
   Int_t           L1_EG5_ZdcCalo_NotHcalHfCoincidencePm_BptxAND_Prescl;
   Int_t           L1_ETM30_BptxAND;
   Int_t           L1_ETM30_BptxAND_Prescl;
   Int_t           L1_ETM50_BptxAND;
   Int_t           L1_ETM50_BptxAND_Prescl;
   Int_t           L1_ETT100_BptxAND;
   Int_t           L1_ETT100_BptxAND_Prescl;
   Int_t           L1_ETT140_BptxAND;
   Int_t           L1_ETT140_BptxAND_Prescl;
   Int_t           L1_ETT2000;
   Int_t           L1_ETT2000_Prescl;
   Int_t           L1_ETT220_BptxAND;
   Int_t           L1_ETT220_BptxAND_Prescl;
   Int_t           L1_ETT70_BptxAND;
   Int_t           L1_ETT70_BptxAND_Prescl;
   Int_t           L1_ETT800;
   Int_t           L1_ETT800_Prescl;
   Int_t           L1_HcalHfCoincPm_BptxAND;
   Int_t           L1_HcalHfCoincPm_BptxAND_Prescl;
   Int_t           L1_HcalHfCoincidencePm;
   Int_t           L1_HcalHfCoincidencePm_Prescl;
   Int_t           L1_HcalHfCoincidencePm_BptxOR;
   Int_t           L1_HcalHfCoincidencePm_BptxOR_Prescl;
   Int_t           L1_HcalHfCoincidencePm_BptxXOR;
   Int_t           L1_HcalHfCoincidencePm_BptxXOR_Prescl;
   Int_t           L1_HcalHfMmOrPpOrPm;
   Int_t           L1_HcalHfMmOrPpOrPm_Prescl;
   Int_t           L1_HcalHfMmpOrMpp;
   Int_t           L1_HcalHfMmpOrMpp_Prescl;
   Int_t           L1_HcalHoTotalOR;
   Int_t           L1_HcalHoTotalOR_Prescl;
   Int_t           L1_MuOpen_ZdcCalo_BptxAND;
   Int_t           L1_MuOpen_ZdcCalo_BptxAND_Prescl;
   Int_t           L1_MuOpen_ZdcCalo_NotHcalHfCoincidencePm_BptxAND;
   Int_t           L1_MuOpen_ZdcCalo_NotHcalHfCoincidencePm_BptxAND_Prescl;
   Int_t           L1_SingleEG12;
   Int_t           L1_SingleEG12_Prescl;
   Int_t           L1_SingleEG12_BptxAND;
   Int_t           L1_SingleEG12_BptxAND_Prescl;
   Int_t           L1_SingleEG15;
   Int_t           L1_SingleEG15_Prescl;
   Int_t           L1_SingleEG15_BptxAND;
   Int_t           L1_SingleEG15_BptxAND_Prescl;
   Int_t           L1_SingleEG18;
   Int_t           L1_SingleEG18_Prescl;
   Int_t           L1_SingleEG20;
   Int_t           L1_SingleEG20_Prescl;
   Int_t           L1_SingleEG22;
   Int_t           L1_SingleEG22_Prescl;
   Int_t           L1_SingleEG2_BptxAND;
   Int_t           L1_SingleEG2_BptxAND_Prescl;
   Int_t           L1_SingleEG30;
   Int_t           L1_SingleEG30_Prescl;
   Int_t           L1_SingleEG5_BptxAND;
   Int_t           L1_SingleEG5_BptxAND_Prescl;
   Int_t           L1_SingleEG8_BptxAND;
   Int_t           L1_SingleEG8_BptxAND_Prescl;
   Int_t           L1_SingleMu0_BptxAND;
   Int_t           L1_SingleMu0_BptxAND_Prescl;
   Int_t           L1_SingleMu10;
   Int_t           L1_SingleMu10_Prescl;
   Int_t           L1_SingleMu14;
   Int_t           L1_SingleMu14_Prescl;
   Int_t           L1_SingleMu20;
   Int_t           L1_SingleMu20_Prescl;
   Int_t           L1_SingleMu3_BptxAND;
   Int_t           L1_SingleMu3_BptxAND_Prescl;
   Int_t           L1_SingleMu5_BptxAND;
   Int_t           L1_SingleMu5_BptxAND_Prescl;
   Int_t           L1_SingleMu7;
   Int_t           L1_SingleMu7_Prescl;
   Int_t           L1_SingleMuBeamHalo;
   Int_t           L1_SingleMuBeamHalo_Prescl;
   Int_t           L1_SingleMuOpen_BptxAND;
   Int_t           L1_SingleMuOpen_BptxAND_Prescl;
   Int_t           L1_SingleJet128;
   Int_t           L1_SingleJet128_Prescl;
   Int_t           L1_SingleJet128_BptxAND;
   Int_t           L1_SingleJet128_BptxAND_Prescl;
   Int_t           L1_SingleJet128_Central_BptxAND;
   Int_t           L1_SingleJet128_Central_BptxAND_Prescl;
   Int_t           L1_SingleJet16;
   Int_t           L1_SingleJet16_Prescl;
   Int_t           L1_SingleJet16_BptxAND;
   Int_t           L1_SingleJet16_BptxAND_Prescl;
   Int_t           L1_SingleJet16_Central_NotETT140_BptxAND;
   Int_t           L1_SingleJet16_Central_NotETT140_BptxAND_Prescl;
   Int_t           L1_SingleJet20_Central_NotBptxOR_NotMuBeamHalo;
   Int_t           L1_SingleJet20_Central_NotBptxOR_NotMuBeamHalo_Prescl;
   Int_t           L1_SingleJet32_Central_NotBptxOR_NotMuBeamHalo;
   Int_t           L1_SingleJet32_Central_NotBptxOR_NotMuBeamHalo_Prescl;
   Int_t           L1_SingleJet36_BptxAND;
   Int_t           L1_SingleJet36_BptxAND_Prescl;
   Int_t           L1_SingleJet52_BptxAND;
   Int_t           L1_SingleJet52_BptxAND_Prescl;
   Int_t           L1_SingleJet52_Central_BptxAND;
   Int_t           L1_SingleJet52_Central_BptxAND_Prescl;
   Int_t           L1_SingleJet68_BptxAND;
   Int_t           L1_SingleJet68_BptxAND_Prescl;
   Int_t           L1_SingleJet80_BptxAND;
   Int_t           L1_SingleJet80_BptxAND_Prescl;
   Int_t           L1_SingleJet80_Central;
   Int_t           L1_SingleJet80_Central_Prescl;
   Int_t           L1_SingleJet80_Central_BptxAND;
   Int_t           L1_SingleJet80_Central_BptxAND_Prescl;
   Int_t           L1_SingleJet92;
   Int_t           L1_SingleJet92_Prescl;
   Int_t           L1_SingleJet92_BptxAND;
   Int_t           L1_SingleJet92_BptxAND_Prescl;
   Int_t           L1_SingleJet92_Central;
   Int_t           L1_SingleJet92_Central_Prescl;
   Int_t           L1_SingleJet92_Central_BptxAND;
   Int_t           L1_SingleJet92_Central_BptxAND_Prescl;
   Int_t           L1_SingleTrack12;
   Int_t           L1_SingleTrack12_Prescl;
   Int_t           L1_SingleTrack16;
   Int_t           L1_SingleTrack16_Prescl;
   Int_t           L1_SingleTrack20;
   Int_t           L1_SingleTrack20_Prescl;
   Int_t           L1_ZdcCaloMinus;
   Int_t           L1_ZdcCaloMinus_Prescl;
   Int_t           L1_ZdcCaloMinus_BptxAND;
   Int_t           L1_ZdcCaloMinus_BptxAND_Prescl;
   Int_t           L1_ZdcCaloPlus;
   Int_t           L1_ZdcCaloPlus_Prescl;
   Int_t           L1_ZdcCaloPlus_BptxAND;
   Int_t           L1_ZdcCaloPlus_BptxAND_Prescl;
   Int_t           L1_ZdcCaloPlus_ZdcCaloMinus;
   Int_t           L1_ZdcCaloPlus_ZdcCaloMinus_Prescl;
   Int_t           L1_ZdcCaloPlus_ZdcCaloMinus_BptxAND;
   Int_t           L1_ZdcCaloPlus_ZdcCaloMinus_BptxAND_Prescl;
   Int_t           L1_ZeroBias;
   Int_t           L1_ZeroBias_Prescl;
   Int_t           L1_q2_10;
   Int_t           L1_q2_10_Prescl;
   Int_t           L1_q2_4_6;
   Int_t           L1_q2_4_6_Prescl;
   Int_t           L1_q2_6_10;
   Int_t           L1_q2_6_10_Prescl;
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
   Int_t           L1Tech_CASTOR_HaloMuon_v0;
   Int_t           L1Tech_CASTOR_HaloMuon_v0_Prescl;
   Int_t           L1Tech_DT_GlobalOR_v0;
   Int_t           L1Tech_DT_GlobalOR_v0_Prescl;
   Int_t           L1Tech_FSC_St1Sect45_down_v0;
   Int_t           L1Tech_FSC_St1Sect45_down_v0_Prescl;
   Int_t           L1Tech_FSC_St1Sect45_upp_v0;
   Int_t           L1Tech_FSC_St1Sect45_upp_v0_Prescl;
   Int_t           L1Tech_FSC_St1Sect56_down_v0;
   Int_t           L1Tech_FSC_St1Sect56_down_v0_Prescl;
   Int_t           L1Tech_FSC_St1Sect56_upp_v0;
   Int_t           L1Tech_FSC_St1Sect56_upp_v0_Prescl;
   Int_t           L1Tech_FSC_St2Sect45_down_v0;
   Int_t           L1Tech_FSC_St2Sect45_down_v0_Prescl;
   Int_t           L1Tech_FSC_St2Sect45_upp_v0;
   Int_t           L1Tech_FSC_St2Sect45_upp_v0_Prescl;
   Int_t           L1Tech_FSC_St2Sect56_down_v0;
   Int_t           L1Tech_FSC_St2Sect56_down_v0_Prescl;
   Int_t           L1Tech_FSC_St2Sect56_upp_v0;
   Int_t           L1Tech_FSC_St2Sect56_upp_v0_Prescl;
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
   TBranch        *b_Event;   //!
   TBranch        *b_LumiBlock;   //!
   TBranch        *b_Run;   //!
   TBranch        *b_Bx;   //!
   TBranch        *b_Orbit;   //!
   TBranch        *b_AvgInstDelLumi;   //!
   TBranch        *b_L1_BptxAND_HcalHfCoincPm;   //!
   TBranch        *b_L1_BptxAND_HcalHfCoincPm_Prescl;   //!
   TBranch        *b_L1_BptxAND_HcalHfMmOrPpOrPm;   //!
   TBranch        *b_L1_BptxAND_HcalHfMmOrPpOrPm_Prescl;   //!
   TBranch        *b_L1_BptxAND_HcalHfMmpOrMpp;   //!
   TBranch        *b_L1_BptxAND_HcalHfMmpOrMpp_Prescl;   //!
   TBranch        *b_L1_BptxMinus;   //!
   TBranch        *b_L1_BptxMinus_Prescl;   //!
   TBranch        *b_L1_BptxMinus_NotBptxPlus;   //!
   TBranch        *b_L1_BptxMinus_NotBptxPlus_Prescl;   //!
   TBranch        *b_L1_BptxPlus;   //!
   TBranch        *b_L1_BptxPlus_Prescl;   //!
   TBranch        *b_L1_BptxPlusORMinus;   //!
   TBranch        *b_L1_BptxPlusORMinus_Prescl;   //!
   TBranch        *b_L1_BptxPlus_NotBptxMinus;   //!
   TBranch        *b_L1_BptxPlus_NotBptxMinus_Prescl;   //!
   TBranch        *b_L1_BptxXOR;   //!
   TBranch        *b_L1_BptxXOR_Prescl;   //!
   TBranch        *b_L1_Centrality0_5;   //!
   TBranch        *b_L1_Centrality0_5_Prescl;   //!
   TBranch        *b_L1_Centrality10_30;   //!
   TBranch        *b_L1_Centrality10_30_Prescl;   //!
   TBranch        *b_L1_Centrality30_50;   //!
   TBranch        *b_L1_Centrality30_50_Prescl;   //!
   TBranch        *b_L1_Centrality50_70;   //!
   TBranch        *b_L1_Centrality50_70_Prescl;   //!
   TBranch        *b_L1_Centrality5_10;   //!
   TBranch        *b_L1_Centrality5_10_Prescl;   //!
   TBranch        *b_L1_Centrality70_100;   //!
   TBranch        *b_L1_Centrality70_100_Prescl;   //!
   TBranch        *b_L1_DoubleEG10;   //!
   TBranch        *b_L1_DoubleEG10_Prescl;   //!
   TBranch        *b_L1_DoubleEG3;   //!
   TBranch        *b_L1_DoubleEG3_Prescl;   //!
   TBranch        *b_L1_DoubleEG3_BptxAND;   //!
   TBranch        *b_L1_DoubleEG3_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleEG5_BptxAND;   //!
   TBranch        *b_L1_DoubleEG5_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleEG8_BptxAND;   //!
   TBranch        *b_L1_DoubleEG8_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleForJet32_EtaOpp;   //!
   TBranch        *b_L1_DoubleForJet32_EtaOpp_Prescl;   //!
   TBranch        *b_L1_DoubleForJet44_EtaOpp;   //!
   TBranch        *b_L1_DoubleForJet44_EtaOpp_Prescl;   //!
   TBranch        *b_L1_DoubleHfBitCountsRing1_P1N1;   //!
   TBranch        *b_L1_DoubleHfBitCountsRing1_P1N1_Prescl;   //!
   TBranch        *b_L1_DoubleHfBitCountsRing2_P1N1;   //!
   TBranch        *b_L1_DoubleHfBitCountsRing2_P1N1_Prescl;   //!
   TBranch        *b_L1_DoubleHfRingEtSumsRing1_P200N200;   //!
   TBranch        *b_L1_DoubleHfRingEtSumsRing1_P200N200_Prescl;   //!
   TBranch        *b_L1_DoubleHfRingEtSumsRing1_P4N4;   //!
   TBranch        *b_L1_DoubleHfRingEtSumsRing1_P4N4_Prescl;   //!
   TBranch        *b_L1_DoubleHfRingEtSumsRing2_P200N200;   //!
   TBranch        *b_L1_DoubleHfRingEtSumsRing2_P200N200_Prescl;   //!
   TBranch        *b_L1_DoubleHfRingEtSumsRing2_P4N4;   //!
   TBranch        *b_L1_DoubleHfRingEtSumsRing2_P4N4_Prescl;   //!
   TBranch        *b_L1_DoubleMu3_BptxAND;   //!
   TBranch        *b_L1_DoubleMu3_BptxAND_Prescl;   //!
   TBranch        *b_L1_DoubleMuOpen_BptxAND;   //!
   TBranch        *b_L1_DoubleMuOpen_BptxAND_Prescl;   //!
   TBranch        *b_L1_EG2_ZdcCalo_BptxAND;   //!
   TBranch        *b_L1_EG2_ZdcCalo_BptxAND_Prescl;   //!
   TBranch        *b_L1_EG2_ZdcCalo_NotHcalHfCoincidencePm_BptxAND;   //!
   TBranch        *b_L1_EG2_ZdcCalo_NotHcalHfCoincidencePm_BptxAND_Prescl;   //!
   TBranch        *b_L1_EG5_ZdcCalo_BptxAND;   //!
   TBranch        *b_L1_EG5_ZdcCalo_BptxAND_Prescl;   //!
   TBranch        *b_L1_EG5_ZdcCalo_NotHcalHfCoincidencePm_BptxAND;   //!
   TBranch        *b_L1_EG5_ZdcCalo_NotHcalHfCoincidencePm_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETM30_BptxAND;   //!
   TBranch        *b_L1_ETM30_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETM50_BptxAND;   //!
   TBranch        *b_L1_ETM50_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT100_BptxAND;   //!
   TBranch        *b_L1_ETT100_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT140_BptxAND;   //!
   TBranch        *b_L1_ETT140_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT2000;   //!
   TBranch        *b_L1_ETT2000_Prescl;   //!
   TBranch        *b_L1_ETT220_BptxAND;   //!
   TBranch        *b_L1_ETT220_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT70_BptxAND;   //!
   TBranch        *b_L1_ETT70_BptxAND_Prescl;   //!
   TBranch        *b_L1_ETT800;   //!
   TBranch        *b_L1_ETT800_Prescl;   //!
   TBranch        *b_L1_HcalHfCoincPm_BptxAND;   //!
   TBranch        *b_L1_HcalHfCoincPm_BptxAND_Prescl;   //!
   TBranch        *b_L1_HcalHfCoincidencePm;   //!
   TBranch        *b_L1_HcalHfCoincidencePm_Prescl;   //!
   TBranch        *b_L1_HcalHfCoincidencePm_BptxOR;   //!
   TBranch        *b_L1_HcalHfCoincidencePm_BptxOR_Prescl;   //!
   TBranch        *b_L1_HcalHfCoincidencePm_BptxXOR;   //!
   TBranch        *b_L1_HcalHfCoincidencePm_BptxXOR_Prescl;   //!
   TBranch        *b_L1_HcalHfMmOrPpOrPm;   //!
   TBranch        *b_L1_HcalHfMmOrPpOrPm_Prescl;   //!
   TBranch        *b_L1_HcalHfMmpOrMpp;   //!
   TBranch        *b_L1_HcalHfMmpOrMpp_Prescl;   //!
   TBranch        *b_L1_HcalHoTotalOR;   //!
   TBranch        *b_L1_HcalHoTotalOR_Prescl;   //!
   TBranch        *b_L1_MuOpen_ZdcCalo_BptxAND;   //!
   TBranch        *b_L1_MuOpen_ZdcCalo_BptxAND_Prescl;   //!
   TBranch        *b_L1_MuOpen_ZdcCalo_NotHcalHfCoincidencePm_BptxAND;   //!
   TBranch        *b_L1_MuOpen_ZdcCalo_NotHcalHfCoincidencePm_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG12;   //!
   TBranch        *b_L1_SingleEG12_Prescl;   //!
   TBranch        *b_L1_SingleEG12_BptxAND;   //!
   TBranch        *b_L1_SingleEG12_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG15;   //!
   TBranch        *b_L1_SingleEG15_Prescl;   //!
   TBranch        *b_L1_SingleEG15_BptxAND;   //!
   TBranch        *b_L1_SingleEG15_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG18;   //!
   TBranch        *b_L1_SingleEG18_Prescl;   //!
   TBranch        *b_L1_SingleEG20;   //!
   TBranch        *b_L1_SingleEG20_Prescl;   //!
   TBranch        *b_L1_SingleEG22;   //!
   TBranch        *b_L1_SingleEG22_Prescl;   //!
   TBranch        *b_L1_SingleEG2_BptxAND;   //!
   TBranch        *b_L1_SingleEG2_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG30;   //!
   TBranch        *b_L1_SingleEG30_Prescl;   //!
   TBranch        *b_L1_SingleEG5_BptxAND;   //!
   TBranch        *b_L1_SingleEG5_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleEG8_BptxAND;   //!
   TBranch        *b_L1_SingleEG8_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleMu0_BptxAND;   //!
   TBranch        *b_L1_SingleMu0_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleMu10;   //!
   TBranch        *b_L1_SingleMu10_Prescl;   //!
   TBranch        *b_L1_SingleMu14;   //!
   TBranch        *b_L1_SingleMu14_Prescl;   //!
   TBranch        *b_L1_SingleMu20;   //!
   TBranch        *b_L1_SingleMu20_Prescl;   //!
   TBranch        *b_L1_SingleMu3_BptxAND;   //!
   TBranch        *b_L1_SingleMu3_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleMu5_BptxAND;   //!
   TBranch        *b_L1_SingleMu5_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleMu7;   //!
   TBranch        *b_L1_SingleMu7_Prescl;   //!
   TBranch        *b_L1_SingleMuBeamHalo;   //!
   TBranch        *b_L1_SingleMuBeamHalo_Prescl;   //!
   TBranch        *b_L1_SingleMuOpen_BptxAND;   //!
   TBranch        *b_L1_SingleMuOpen_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet128;   //!
   TBranch        *b_L1_SingleJet128_Prescl;   //!
   TBranch        *b_L1_SingleJet128_BptxAND;   //!
   TBranch        *b_L1_SingleJet128_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet128_Central_BptxAND;   //!
   TBranch        *b_L1_SingleJet128_Central_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet16;   //!
   TBranch        *b_L1_SingleJet16_Prescl;   //!
   TBranch        *b_L1_SingleJet16_BptxAND;   //!
   TBranch        *b_L1_SingleJet16_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet16_Central_NotETT140_BptxAND;   //!
   TBranch        *b_L1_SingleJet16_Central_NotETT140_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet20_Central_NotBptxOR_NotMuBeamHalo;   //!
   TBranch        *b_L1_SingleJet20_Central_NotBptxOR_NotMuBeamHalo_Prescl;   //!
   TBranch        *b_L1_SingleJet32_Central_NotBptxOR_NotMuBeamHalo;   //!
   TBranch        *b_L1_SingleJet32_Central_NotBptxOR_NotMuBeamHalo_Prescl;   //!
   TBranch        *b_L1_SingleJet36_BptxAND;   //!
   TBranch        *b_L1_SingleJet36_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet52_BptxAND;   //!
   TBranch        *b_L1_SingleJet52_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet52_Central_BptxAND;   //!
   TBranch        *b_L1_SingleJet52_Central_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet68_BptxAND;   //!
   TBranch        *b_L1_SingleJet68_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet80_BptxAND;   //!
   TBranch        *b_L1_SingleJet80_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet80_Central;   //!
   TBranch        *b_L1_SingleJet80_Central_Prescl;   //!
   TBranch        *b_L1_SingleJet80_Central_BptxAND;   //!
   TBranch        *b_L1_SingleJet80_Central_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet92;   //!
   TBranch        *b_L1_SingleJet92_Prescl;   //!
   TBranch        *b_L1_SingleJet92_BptxAND;   //!
   TBranch        *b_L1_SingleJet92_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleJet92_Central;   //!
   TBranch        *b_L1_SingleJet92_Central_Prescl;   //!
   TBranch        *b_L1_SingleJet92_Central_BptxAND;   //!
   TBranch        *b_L1_SingleJet92_Central_BptxAND_Prescl;   //!
   TBranch        *b_L1_SingleTrack12;   //!
   TBranch        *b_L1_SingleTrack12_Prescl;   //!
   TBranch        *b_L1_SingleTrack16;   //!
   TBranch        *b_L1_SingleTrack16_Prescl;   //!
   TBranch        *b_L1_SingleTrack20;   //!
   TBranch        *b_L1_SingleTrack20_Prescl;   //!
   TBranch        *b_L1_ZdcCaloMinus;   //!
   TBranch        *b_L1_ZdcCaloMinus_Prescl;   //!
   TBranch        *b_L1_ZdcCaloMinus_BptxAND;   //!
   TBranch        *b_L1_ZdcCaloMinus_BptxAND_Prescl;   //!
   TBranch        *b_L1_ZdcCaloPlus;   //!
   TBranch        *b_L1_ZdcCaloPlus_Prescl;   //!
   TBranch        *b_L1_ZdcCaloPlus_BptxAND;   //!
   TBranch        *b_L1_ZdcCaloPlus_BptxAND_Prescl;   //!
   TBranch        *b_L1_ZdcCaloPlus_ZdcCaloMinus;   //!
   TBranch        *b_L1_ZdcCaloPlus_ZdcCaloMinus_Prescl;   //!
   TBranch        *b_L1_ZdcCaloPlus_ZdcCaloMinus_BptxAND;   //!
   TBranch        *b_L1_ZdcCaloPlus_ZdcCaloMinus_BptxAND_Prescl;   //!
   TBranch        *b_L1_ZeroBias;   //!
   TBranch        *b_L1_ZeroBias_Prescl;   //!
   TBranch        *b_L1_q2_10;   //!
   TBranch        *b_L1_q2_10_Prescl;   //!
   TBranch        *b_L1_q2_4_6;   //!
   TBranch        *b_L1_q2_4_6_Prescl;   //!
   TBranch        *b_L1_q2_6_10;   //!
   TBranch        *b_L1_q2_6_10_Prescl;   //!
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
   TBranch        *b_L1Tech_CASTOR_HaloMuon_v0;   //!
   TBranch        *b_L1Tech_CASTOR_HaloMuon_v0_Prescl;   //!
   TBranch        *b_L1Tech_DT_GlobalOR_v0;   //!
   TBranch        *b_L1Tech_DT_GlobalOR_v0_Prescl;   //!
   TBranch        *b_L1Tech_FSC_St1Sect45_down_v0;   //!
   TBranch        *b_L1Tech_FSC_St1Sect45_down_v0_Prescl;   //!
   TBranch        *b_L1Tech_FSC_St1Sect45_upp_v0;   //!
   TBranch        *b_L1Tech_FSC_St1Sect45_upp_v0_Prescl;   //!
   TBranch        *b_L1Tech_FSC_St1Sect56_down_v0;   //!
   TBranch        *b_L1Tech_FSC_St1Sect56_down_v0_Prescl;   //!
   TBranch        *b_L1Tech_FSC_St1Sect56_upp_v0;   //!
   TBranch        *b_L1Tech_FSC_St1Sect56_upp_v0_Prescl;   //!
   TBranch        *b_L1Tech_FSC_St2Sect45_down_v0;   //!
   TBranch        *b_L1Tech_FSC_St2Sect45_down_v0_Prescl;   //!
   TBranch        *b_L1Tech_FSC_St2Sect45_upp_v0;   //!
   TBranch        *b_L1Tech_FSC_St2Sect45_upp_v0_Prescl;   //!
   TBranch        *b_L1Tech_FSC_St2Sect56_down_v0;   //!
   TBranch        *b_L1Tech_FSC_St2Sect56_down_v0_Prescl;   //!
   TBranch        *b_L1Tech_FSC_St2Sect56_upp_v0;   //!
   TBranch        *b_L1Tech_FSC_St2Sect56_upp_v0_Prescl;   //!
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
   t->SetBranchAddress("Event", &tHlts.Event, &tHlts.b_Event);
   t->SetBranchAddress("LumiBlock", &tHlts.LumiBlock, &tHlts.b_LumiBlock);
   t->SetBranchAddress("Run", &tHlts.Run, &tHlts.b_Run);
   t->SetBranchAddress("Bx", &tHlts.Bx, &tHlts.b_Bx);
   t->SetBranchAddress("Orbit", &tHlts.Orbit, &tHlts.b_Orbit);
   t->SetBranchAddress("AvgInstDelLumi", &tHlts.AvgInstDelLumi, &tHlts.b_AvgInstDelLumi);
   t->SetBranchAddress("L1_BptxAND_HcalHfCoincPm", &tHlts.L1_BptxAND_HcalHfCoincPm, &tHlts.b_L1_BptxAND_HcalHfCoincPm);
   t->SetBranchAddress("L1_BptxAND_HcalHfCoincPm_Prescl", &tHlts.L1_BptxAND_HcalHfCoincPm_Prescl, &tHlts.b_L1_BptxAND_HcalHfCoincPm_Prescl);
   t->SetBranchAddress("L1_BptxAND_HcalHfMmOrPpOrPm", &tHlts.L1_BptxAND_HcalHfMmOrPpOrPm, &tHlts.b_L1_BptxAND_HcalHfMmOrPpOrPm);
   t->SetBranchAddress("L1_BptxAND_HcalHfMmOrPpOrPm_Prescl", &tHlts.L1_BptxAND_HcalHfMmOrPpOrPm_Prescl, &tHlts.b_L1_BptxAND_HcalHfMmOrPpOrPm_Prescl);
   t->SetBranchAddress("L1_BptxAND_HcalHfMmpOrMpp", &tHlts.L1_BptxAND_HcalHfMmpOrMpp, &tHlts.b_L1_BptxAND_HcalHfMmpOrMpp);
   t->SetBranchAddress("L1_BptxAND_HcalHfMmpOrMpp_Prescl", &tHlts.L1_BptxAND_HcalHfMmpOrMpp_Prescl, &tHlts.b_L1_BptxAND_HcalHfMmpOrMpp_Prescl);
   t->SetBranchAddress("L1_BptxMinus", &tHlts.L1_BptxMinus, &tHlts.b_L1_BptxMinus);
   t->SetBranchAddress("L1_BptxMinus_Prescl", &tHlts.L1_BptxMinus_Prescl, &tHlts.b_L1_BptxMinus_Prescl);
   t->SetBranchAddress("L1_BptxMinus_NotBptxPlus", &tHlts.L1_BptxMinus_NotBptxPlus, &tHlts.b_L1_BptxMinus_NotBptxPlus);
   t->SetBranchAddress("L1_BptxMinus_NotBptxPlus_Prescl", &tHlts.L1_BptxMinus_NotBptxPlus_Prescl, &tHlts.b_L1_BptxMinus_NotBptxPlus_Prescl);
   t->SetBranchAddress("L1_BptxPlus", &tHlts.L1_BptxPlus, &tHlts.b_L1_BptxPlus);
   t->SetBranchAddress("L1_BptxPlus_Prescl", &tHlts.L1_BptxPlus_Prescl, &tHlts.b_L1_BptxPlus_Prescl);
   t->SetBranchAddress("L1_BptxPlusORMinus", &tHlts.L1_BptxPlusORMinus, &tHlts.b_L1_BptxPlusORMinus);
   t->SetBranchAddress("L1_BptxPlusORMinus_Prescl", &tHlts.L1_BptxPlusORMinus_Prescl, &tHlts.b_L1_BptxPlusORMinus_Prescl);
   t->SetBranchAddress("L1_BptxPlus_NotBptxMinus", &tHlts.L1_BptxPlus_NotBptxMinus, &tHlts.b_L1_BptxPlus_NotBptxMinus);
   t->SetBranchAddress("L1_BptxPlus_NotBptxMinus_Prescl", &tHlts.L1_BptxPlus_NotBptxMinus_Prescl, &tHlts.b_L1_BptxPlus_NotBptxMinus_Prescl);
   t->SetBranchAddress("L1_BptxXOR", &tHlts.L1_BptxXOR, &tHlts.b_L1_BptxXOR);
   t->SetBranchAddress("L1_BptxXOR_Prescl", &tHlts.L1_BptxXOR_Prescl, &tHlts.b_L1_BptxXOR_Prescl);
   t->SetBranchAddress("L1_Centrality0_5", &tHlts.L1_Centrality0_5, &tHlts.b_L1_Centrality0_5);
   t->SetBranchAddress("L1_Centrality0_5_Prescl", &tHlts.L1_Centrality0_5_Prescl, &tHlts.b_L1_Centrality0_5_Prescl);
   t->SetBranchAddress("L1_Centrality10_30", &tHlts.L1_Centrality10_30, &tHlts.b_L1_Centrality10_30);
   t->SetBranchAddress("L1_Centrality10_30_Prescl", &tHlts.L1_Centrality10_30_Prescl, &tHlts.b_L1_Centrality10_30_Prescl);
   t->SetBranchAddress("L1_Centrality30_50", &tHlts.L1_Centrality30_50, &tHlts.b_L1_Centrality30_50);
   t->SetBranchAddress("L1_Centrality30_50_Prescl", &tHlts.L1_Centrality30_50_Prescl, &tHlts.b_L1_Centrality30_50_Prescl);
   t->SetBranchAddress("L1_Centrality50_70", &tHlts.L1_Centrality50_70, &tHlts.b_L1_Centrality50_70);
   t->SetBranchAddress("L1_Centrality50_70_Prescl", &tHlts.L1_Centrality50_70_Prescl, &tHlts.b_L1_Centrality50_70_Prescl);
   t->SetBranchAddress("L1_Centrality5_10", &tHlts.L1_Centrality5_10, &tHlts.b_L1_Centrality5_10);
   t->SetBranchAddress("L1_Centrality5_10_Prescl", &tHlts.L1_Centrality5_10_Prescl, &tHlts.b_L1_Centrality5_10_Prescl);
   t->SetBranchAddress("L1_Centrality70_100", &tHlts.L1_Centrality70_100, &tHlts.b_L1_Centrality70_100);
   t->SetBranchAddress("L1_Centrality70_100_Prescl", &tHlts.L1_Centrality70_100_Prescl, &tHlts.b_L1_Centrality70_100_Prescl);
   t->SetBranchAddress("L1_DoubleEG10", &tHlts.L1_DoubleEG10, &tHlts.b_L1_DoubleEG10);
   t->SetBranchAddress("L1_DoubleEG10_Prescl", &tHlts.L1_DoubleEG10_Prescl, &tHlts.b_L1_DoubleEG10_Prescl);
   t->SetBranchAddress("L1_DoubleEG3", &tHlts.L1_DoubleEG3, &tHlts.b_L1_DoubleEG3);
   t->SetBranchAddress("L1_DoubleEG3_Prescl", &tHlts.L1_DoubleEG3_Prescl, &tHlts.b_L1_DoubleEG3_Prescl);
   t->SetBranchAddress("L1_DoubleEG3_BptxAND", &tHlts.L1_DoubleEG3_BptxAND, &tHlts.b_L1_DoubleEG3_BptxAND);
   t->SetBranchAddress("L1_DoubleEG3_BptxAND_Prescl", &tHlts.L1_DoubleEG3_BptxAND_Prescl, &tHlts.b_L1_DoubleEG3_BptxAND_Prescl);
   t->SetBranchAddress("L1_DoubleEG5_BptxAND", &tHlts.L1_DoubleEG5_BptxAND, &tHlts.b_L1_DoubleEG5_BptxAND);
   t->SetBranchAddress("L1_DoubleEG5_BptxAND_Prescl", &tHlts.L1_DoubleEG5_BptxAND_Prescl, &tHlts.b_L1_DoubleEG5_BptxAND_Prescl);
   t->SetBranchAddress("L1_DoubleEG8_BptxAND", &tHlts.L1_DoubleEG8_BptxAND, &tHlts.b_L1_DoubleEG8_BptxAND);
   t->SetBranchAddress("L1_DoubleEG8_BptxAND_Prescl", &tHlts.L1_DoubleEG8_BptxAND_Prescl, &tHlts.b_L1_DoubleEG8_BptxAND_Prescl);
   t->SetBranchAddress("L1_DoubleForJet32_EtaOpp", &tHlts.L1_DoubleForJet32_EtaOpp, &tHlts.b_L1_DoubleForJet32_EtaOpp);
   t->SetBranchAddress("L1_DoubleForJet32_EtaOpp_Prescl", &tHlts.L1_DoubleForJet32_EtaOpp_Prescl, &tHlts.b_L1_DoubleForJet32_EtaOpp_Prescl);
   t->SetBranchAddress("L1_DoubleForJet44_EtaOpp", &tHlts.L1_DoubleForJet44_EtaOpp, &tHlts.b_L1_DoubleForJet44_EtaOpp);
   t->SetBranchAddress("L1_DoubleForJet44_EtaOpp_Prescl", &tHlts.L1_DoubleForJet44_EtaOpp_Prescl, &tHlts.b_L1_DoubleForJet44_EtaOpp_Prescl);
   t->SetBranchAddress("L1_DoubleHfBitCountsRing1_P1N1", &tHlts.L1_DoubleHfBitCountsRing1_P1N1, &tHlts.b_L1_DoubleHfBitCountsRing1_P1N1);
   t->SetBranchAddress("L1_DoubleHfBitCountsRing1_P1N1_Prescl", &tHlts.L1_DoubleHfBitCountsRing1_P1N1_Prescl, &tHlts.b_L1_DoubleHfBitCountsRing1_P1N1_Prescl);
   t->SetBranchAddress("L1_DoubleHfBitCountsRing2_P1N1", &tHlts.L1_DoubleHfBitCountsRing2_P1N1, &tHlts.b_L1_DoubleHfBitCountsRing2_P1N1);
   t->SetBranchAddress("L1_DoubleHfBitCountsRing2_P1N1_Prescl", &tHlts.L1_DoubleHfBitCountsRing2_P1N1_Prescl, &tHlts.b_L1_DoubleHfBitCountsRing2_P1N1_Prescl);
   t->SetBranchAddress("L1_DoubleHfRingEtSumsRing1_P200N200", &tHlts.L1_DoubleHfRingEtSumsRing1_P200N200, &tHlts.b_L1_DoubleHfRingEtSumsRing1_P200N200);
   t->SetBranchAddress("L1_DoubleHfRingEtSumsRing1_P200N200_Prescl", &tHlts.L1_DoubleHfRingEtSumsRing1_P200N200_Prescl, &tHlts.b_L1_DoubleHfRingEtSumsRing1_P200N200_Prescl);
   t->SetBranchAddress("L1_DoubleHfRingEtSumsRing1_P4N4", &tHlts.L1_DoubleHfRingEtSumsRing1_P4N4, &tHlts.b_L1_DoubleHfRingEtSumsRing1_P4N4);
   t->SetBranchAddress("L1_DoubleHfRingEtSumsRing1_P4N4_Prescl", &tHlts.L1_DoubleHfRingEtSumsRing1_P4N4_Prescl, &tHlts.b_L1_DoubleHfRingEtSumsRing1_P4N4_Prescl);
   t->SetBranchAddress("L1_DoubleHfRingEtSumsRing2_P200N200", &tHlts.L1_DoubleHfRingEtSumsRing2_P200N200, &tHlts.b_L1_DoubleHfRingEtSumsRing2_P200N200);
   t->SetBranchAddress("L1_DoubleHfRingEtSumsRing2_P200N200_Prescl", &tHlts.L1_DoubleHfRingEtSumsRing2_P200N200_Prescl, &tHlts.b_L1_DoubleHfRingEtSumsRing2_P200N200_Prescl);
   t->SetBranchAddress("L1_DoubleHfRingEtSumsRing2_P4N4", &tHlts.L1_DoubleHfRingEtSumsRing2_P4N4, &tHlts.b_L1_DoubleHfRingEtSumsRing2_P4N4);
   t->SetBranchAddress("L1_DoubleHfRingEtSumsRing2_P4N4_Prescl", &tHlts.L1_DoubleHfRingEtSumsRing2_P4N4_Prescl, &tHlts.b_L1_DoubleHfRingEtSumsRing2_P4N4_Prescl);
   t->SetBranchAddress("L1_DoubleMu3_BptxAND", &tHlts.L1_DoubleMu3_BptxAND, &tHlts.b_L1_DoubleMu3_BptxAND);
   t->SetBranchAddress("L1_DoubleMu3_BptxAND_Prescl", &tHlts.L1_DoubleMu3_BptxAND_Prescl, &tHlts.b_L1_DoubleMu3_BptxAND_Prescl);
   t->SetBranchAddress("L1_DoubleMuOpen_BptxAND", &tHlts.L1_DoubleMuOpen_BptxAND, &tHlts.b_L1_DoubleMuOpen_BptxAND);
   t->SetBranchAddress("L1_DoubleMuOpen_BptxAND_Prescl", &tHlts.L1_DoubleMuOpen_BptxAND_Prescl, &tHlts.b_L1_DoubleMuOpen_BptxAND_Prescl);
   t->SetBranchAddress("L1_EG2_ZdcCalo_BptxAND", &tHlts.L1_EG2_ZdcCalo_BptxAND, &tHlts.b_L1_EG2_ZdcCalo_BptxAND);
   t->SetBranchAddress("L1_EG2_ZdcCalo_BptxAND_Prescl", &tHlts.L1_EG2_ZdcCalo_BptxAND_Prescl, &tHlts.b_L1_EG2_ZdcCalo_BptxAND_Prescl);
   t->SetBranchAddress("L1_EG2_ZdcCalo_NotHcalHfCoincidencePm_BptxAND", &tHlts.L1_EG2_ZdcCalo_NotHcalHfCoincidencePm_BptxAND, &tHlts.b_L1_EG2_ZdcCalo_NotHcalHfCoincidencePm_BptxAND);
   t->SetBranchAddress("L1_EG2_ZdcCalo_NotHcalHfCoincidencePm_BptxAND_Prescl", &tHlts.L1_EG2_ZdcCalo_NotHcalHfCoincidencePm_BptxAND_Prescl, &tHlts.b_L1_EG2_ZdcCalo_NotHcalHfCoincidencePm_BptxAND_Prescl);
   t->SetBranchAddress("L1_EG5_ZdcCalo_BptxAND", &tHlts.L1_EG5_ZdcCalo_BptxAND, &tHlts.b_L1_EG5_ZdcCalo_BptxAND);
   t->SetBranchAddress("L1_EG5_ZdcCalo_BptxAND_Prescl", &tHlts.L1_EG5_ZdcCalo_BptxAND_Prescl, &tHlts.b_L1_EG5_ZdcCalo_BptxAND_Prescl);
   t->SetBranchAddress("L1_EG5_ZdcCalo_NotHcalHfCoincidencePm_BptxAND", &tHlts.L1_EG5_ZdcCalo_NotHcalHfCoincidencePm_BptxAND, &tHlts.b_L1_EG5_ZdcCalo_NotHcalHfCoincidencePm_BptxAND);
   t->SetBranchAddress("L1_EG5_ZdcCalo_NotHcalHfCoincidencePm_BptxAND_Prescl", &tHlts.L1_EG5_ZdcCalo_NotHcalHfCoincidencePm_BptxAND_Prescl, &tHlts.b_L1_EG5_ZdcCalo_NotHcalHfCoincidencePm_BptxAND_Prescl);
   t->SetBranchAddress("L1_ETM30_BptxAND", &tHlts.L1_ETM30_BptxAND, &tHlts.b_L1_ETM30_BptxAND);
   t->SetBranchAddress("L1_ETM30_BptxAND_Prescl", &tHlts.L1_ETM30_BptxAND_Prescl, &tHlts.b_L1_ETM30_BptxAND_Prescl);
   t->SetBranchAddress("L1_ETM50_BptxAND", &tHlts.L1_ETM50_BptxAND, &tHlts.b_L1_ETM50_BptxAND);
   t->SetBranchAddress("L1_ETM50_BptxAND_Prescl", &tHlts.L1_ETM50_BptxAND_Prescl, &tHlts.b_L1_ETM50_BptxAND_Prescl);
   t->SetBranchAddress("L1_ETT100_BptxAND", &tHlts.L1_ETT100_BptxAND, &tHlts.b_L1_ETT100_BptxAND);
   t->SetBranchAddress("L1_ETT100_BptxAND_Prescl", &tHlts.L1_ETT100_BptxAND_Prescl, &tHlts.b_L1_ETT100_BptxAND_Prescl);
   t->SetBranchAddress("L1_ETT140_BptxAND", &tHlts.L1_ETT140_BptxAND, &tHlts.b_L1_ETT140_BptxAND);
   t->SetBranchAddress("L1_ETT140_BptxAND_Prescl", &tHlts.L1_ETT140_BptxAND_Prescl, &tHlts.b_L1_ETT140_BptxAND_Prescl);
   t->SetBranchAddress("L1_ETT2000", &tHlts.L1_ETT2000, &tHlts.b_L1_ETT2000);
   t->SetBranchAddress("L1_ETT2000_Prescl", &tHlts.L1_ETT2000_Prescl, &tHlts.b_L1_ETT2000_Prescl);
   t->SetBranchAddress("L1_ETT220_BptxAND", &tHlts.L1_ETT220_BptxAND, &tHlts.b_L1_ETT220_BptxAND);
   t->SetBranchAddress("L1_ETT220_BptxAND_Prescl", &tHlts.L1_ETT220_BptxAND_Prescl, &tHlts.b_L1_ETT220_BptxAND_Prescl);
   t->SetBranchAddress("L1_ETT70_BptxAND", &tHlts.L1_ETT70_BptxAND, &tHlts.b_L1_ETT70_BptxAND);
   t->SetBranchAddress("L1_ETT70_BptxAND_Prescl", &tHlts.L1_ETT70_BptxAND_Prescl, &tHlts.b_L1_ETT70_BptxAND_Prescl);
   t->SetBranchAddress("L1_ETT800", &tHlts.L1_ETT800, &tHlts.b_L1_ETT800);
   t->SetBranchAddress("L1_ETT800_Prescl", &tHlts.L1_ETT800_Prescl, &tHlts.b_L1_ETT800_Prescl);
   t->SetBranchAddress("L1_HcalHfCoincPm_BptxAND", &tHlts.L1_HcalHfCoincPm_BptxAND, &tHlts.b_L1_HcalHfCoincPm_BptxAND);
   t->SetBranchAddress("L1_HcalHfCoincPm_BptxAND_Prescl", &tHlts.L1_HcalHfCoincPm_BptxAND_Prescl, &tHlts.b_L1_HcalHfCoincPm_BptxAND_Prescl);
   t->SetBranchAddress("L1_HcalHfCoincidencePm", &tHlts.L1_HcalHfCoincidencePm, &tHlts.b_L1_HcalHfCoincidencePm);
   t->SetBranchAddress("L1_HcalHfCoincidencePm_Prescl", &tHlts.L1_HcalHfCoincidencePm_Prescl, &tHlts.b_L1_HcalHfCoincidencePm_Prescl);
   t->SetBranchAddress("L1_HcalHfCoincidencePm_BptxOR", &tHlts.L1_HcalHfCoincidencePm_BptxOR, &tHlts.b_L1_HcalHfCoincidencePm_BptxOR);
   t->SetBranchAddress("L1_HcalHfCoincidencePm_BptxOR_Prescl", &tHlts.L1_HcalHfCoincidencePm_BptxOR_Prescl, &tHlts.b_L1_HcalHfCoincidencePm_BptxOR_Prescl);
   t->SetBranchAddress("L1_HcalHfCoincidencePm_BptxXOR", &tHlts.L1_HcalHfCoincidencePm_BptxXOR, &tHlts.b_L1_HcalHfCoincidencePm_BptxXOR);
   t->SetBranchAddress("L1_HcalHfCoincidencePm_BptxXOR_Prescl", &tHlts.L1_HcalHfCoincidencePm_BptxXOR_Prescl, &tHlts.b_L1_HcalHfCoincidencePm_BptxXOR_Prescl);
   t->SetBranchAddress("L1_HcalHfMmOrPpOrPm", &tHlts.L1_HcalHfMmOrPpOrPm, &tHlts.b_L1_HcalHfMmOrPpOrPm);
   t->SetBranchAddress("L1_HcalHfMmOrPpOrPm_Prescl", &tHlts.L1_HcalHfMmOrPpOrPm_Prescl, &tHlts.b_L1_HcalHfMmOrPpOrPm_Prescl);
   t->SetBranchAddress("L1_HcalHfMmpOrMpp", &tHlts.L1_HcalHfMmpOrMpp, &tHlts.b_L1_HcalHfMmpOrMpp);
   t->SetBranchAddress("L1_HcalHfMmpOrMpp_Prescl", &tHlts.L1_HcalHfMmpOrMpp_Prescl, &tHlts.b_L1_HcalHfMmpOrMpp_Prescl);
   t->SetBranchAddress("L1_HcalHoTotalOR", &tHlts.L1_HcalHoTotalOR, &tHlts.b_L1_HcalHoTotalOR);
   t->SetBranchAddress("L1_HcalHoTotalOR_Prescl", &tHlts.L1_HcalHoTotalOR_Prescl, &tHlts.b_L1_HcalHoTotalOR_Prescl);
   t->SetBranchAddress("L1_MuOpen_ZdcCalo_BptxAND", &tHlts.L1_MuOpen_ZdcCalo_BptxAND, &tHlts.b_L1_MuOpen_ZdcCalo_BptxAND);
   t->SetBranchAddress("L1_MuOpen_ZdcCalo_BptxAND_Prescl", &tHlts.L1_MuOpen_ZdcCalo_BptxAND_Prescl, &tHlts.b_L1_MuOpen_ZdcCalo_BptxAND_Prescl);
   t->SetBranchAddress("L1_MuOpen_ZdcCalo_NotHcalHfCoincidencePm_BptxAND", &tHlts.L1_MuOpen_ZdcCalo_NotHcalHfCoincidencePm_BptxAND, &tHlts.b_L1_MuOpen_ZdcCalo_NotHcalHfCoincidencePm_BptxAND);
   t->SetBranchAddress("L1_MuOpen_ZdcCalo_NotHcalHfCoincidencePm_BptxAND_Prescl", &tHlts.L1_MuOpen_ZdcCalo_NotHcalHfCoincidencePm_BptxAND_Prescl, &tHlts.b_L1_MuOpen_ZdcCalo_NotHcalHfCoincidencePm_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleEG12", &tHlts.L1_SingleEG12, &tHlts.b_L1_SingleEG12);
   t->SetBranchAddress("L1_SingleEG12_Prescl", &tHlts.L1_SingleEG12_Prescl, &tHlts.b_L1_SingleEG12_Prescl);
   t->SetBranchAddress("L1_SingleEG12_BptxAND", &tHlts.L1_SingleEG12_BptxAND, &tHlts.b_L1_SingleEG12_BptxAND);
   t->SetBranchAddress("L1_SingleEG12_BptxAND_Prescl", &tHlts.L1_SingleEG12_BptxAND_Prescl, &tHlts.b_L1_SingleEG12_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleEG15", &tHlts.L1_SingleEG15, &tHlts.b_L1_SingleEG15);
   t->SetBranchAddress("L1_SingleEG15_Prescl", &tHlts.L1_SingleEG15_Prescl, &tHlts.b_L1_SingleEG15_Prescl);
   t->SetBranchAddress("L1_SingleEG15_BptxAND", &tHlts.L1_SingleEG15_BptxAND, &tHlts.b_L1_SingleEG15_BptxAND);
   t->SetBranchAddress("L1_SingleEG15_BptxAND_Prescl", &tHlts.L1_SingleEG15_BptxAND_Prescl, &tHlts.b_L1_SingleEG15_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleEG18", &tHlts.L1_SingleEG18, &tHlts.b_L1_SingleEG18);
   t->SetBranchAddress("L1_SingleEG18_Prescl", &tHlts.L1_SingleEG18_Prescl, &tHlts.b_L1_SingleEG18_Prescl);
   t->SetBranchAddress("L1_SingleEG20", &tHlts.L1_SingleEG20, &tHlts.b_L1_SingleEG20);
   t->SetBranchAddress("L1_SingleEG20_Prescl", &tHlts.L1_SingleEG20_Prescl, &tHlts.b_L1_SingleEG20_Prescl);
   t->SetBranchAddress("L1_SingleEG22", &tHlts.L1_SingleEG22, &tHlts.b_L1_SingleEG22);
   t->SetBranchAddress("L1_SingleEG22_Prescl", &tHlts.L1_SingleEG22_Prescl, &tHlts.b_L1_SingleEG22_Prescl);
   t->SetBranchAddress("L1_SingleEG2_BptxAND", &tHlts.L1_SingleEG2_BptxAND, &tHlts.b_L1_SingleEG2_BptxAND);
   t->SetBranchAddress("L1_SingleEG2_BptxAND_Prescl", &tHlts.L1_SingleEG2_BptxAND_Prescl, &tHlts.b_L1_SingleEG2_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleEG30", &tHlts.L1_SingleEG30, &tHlts.b_L1_SingleEG30);
   t->SetBranchAddress("L1_SingleEG30_Prescl", &tHlts.L1_SingleEG30_Prescl, &tHlts.b_L1_SingleEG30_Prescl);
   t->SetBranchAddress("L1_SingleEG5_BptxAND", &tHlts.L1_SingleEG5_BptxAND, &tHlts.b_L1_SingleEG5_BptxAND);
   t->SetBranchAddress("L1_SingleEG5_BptxAND_Prescl", &tHlts.L1_SingleEG5_BptxAND_Prescl, &tHlts.b_L1_SingleEG5_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleEG8_BptxAND", &tHlts.L1_SingleEG8_BptxAND, &tHlts.b_L1_SingleEG8_BptxAND);
   t->SetBranchAddress("L1_SingleEG8_BptxAND_Prescl", &tHlts.L1_SingleEG8_BptxAND_Prescl, &tHlts.b_L1_SingleEG8_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleMu0_BptxAND", &tHlts.L1_SingleMu0_BptxAND, &tHlts.b_L1_SingleMu0_BptxAND);
   t->SetBranchAddress("L1_SingleMu0_BptxAND_Prescl", &tHlts.L1_SingleMu0_BptxAND_Prescl, &tHlts.b_L1_SingleMu0_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleMu10", &tHlts.L1_SingleMu10, &tHlts.b_L1_SingleMu10);
   t->SetBranchAddress("L1_SingleMu10_Prescl", &tHlts.L1_SingleMu10_Prescl, &tHlts.b_L1_SingleMu10_Prescl);
   t->SetBranchAddress("L1_SingleMu14", &tHlts.L1_SingleMu14, &tHlts.b_L1_SingleMu14);
   t->SetBranchAddress("L1_SingleMu14_Prescl", &tHlts.L1_SingleMu14_Prescl, &tHlts.b_L1_SingleMu14_Prescl);
   t->SetBranchAddress("L1_SingleMu20", &tHlts.L1_SingleMu20, &tHlts.b_L1_SingleMu20);
   t->SetBranchAddress("L1_SingleMu20_Prescl", &tHlts.L1_SingleMu20_Prescl, &tHlts.b_L1_SingleMu20_Prescl);
   t->SetBranchAddress("L1_SingleMu3_BptxAND", &tHlts.L1_SingleMu3_BptxAND, &tHlts.b_L1_SingleMu3_BptxAND);
   t->SetBranchAddress("L1_SingleMu3_BptxAND_Prescl", &tHlts.L1_SingleMu3_BptxAND_Prescl, &tHlts.b_L1_SingleMu3_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleMu5_BptxAND", &tHlts.L1_SingleMu5_BptxAND, &tHlts.b_L1_SingleMu5_BptxAND);
   t->SetBranchAddress("L1_SingleMu5_BptxAND_Prescl", &tHlts.L1_SingleMu5_BptxAND_Prescl, &tHlts.b_L1_SingleMu5_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleMu7", &tHlts.L1_SingleMu7, &tHlts.b_L1_SingleMu7);
   t->SetBranchAddress("L1_SingleMu7_Prescl", &tHlts.L1_SingleMu7_Prescl, &tHlts.b_L1_SingleMu7_Prescl);
   t->SetBranchAddress("L1_SingleMuBeamHalo", &tHlts.L1_SingleMuBeamHalo, &tHlts.b_L1_SingleMuBeamHalo);
   t->SetBranchAddress("L1_SingleMuBeamHalo_Prescl", &tHlts.L1_SingleMuBeamHalo_Prescl, &tHlts.b_L1_SingleMuBeamHalo_Prescl);
   t->SetBranchAddress("L1_SingleMuOpen_BptxAND", &tHlts.L1_SingleMuOpen_BptxAND, &tHlts.b_L1_SingleMuOpen_BptxAND);
   t->SetBranchAddress("L1_SingleMuOpen_BptxAND_Prescl", &tHlts.L1_SingleMuOpen_BptxAND_Prescl, &tHlts.b_L1_SingleMuOpen_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleJet128", &tHlts.L1_SingleJet128, &tHlts.b_L1_SingleJet128);
   t->SetBranchAddress("L1_SingleJet128_Prescl", &tHlts.L1_SingleJet128_Prescl, &tHlts.b_L1_SingleJet128_Prescl);
   t->SetBranchAddress("L1_SingleJet128_BptxAND", &tHlts.L1_SingleJet128_BptxAND, &tHlts.b_L1_SingleJet128_BptxAND);
   t->SetBranchAddress("L1_SingleJet128_BptxAND_Prescl", &tHlts.L1_SingleJet128_BptxAND_Prescl, &tHlts.b_L1_SingleJet128_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleJet128_Central_BptxAND", &tHlts.L1_SingleJet128_Central_BptxAND, &tHlts.b_L1_SingleJet128_Central_BptxAND);
   t->SetBranchAddress("L1_SingleJet128_Central_BptxAND_Prescl", &tHlts.L1_SingleJet128_Central_BptxAND_Prescl, &tHlts.b_L1_SingleJet128_Central_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleJet16", &tHlts.L1_SingleJet16, &tHlts.b_L1_SingleJet16);
   t->SetBranchAddress("L1_SingleJet16_Prescl", &tHlts.L1_SingleJet16_Prescl, &tHlts.b_L1_SingleJet16_Prescl);
   t->SetBranchAddress("L1_SingleJet16_BptxAND", &tHlts.L1_SingleJet16_BptxAND, &tHlts.b_L1_SingleJet16_BptxAND);
   t->SetBranchAddress("L1_SingleJet16_BptxAND_Prescl", &tHlts.L1_SingleJet16_BptxAND_Prescl, &tHlts.b_L1_SingleJet16_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleJet16_Central_NotETT140_BptxAND", &tHlts.L1_SingleJet16_Central_NotETT140_BptxAND, &tHlts.b_L1_SingleJet16_Central_NotETT140_BptxAND);
   t->SetBranchAddress("L1_SingleJet16_Central_NotETT140_BptxAND_Prescl", &tHlts.L1_SingleJet16_Central_NotETT140_BptxAND_Prescl, &tHlts.b_L1_SingleJet16_Central_NotETT140_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleJet20_Central_NotBptxOR_NotMuBeamHalo", &tHlts.L1_SingleJet20_Central_NotBptxOR_NotMuBeamHalo, &tHlts.b_L1_SingleJet20_Central_NotBptxOR_NotMuBeamHalo);
   t->SetBranchAddress("L1_SingleJet20_Central_NotBptxOR_NotMuBeamHalo_Prescl", &tHlts.L1_SingleJet20_Central_NotBptxOR_NotMuBeamHalo_Prescl, &tHlts.b_L1_SingleJet20_Central_NotBptxOR_NotMuBeamHalo_Prescl);
   t->SetBranchAddress("L1_SingleJet32_Central_NotBptxOR_NotMuBeamHalo", &tHlts.L1_SingleJet32_Central_NotBptxOR_NotMuBeamHalo, &tHlts.b_L1_SingleJet32_Central_NotBptxOR_NotMuBeamHalo);
   t->SetBranchAddress("L1_SingleJet32_Central_NotBptxOR_NotMuBeamHalo_Prescl", &tHlts.L1_SingleJet32_Central_NotBptxOR_NotMuBeamHalo_Prescl, &tHlts.b_L1_SingleJet32_Central_NotBptxOR_NotMuBeamHalo_Prescl);
   t->SetBranchAddress("L1_SingleJet36_BptxAND", &tHlts.L1_SingleJet36_BptxAND, &tHlts.b_L1_SingleJet36_BptxAND);
   t->SetBranchAddress("L1_SingleJet36_BptxAND_Prescl", &tHlts.L1_SingleJet36_BptxAND_Prescl, &tHlts.b_L1_SingleJet36_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleJet52_BptxAND", &tHlts.L1_SingleJet52_BptxAND, &tHlts.b_L1_SingleJet52_BptxAND);
   t->SetBranchAddress("L1_SingleJet52_BptxAND_Prescl", &tHlts.L1_SingleJet52_BptxAND_Prescl, &tHlts.b_L1_SingleJet52_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleJet52_Central_BptxAND", &tHlts.L1_SingleJet52_Central_BptxAND, &tHlts.b_L1_SingleJet52_Central_BptxAND);
   t->SetBranchAddress("L1_SingleJet52_Central_BptxAND_Prescl", &tHlts.L1_SingleJet52_Central_BptxAND_Prescl, &tHlts.b_L1_SingleJet52_Central_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleJet68_BptxAND", &tHlts.L1_SingleJet68_BptxAND, &tHlts.b_L1_SingleJet68_BptxAND);
   t->SetBranchAddress("L1_SingleJet68_BptxAND_Prescl", &tHlts.L1_SingleJet68_BptxAND_Prescl, &tHlts.b_L1_SingleJet68_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleJet80_BptxAND", &tHlts.L1_SingleJet80_BptxAND, &tHlts.b_L1_SingleJet80_BptxAND);
   t->SetBranchAddress("L1_SingleJet80_BptxAND_Prescl", &tHlts.L1_SingleJet80_BptxAND_Prescl, &tHlts.b_L1_SingleJet80_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleJet80_Central", &tHlts.L1_SingleJet80_Central, &tHlts.b_L1_SingleJet80_Central);
   t->SetBranchAddress("L1_SingleJet80_Central_Prescl", &tHlts.L1_SingleJet80_Central_Prescl, &tHlts.b_L1_SingleJet80_Central_Prescl);
   t->SetBranchAddress("L1_SingleJet80_Central_BptxAND", &tHlts.L1_SingleJet80_Central_BptxAND, &tHlts.b_L1_SingleJet80_Central_BptxAND);
   t->SetBranchAddress("L1_SingleJet80_Central_BptxAND_Prescl", &tHlts.L1_SingleJet80_Central_BptxAND_Prescl, &tHlts.b_L1_SingleJet80_Central_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleJet92", &tHlts.L1_SingleJet92, &tHlts.b_L1_SingleJet92);
   t->SetBranchAddress("L1_SingleJet92_Prescl", &tHlts.L1_SingleJet92_Prescl, &tHlts.b_L1_SingleJet92_Prescl);
   t->SetBranchAddress("L1_SingleJet92_BptxAND", &tHlts.L1_SingleJet92_BptxAND, &tHlts.b_L1_SingleJet92_BptxAND);
   t->SetBranchAddress("L1_SingleJet92_BptxAND_Prescl", &tHlts.L1_SingleJet92_BptxAND_Prescl, &tHlts.b_L1_SingleJet92_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleJet92_Central", &tHlts.L1_SingleJet92_Central, &tHlts.b_L1_SingleJet92_Central);
   t->SetBranchAddress("L1_SingleJet92_Central_Prescl", &tHlts.L1_SingleJet92_Central_Prescl, &tHlts.b_L1_SingleJet92_Central_Prescl);
   t->SetBranchAddress("L1_SingleJet92_Central_BptxAND", &tHlts.L1_SingleJet92_Central_BptxAND, &tHlts.b_L1_SingleJet92_Central_BptxAND);
   t->SetBranchAddress("L1_SingleJet92_Central_BptxAND_Prescl", &tHlts.L1_SingleJet92_Central_BptxAND_Prescl, &tHlts.b_L1_SingleJet92_Central_BptxAND_Prescl);
   t->SetBranchAddress("L1_SingleTrack12", &tHlts.L1_SingleTrack12, &tHlts.b_L1_SingleTrack12);
   t->SetBranchAddress("L1_SingleTrack12_Prescl", &tHlts.L1_SingleTrack12_Prescl, &tHlts.b_L1_SingleTrack12_Prescl);
   t->SetBranchAddress("L1_SingleTrack16", &tHlts.L1_SingleTrack16, &tHlts.b_L1_SingleTrack16);
   t->SetBranchAddress("L1_SingleTrack16_Prescl", &tHlts.L1_SingleTrack16_Prescl, &tHlts.b_L1_SingleTrack16_Prescl);
   t->SetBranchAddress("L1_SingleTrack20", &tHlts.L1_SingleTrack20, &tHlts.b_L1_SingleTrack20);
   t->SetBranchAddress("L1_SingleTrack20_Prescl", &tHlts.L1_SingleTrack20_Prescl, &tHlts.b_L1_SingleTrack20_Prescl);
   t->SetBranchAddress("L1_ZdcCaloMinus", &tHlts.L1_ZdcCaloMinus, &tHlts.b_L1_ZdcCaloMinus);
   t->SetBranchAddress("L1_ZdcCaloMinus_Prescl", &tHlts.L1_ZdcCaloMinus_Prescl, &tHlts.b_L1_ZdcCaloMinus_Prescl);
   t->SetBranchAddress("L1_ZdcCaloMinus_BptxAND", &tHlts.L1_ZdcCaloMinus_BptxAND, &tHlts.b_L1_ZdcCaloMinus_BptxAND);
   t->SetBranchAddress("L1_ZdcCaloMinus_BptxAND_Prescl", &tHlts.L1_ZdcCaloMinus_BptxAND_Prescl, &tHlts.b_L1_ZdcCaloMinus_BptxAND_Prescl);
   t->SetBranchAddress("L1_ZdcCaloPlus", &tHlts.L1_ZdcCaloPlus, &tHlts.b_L1_ZdcCaloPlus);
   t->SetBranchAddress("L1_ZdcCaloPlus_Prescl", &tHlts.L1_ZdcCaloPlus_Prescl, &tHlts.b_L1_ZdcCaloPlus_Prescl);
   t->SetBranchAddress("L1_ZdcCaloPlus_BptxAND", &tHlts.L1_ZdcCaloPlus_BptxAND, &tHlts.b_L1_ZdcCaloPlus_BptxAND);
   t->SetBranchAddress("L1_ZdcCaloPlus_BptxAND_Prescl", &tHlts.L1_ZdcCaloPlus_BptxAND_Prescl, &tHlts.b_L1_ZdcCaloPlus_BptxAND_Prescl);
   t->SetBranchAddress("L1_ZdcCaloPlus_ZdcCaloMinus", &tHlts.L1_ZdcCaloPlus_ZdcCaloMinus, &tHlts.b_L1_ZdcCaloPlus_ZdcCaloMinus);
   t->SetBranchAddress("L1_ZdcCaloPlus_ZdcCaloMinus_Prescl", &tHlts.L1_ZdcCaloPlus_ZdcCaloMinus_Prescl, &tHlts.b_L1_ZdcCaloPlus_ZdcCaloMinus_Prescl);
   t->SetBranchAddress("L1_ZdcCaloPlus_ZdcCaloMinus_BptxAND", &tHlts.L1_ZdcCaloPlus_ZdcCaloMinus_BptxAND, &tHlts.b_L1_ZdcCaloPlus_ZdcCaloMinus_BptxAND);
   t->SetBranchAddress("L1_ZdcCaloPlus_ZdcCaloMinus_BptxAND_Prescl", &tHlts.L1_ZdcCaloPlus_ZdcCaloMinus_BptxAND_Prescl, &tHlts.b_L1_ZdcCaloPlus_ZdcCaloMinus_BptxAND_Prescl);
   t->SetBranchAddress("L1_ZeroBias", &tHlts.L1_ZeroBias, &tHlts.b_L1_ZeroBias);
   t->SetBranchAddress("L1_ZeroBias_Prescl", &tHlts.L1_ZeroBias_Prescl, &tHlts.b_L1_ZeroBias_Prescl);
   t->SetBranchAddress("L1_q2_10", &tHlts.L1_q2_10, &tHlts.b_L1_q2_10);
   t->SetBranchAddress("L1_q2_10_Prescl", &tHlts.L1_q2_10_Prescl, &tHlts.b_L1_q2_10_Prescl);
   t->SetBranchAddress("L1_q2_4_6", &tHlts.L1_q2_4_6, &tHlts.b_L1_q2_4_6);
   t->SetBranchAddress("L1_q2_4_6_Prescl", &tHlts.L1_q2_4_6_Prescl, &tHlts.b_L1_q2_4_6_Prescl);
   t->SetBranchAddress("L1_q2_6_10", &tHlts.L1_q2_6_10, &tHlts.b_L1_q2_6_10);
   t->SetBranchAddress("L1_q2_6_10_Prescl", &tHlts.L1_q2_6_10_Prescl, &tHlts.b_L1_q2_6_10_Prescl);
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
   t->SetBranchAddress("L1Tech_CASTOR_HaloMuon.v0", &tHlts.L1Tech_CASTOR_HaloMuon_v0, &tHlts.b_L1Tech_CASTOR_HaloMuon_v0);
   t->SetBranchAddress("L1Tech_CASTOR_HaloMuon.v0_Prescl", &tHlts.L1Tech_CASTOR_HaloMuon_v0_Prescl, &tHlts.b_L1Tech_CASTOR_HaloMuon_v0_Prescl);
   t->SetBranchAddress("L1Tech_DT_GlobalOR.v0", &tHlts.L1Tech_DT_GlobalOR_v0, &tHlts.b_L1Tech_DT_GlobalOR_v0);
   t->SetBranchAddress("L1Tech_DT_GlobalOR.v0_Prescl", &tHlts.L1Tech_DT_GlobalOR_v0_Prescl, &tHlts.b_L1Tech_DT_GlobalOR_v0_Prescl);
   t->SetBranchAddress("L1Tech_FSC_St1Sect45_down.v0", &tHlts.L1Tech_FSC_St1Sect45_down_v0, &tHlts.b_L1Tech_FSC_St1Sect45_down_v0);
   t->SetBranchAddress("L1Tech_FSC_St1Sect45_down.v0_Prescl", &tHlts.L1Tech_FSC_St1Sect45_down_v0_Prescl, &tHlts.b_L1Tech_FSC_St1Sect45_down_v0_Prescl);
   t->SetBranchAddress("L1Tech_FSC_St1Sect45_upp.v0", &tHlts.L1Tech_FSC_St1Sect45_upp_v0, &tHlts.b_L1Tech_FSC_St1Sect45_upp_v0);
   t->SetBranchAddress("L1Tech_FSC_St1Sect45_upp.v0_Prescl", &tHlts.L1Tech_FSC_St1Sect45_upp_v0_Prescl, &tHlts.b_L1Tech_FSC_St1Sect45_upp_v0_Prescl);
   t->SetBranchAddress("L1Tech_FSC_St1Sect56_down.v0", &tHlts.L1Tech_FSC_St1Sect56_down_v0, &tHlts.b_L1Tech_FSC_St1Sect56_down_v0);
   t->SetBranchAddress("L1Tech_FSC_St1Sect56_down.v0_Prescl", &tHlts.L1Tech_FSC_St1Sect56_down_v0_Prescl, &tHlts.b_L1Tech_FSC_St1Sect56_down_v0_Prescl);
   t->SetBranchAddress("L1Tech_FSC_St1Sect56_upp.v0", &tHlts.L1Tech_FSC_St1Sect56_upp_v0, &tHlts.b_L1Tech_FSC_St1Sect56_upp_v0);
   t->SetBranchAddress("L1Tech_FSC_St1Sect56_upp.v0_Prescl", &tHlts.L1Tech_FSC_St1Sect56_upp_v0_Prescl, &tHlts.b_L1Tech_FSC_St1Sect56_upp_v0_Prescl);
   t->SetBranchAddress("L1Tech_FSC_St2Sect45_down.v0", &tHlts.L1Tech_FSC_St2Sect45_down_v0, &tHlts.b_L1Tech_FSC_St2Sect45_down_v0);
   t->SetBranchAddress("L1Tech_FSC_St2Sect45_down.v0_Prescl", &tHlts.L1Tech_FSC_St2Sect45_down_v0_Prescl, &tHlts.b_L1Tech_FSC_St2Sect45_down_v0_Prescl);
   t->SetBranchAddress("L1Tech_FSC_St2Sect45_upp.v0", &tHlts.L1Tech_FSC_St2Sect45_upp_v0, &tHlts.b_L1Tech_FSC_St2Sect45_upp_v0);
   t->SetBranchAddress("L1Tech_FSC_St2Sect45_upp.v0_Prescl", &tHlts.L1Tech_FSC_St2Sect45_upp_v0_Prescl, &tHlts.b_L1Tech_FSC_St2Sect45_upp_v0_Prescl);
   t->SetBranchAddress("L1Tech_FSC_St2Sect56_down.v0", &tHlts.L1Tech_FSC_St2Sect56_down_v0, &tHlts.b_L1Tech_FSC_St2Sect56_down_v0);
   t->SetBranchAddress("L1Tech_FSC_St2Sect56_down.v0_Prescl", &tHlts.L1Tech_FSC_St2Sect56_down_v0_Prescl, &tHlts.b_L1Tech_FSC_St2Sect56_down_v0_Prescl);
   t->SetBranchAddress("L1Tech_FSC_St2Sect56_upp.v0", &tHlts.L1Tech_FSC_St2Sect56_upp_v0, &tHlts.b_L1Tech_FSC_St2Sect56_upp_v0);
   t->SetBranchAddress("L1Tech_FSC_St2Sect56_upp.v0_Prescl", &tHlts.L1Tech_FSC_St2Sect56_upp_v0_Prescl, &tHlts.b_L1Tech_FSC_St2Sect56_upp_v0_Prescl);
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
   if (doCheck) {
      if (t->GetMaximum("NL1IsolEm")>8) cout <<"FATAL ERROR: Arrary size of NL1IsolEm too small!!!  "<<t->GetMaximum("NL1IsolEm")<<endl;
      if (t->GetMaximum("NL1NIsolEm")>8) cout <<"FATAL ERROR: Arrary size of NL1NIsolEm too small!!!  "<<t->GetMaximum("NL1NIsolEm")<<endl;
      if (t->GetMaximum("NL1Mu")>8) cout <<"FATAL ERROR: Arrary size of NL1Mu too small!!!  "<<t->GetMaximum("NL1Mu")<<endl;
      if (t->GetMaximum("NL1CenJet")>8) cout <<"FATAL ERROR: Arrary size of NL1CenJet too small!!!  "<<t->GetMaximum("NL1CenJet")<<endl;
      if (t->GetMaximum("NL1ForJet")>8) cout <<"FATAL ERROR: Arrary size of NL1ForJet too small!!!  "<<t->GetMaximum("NL1ForJet")<<endl;
      if (t->GetMaximum("NL1Tau")>8) cout <<"FATAL ERROR: Arrary size of NL1Tau too small!!!  "<<t->GetMaximum("NL1Tau")<<endl;
   }
}

