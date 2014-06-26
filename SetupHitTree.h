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

using namespace std;

class Hits {
public :
   Hits(){};
   ~Hits(){};

   // Declaration of leaf types
   Int_t           n;
   Float_t         e[maxHits];   //[n]
   Float_t         et[maxHits];   //[n]
   Float_t         vsPt[maxHits]; //[n]
   Float_t         eta[maxHits];   //[n]
   Float_t         phi[maxHits];   //[n]
   Float_t         perp[maxHits];   //[n]
   Bool_t          isjet[maxHits];   //[n]
   Int_t           depth[maxHits];   //[n]

   // List of branches
   TBranch        *b_n;   //!
   TBranch        *b_e;   //!
   TBranch        *b_et;   //!
   TBranch        *b_vsPt;   //!
   TBranch        *b_eta;   //!
   TBranch        *b_phi;   //!
   TBranch        *b_perp;   //!
   TBranch        *b_isjet;   //!
   TBranch        *b_depth;   //!

};


void setupHitTree(TTree *t,Hits &tHits,bool doCheck = 1)
{
   // Set branch addresses and branch pointers
   if (t->GetBranch("n")) t->SetBranchAddress("n", &tHits.n, &tHits.b_n);
   if (t->GetBranch("e")) t->SetBranchAddress("e", tHits.e, &tHits.b_e);
   if (t->GetBranch("et")) t->SetBranchAddress("et", tHits.et, &tHits.b_et);
   if (t->GetBranch("vsPt")) t->SetBranchAddress("vsPt", tHits.vsPt, &tHits.b_vsPt);
   if (t->GetBranch("eta")) t->SetBranchAddress("eta", tHits.eta, &tHits.b_eta);
   if (t->GetBranch("phi")) t->SetBranchAddress("phi", tHits.phi, &tHits.b_phi);
   if (t->GetBranch("perp")) t->SetBranchAddress("perp", tHits.perp, &tHits.b_perp);
   if (t->GetBranch("isjet")) t->SetBranchAddress("isjet", tHits.isjet, &tHits.b_isjet);
   if (t->GetBranch("depth")) t->SetBranchAddress("depth", tHits.depth, &tHits.b_depth);
   if (doCheck) {
      if (t->GetMaximum("n")>maxHits) { cout <<"FATAL ERROR: Arrary size of n too small!!!  "<<t->GetMaximum("n")<<endl; exit(0);
 }   }
}

