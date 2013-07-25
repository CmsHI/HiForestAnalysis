//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Sun Jul  8 19:18:37 2012 by ROOT version 5.27/06b
// from TTree hbhe/v1
// found on file: /d102/yjlee/hiForest2MC/Pythia80_HydjetDrum_mix01_HiForest2_v20.root
//////////////////////////////////////////////////////////
#include "commonSetup.h"
#include <iostream>
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TTree.h>
#include <TBranch.h>

class Hits {
public :
   Hits(){};
   ~Hits(){};

   // Declaration of leaf types
   Int_t           n;
   Float_t         e[6000];   //[n]
   Float_t         et[6000];   //[n]
   Float_t         eta[6000];   //[n]
   Float_t         phi[6000];   //[n]
   Float_t         perp[6000];   //[n]
   Bool_t          isjet[6000];   //[n]
   Int_t           depth[6000];   //[n]

   // List of branches
   TBranch        *b_n;   //!
   TBranch        *b_e;   //!
   TBranch        *b_et;   //!
   TBranch        *b_eta;   //!
   TBranch        *b_phi;   //!
   TBranch        *b_perp;   //!
   TBranch        *b_isjet;   //!
   TBranch        *b_depth;   //!

};


void setupHitTree(TTree *t,Hits &tHits,bool doCheck = 0)
{
   // Set branch addresses and branch pointers
   if (t->GetBranch("n")) t->SetBranchAddress("n", &tHits.n, &tHits.b_n);
   if (t->GetBranch("e")) t->SetBranchAddress("e", tHits.e, &tHits.b_e);
   if (t->GetBranch("et")) t->SetBranchAddress("et", tHits.et, &tHits.b_et);
   if (t->GetBranch("eta")) t->SetBranchAddress("eta", tHits.eta, &tHits.b_eta);
   if (t->GetBranch("phi")) t->SetBranchAddress("phi", tHits.phi, &tHits.b_phi);
   if (t->GetBranch("perp")) t->SetBranchAddress("perp", tHits.perp, &tHits.b_perp);
   if (t->GetBranch("isjet")) t->SetBranchAddress("isjet", tHits.isjet, &tHits.b_isjet);
   if (t->GetBranch("depth")) t->SetBranchAddress("depth", tHits.depth, &tHits.b_depth);
   if (doCheck) {
      if (t->GetMaximum("n")>6000) { cout <<"FATAL ERROR: Arrary size of n too small!!!  "<<t->GetMaximum("n")<<endl; exit(0);
 }   }
}

