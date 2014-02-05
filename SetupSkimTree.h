//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Feb  1 19:17:02 2013 by ROOT version 5.32/00
// from TTree HltTree/
// found on file: root://eoscms//eos/cms/store/caf/user/yjlee/pPb2013/promptReco/PA2013_HiForest_PromptRecofirstPR_forestv68.root
//////////////////////////////////////////////////////////
#include "commonSetup.h"
#include <iostream>
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TTree.h>
#include <TBranch.h>

class Skims {
public :
   Skims(){};
   ~Skims(){};

   // Declaration of leaf types
   Int_t           superFilterPath;
   Int_t           reco_extra;
   Int_t           reco_extra_jet;
   Int_t           pat_step;
   Int_t           ana_step;
   Int_t           pcollisionEventSelection;
   Int_t           pHBHENoiseFilter;
   Int_t           phiEcalRecHitSpikeFilter;
   Int_t           pPAcollisionEventSelectionPA;
   Int_t           phfPosFilter3;
   Int_t           phfNegFilter3;
   Int_t           phfPosFilter2;
   Int_t           phfNegFilter2;
   Int_t           phfPosFilter1;
   Int_t           phfNegFilter1;
   Int_t           phltPixelClusterShapeFilter;
   Int_t           pprimaryvertexFilter;
   Int_t           phfCoincFilter;
   Int_t           ppurityFractionFilter;
   Int_t           pBeamScrapingFilter;
   Int_t           pVertexFilterCutG;
   Int_t           pVertexFilterCutGloose;
   Int_t           pVertexFilterCutGtight;
   Int_t           pVertexFilterCutE;
   Int_t           pVertexFilterCutEandG;
   Int_t           pVertexFilterCutGplus;
   Int_t           hltAna;

   // List of branches
   TBranch        *b_superFilterPath;   //!
   TBranch        *b_reco_extra;   //!
   TBranch        *b_reco_extra_jet;   //!
   TBranch        *b_pat_step;   //!
   TBranch        *b_ana_step;   //!
   TBranch        *b_pcollisionEventSelection;   //!
   TBranch        *b_pHBHENoiseFilter;   //!
   TBranch        *b_phiEcalRecHitSpikeFilter;   //!
   TBranch        *b_pPAcollisionEventSelectionPA;   //!
   TBranch        *b_phfPosFilter3;   //!
   TBranch        *b_phfNegFilter3;   //!
   TBranch        *b_phfPosFilter2;   //!
   TBranch        *b_phfNegFilter2;   //!
   TBranch        *b_phfPosFilter1;   //!
   TBranch        *b_phfNegFilter1;   //!
   TBranch        *b_phltPixelClusterShapeFilter;   //!
   TBranch        *b_pprimaryvertexFilter;   //!
   TBranch        *b_phfCoincFilter;   //!
   TBranch        *b_ppurityFractionFilter;   //!
   TBranch        *b_pBeamScrapingFilter;   //!
   TBranch        *b_pVertexFilterCutG;   //!
   TBranch        *b_pVertexFilterCutGloose;   //!
   TBranch        *b_pVertexFilterCutGtight;   //!
   TBranch        *b_pVertexFilterCutE;   //!
   TBranch        *b_pVertexFilterCutEandG;   //!
   TBranch        *b_pVertexFilterCutGplus;
   TBranch        *b_hltAna;   //!

};


void setupSkimTree(TTree *t,Skims &tSkims,bool doCheck = 1)
{
   // Set branch addresses and branch pointers
   t->SetBranchAddress("superFilterPath", &tSkims.superFilterPath, &tSkims.b_superFilterPath);
   t->SetBranchAddress("reco_extra", &tSkims.reco_extra, &tSkims.b_reco_extra);
   t->SetBranchAddress("reco_extra_jet", &tSkims.reco_extra_jet, &tSkims.b_reco_extra_jet);
   t->SetBranchAddress("pat_step", &tSkims.pat_step, &tSkims.b_pat_step);
   t->SetBranchAddress("ana_step", &tSkims.ana_step, &tSkims.b_ana_step);
   t->SetBranchAddress("pcollisionEventSelection", &tSkims.pcollisionEventSelection, &tSkims.b_pcollisionEventSelection);
   t->SetBranchAddress("pHBHENoiseFilter", &tSkims.pHBHENoiseFilter, &tSkims.b_pHBHENoiseFilter);
   t->SetBranchAddress("phiEcalRecHitSpikeFilter", &tSkims.phiEcalRecHitSpikeFilter, &tSkims.b_phiEcalRecHitSpikeFilter);
   t->SetBranchAddress("pPAcollisionEventSelectionPA", &tSkims.pPAcollisionEventSelectionPA, &tSkims.b_pPAcollisionEventSelectionPA);
   t->SetBranchAddress("phfPosFilter3", &tSkims.phfPosFilter3, &tSkims.b_phfPosFilter3);
   t->SetBranchAddress("phfNegFilter3", &tSkims.phfNegFilter3, &tSkims.b_phfNegFilter3);
   t->SetBranchAddress("phfPosFilter2", &tSkims.phfPosFilter2, &tSkims.b_phfPosFilter2);
   t->SetBranchAddress("phfNegFilter2", &tSkims.phfNegFilter2, &tSkims.b_phfNegFilter2);
   t->SetBranchAddress("phfPosFilter1", &tSkims.phfPosFilter1, &tSkims.b_phfPosFilter1);
   t->SetBranchAddress("phfNegFilter1", &tSkims.phfNegFilter1, &tSkims.b_phfNegFilter1);
   t->SetBranchAddress("phltPixelClusterShapeFilter", &tSkims.phltPixelClusterShapeFilter, &tSkims.b_phltPixelClusterShapeFilter);
   t->SetBranchAddress("pprimaryvertexFilter", &tSkims.pprimaryvertexFilter, &tSkims.b_pprimaryvertexFilter);
   t->SetBranchAddress("pBeamScrapingFilter", &tSkims.pBeamScrapingFilter, &tSkims.b_pBeamScrapingFilter);
   t->SetBranchAddress("phfCoincFilter", &tSkims.phfCoincFilter, &tSkims.b_phfCoincFilter);
   t->SetBranchAddress("ppurityFractionFilter", &tSkims.ppurityFractionFilter, &tSkims.b_ppurityFractionFilter);
   t->SetBranchAddress("pVertexFilterCutG", &tSkims.pVertexFilterCutG, &tSkims.b_pVertexFilterCutG);
   t->SetBranchAddress("pVertexFilterCutGloose", &tSkims.pVertexFilterCutGloose, &tSkims.b_pVertexFilterCutGloose);
   t->SetBranchAddress("pVertexFilterCutGtight", &tSkims.pVertexFilterCutGtight, &tSkims.b_pVertexFilterCutGtight);
   t->SetBranchAddress("pVertexFilterCutE", &tSkims.pVertexFilterCutE, &tSkims.b_pVertexFilterCutE);
   t->SetBranchAddress("pVertexFilterCutEandG", &tSkims.pVertexFilterCutEandG, &tSkims.b_pVertexFilterCutEandG);
   t->SetBranchAddress("pVertexFilterCutGplus", &tSkims.pVertexFilterCutGplus, &tSkims.b_pVertexFilterCutGplus);

   t->SetBranchAddress("hltAna", &tSkims.hltAna, &tSkims.b_hltAna);
   if (doCheck) {
   }
}

