//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Sun Jul  8 19:18:37 2012 by ROOT version 5.27/06b
// from TTree photon/Tree of Rechits around photon
// found on file: /d102/yjlee/hiForest2MC/Pythia80_HydjetDrum_mix01_HiForest2_v20.root
//////////////////////////////////////////////////////////
#include "commonSetup.h"
#include <iostream>
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TTree.h>
#include <TBranch.h>

using namespace std;

class Genps {
public :
   Genps(){};
   ~Genps(){};

   // Declaration of leaf types
   Int_t           cBin;
   Float_t         hf;
   Int_t           nPar;
   Float_t         recoVtxZ;
   Float_t         et[372];   //[nPar]
   Float_t         eta[372];   //[nPar]
   Float_t         phi[372];   //[nPar]
   Int_t           id[372];   //[nPar]
   Int_t           momId[372];   //[nPar]
   Int_t           status[372];   //[nPar]
   Int_t           collId[372];   //[nPar]

   // List of branches
   TBranch        *b_cBin;   //!
   TBranch        *b_hf;   //!
   TBranch        *b_nPar;   //!
   TBranch        *b_recoVtxZ;   //!
   TBranch        *b_et;   //!
   TBranch        *b_eta;   //!
   TBranch        *b_phi;   //!
   TBranch        *b_id;   //!
   TBranch        *b_momId;   //!
   TBranch        *b_status;   //!
   TBranch        *b_collId;   //!

};


void setupGenpTree(TTree *t,Genps &tGenps,bool doCheck = 1)
{
   // Set branch addresses and branch pointers
   if (t->GetBranch("cBin")) t->SetBranchAddress("cBin", &tGenps.cBin, &tGenps.b_cBin);
   if (t->GetBranch("hf")) t->SetBranchAddress("hf", &tGenps.hf, &tGenps.b_hf);
   if (t->GetBranch("nPar")) t->SetBranchAddress("nPar", &tGenps.nPar, &tGenps.b_nPar);
   if (t->GetBranch("recoVtxZ")) t->SetBranchAddress("recoVtxZ", &tGenps.recoVtxZ, &tGenps.b_recoVtxZ);
   if (t->GetBranch("et")) t->SetBranchAddress("et", tGenps.et, &tGenps.b_et);
   if (t->GetBranch("eta")) t->SetBranchAddress("eta", tGenps.eta, &tGenps.b_eta);
   if (t->GetBranch("phi")) t->SetBranchAddress("phi", tGenps.phi, &tGenps.b_phi);
   if (t->GetBranch("id")) t->SetBranchAddress("id", tGenps.id, &tGenps.b_id);
   if (t->GetBranch("momId")) t->SetBranchAddress("momId", tGenps.momId, &tGenps.b_momId);
   if (t->GetBranch("status")) t->SetBranchAddress("status", tGenps.status, &tGenps.b_status);
   if (t->GetBranch("collId")) t->SetBranchAddress("collId", tGenps.collId, &tGenps.b_collId);
   if (doCheck) {
      if (t->GetMaximum("nPar")>372) { cout <<"FATAL ERROR: Arrary size of nPar too small!!!  "<<t->GetMaximum("nPar")<<endl; exit(0);
 }   }
}

