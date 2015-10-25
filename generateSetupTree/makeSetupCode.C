#include "makeClass.h"

void makeSetupCode(
		   char *infname = "root://eoscms//eos/cms/store/caf/user/yjlee/pPb2013/promptReco/PA2013_HiForest_PromptRecofirstPR_forestv68.root"
		   ){
  
  TFile *inf = TFile::Open(infname);  

  TTree *hltTree      = (TTree*) inf->Get("hltanalysis/HltTree");
  TTree *skimTree     = (TTree*) inf->Get("skimanalysis/HltTree");
//  TTree *photonTree   = (TTree*) inf->Get("multiPhotonAnalyzer/photon");
  TTree *photonTree   = (TTree*) inf->Get("ggHiNtuplizer/EventTree");
  TTree *evtTree      = (TTree*) inf->Get("hiEvtAnalyzer/HiTree");

  TTree *jetTree      = (TTree*) inf->Get("akPu3PFJetAnalyzer/t");
  TTree *hitTree      = (TTree*) inf->Get("rechitanalyzer/zdcrechit");
  TTree *digiTree      = (TTree*) inf->Get("rechitanalyzer/zdcdigi");

  TTree *noiseTree      = (TTree*) inf->Get("hcalNoise/hbhenoise");
//  TTree *trackTree      = (TTree*) inf->Get("ppTrack/trackTree");
  TTree *trackTree      = (TTree*) inf->Get("anaTrack/trackTree");

  TTree *metTree      = (TTree*) inf->Get("anaMET/metTree");
  TTree *pfTree      = (TTree*) inf->Get("pfcandAnalyzer/pfTree");
  TTree *muonTree      = (TTree*) inf->Get("muonTree/HLTMuTree");

  TTree *genTree      = (TTree*) inf->Get("HiGenParticleAna/hi");

  // Add Dummy for skimTree
  
  if (hltTree) makeClass(hltTree,"Hlt","");
  if (skimTree) makeClass(skimTree,"Skim","");
  if (photonTree) makeClass(photonTree,"Photon","");
  if (evtTree) makeClass(evtTree,"Evt","");
  if (trackTree) makeClass(trackTree,"Track","");
  if (jetTree) makeClass(jetTree,"Jet","");
  //  if (hitTree) makeClass(hitTree,"Hit","");
  if (metTree) makeClass(metTree,"Met","");
  if (pfTree) makeClass(pfTree,"PF","");

  if (noiseTree) makeClass(noiseTree,"Noise","");
  if (digiTree) makeClass(digiTree,"Digi","");
  if (muonTree) makeClass(muonTree,"Muon","");

  if (genTree) makeClass(genTree,"GenParticle","");


}
