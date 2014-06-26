//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Sun Jul  8 19:18:37 2012 by ROOT version 5.27/06b
// from TTree pfTree/dijet tree
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

class PFs {
public :
   PFs(){};
   ~PFs(){};

   // Declaration of leaf types
   Int_t           nPFpart;
   Int_t           pfId[maxPF];   //[nPFpart]
   Float_t         pfPt[maxPF];   //[nPFpart]
   Float_t         pfVsPt[maxPF];   //[nPFpart]
   Float_t         pfEta[maxPF];   //[nPFpart]
   Float_t         pfPhi[maxPF];   //[nPFpart]
   Float_t         vn[5][15];    
   Float_t         psin[5][15];    
   Float_t         sumpt[15];    

   // List of branches
   TBranch        *b_nPFpart;   //!
   TBranch        *b_pfId;   //!
   TBranch        *b_pfPt;   //!
   TBranch        *b_pfVsPt;   //!
   TBranch        *b_pfEta;   //!
   TBranch        *b_pfPhi;   //!
   TBranch        *b_vn;
   TBranch        *b_psin;
   TBranch        *b_sumpt;
};


void setupPFTree(TTree *t,PFs &tPFs,bool doCheck = 1)
{
   // Set branch addresses and branch pointers
   if (t->GetBranch("nPFpart")) t->SetBranchAddress("nPFpart", &tPFs.nPFpart, &tPFs.b_nPFpart);
   if (t->GetBranch("pfId")) t->SetBranchAddress("pfId", tPFs.pfId, &tPFs.b_pfId);
   if (t->GetBranch("pfPt")) t->SetBranchAddress("pfPt", tPFs.pfPt, &tPFs.b_pfPt);
   if (t->GetBranch("pfVsPt")) t->SetBranchAddress("pfVsPt", tPFs.pfVsPt, &tPFs.b_pfVsPt);
   if (t->GetBranch("pfEta")) t->SetBranchAddress("pfEta", tPFs.pfEta, &tPFs.b_pfEta);
   if (t->GetBranch("pfPhi")) t->SetBranchAddress("pfPhi", tPFs.pfPhi, &tPFs.b_pfPhi);
   if (t->GetBranch("vn")) t->SetBranchAddress("vn", tPFs.vn, &tPFs.b_vn);
   if (t->GetBranch("psin")) t->SetBranchAddress("psin", tPFs.psin, &tPFs.b_psin);
   if (t->GetBranch("sumpt")) t->SetBranchAddress("sumpt", tPFs.sumpt, &tPFs.b_sumpt);
   if (doCheck) {
      if (t->GetMaximum("nPFpart")>maxPF) { cout <<"FATAL ERROR: Arrary size of nPFpart too small!!!  "<<t->GetMaximum("nPFpart")<<endl; exit(0);
 }   }
}

