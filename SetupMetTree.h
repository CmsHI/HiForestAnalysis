//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Sun Jul  8 19:18:37 2012 by ROOT version 5.27/06b
// from TTree metTree/v1
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

class Mets {
public :
   Mets(){};
   ~Mets(){};

   // Declaration of leaf types
   Int_t           nEv;
   Int_t           nLumi;
   Int_t           nBX;
   Int_t           nRun;
   Int_t           nMET;
   Float_t         MET[52];   //[nMET]
   Float_t         METPhi[52];   //[nMET]
   Float_t         SumEt[52];   //[nMET]

   // List of branches
   TBranch        *b_nEv;   //!
   TBranch        *b_nLumi;   //!
   TBranch        *b_nBX;   //!
   TBranch        *b_nRun;   //!
   TBranch        *b_nMET;   //!
   TBranch        *b_MET;   //!
   TBranch        *b_METPhi;   //!
   TBranch        *b_SumEt;   //!

};


void setupMetTree(TTree *t,Mets &tMets,bool doCheck = 1)
{
   // Set branch addresses and branch pointers
   if (t->GetBranch("nEv")) t->SetBranchAddress("nEv", &tMets.nEv, &tMets.b_nEv);
   if (t->GetBranch("nLumi")) t->SetBranchAddress("nLumi", &tMets.nLumi, &tMets.b_nLumi);
   if (t->GetBranch("nBX")) t->SetBranchAddress("nBX", &tMets.nBX, &tMets.b_nBX);
   if (t->GetBranch("nRun")) t->SetBranchAddress("nRun", &tMets.nRun, &tMets.b_nRun);
   if (t->GetBranch("nMET")) t->SetBranchAddress("nMET", &tMets.nMET, &tMets.b_nMET);
   if (t->GetBranch("MET")) t->SetBranchAddress("MET", tMets.MET, &tMets.b_MET);
   if (t->GetBranch("METPhi")) t->SetBranchAddress("METPhi", tMets.METPhi, &tMets.b_METPhi);
   if (t->GetBranch("SumEt")) t->SetBranchAddress("SumEt", tMets.SumEt, &tMets.b_SumEt);
   if (doCheck) {
      if (t->GetMaximum("nMET")>52) { cout <<"FATAL ERROR: Arrary size of nMET too small!!!  "<<t->GetMaximum("nMET")<<endl; exit(0);
 }   }
}

