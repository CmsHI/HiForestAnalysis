//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Jan 23 16:17:05 2013 by ROOT version 5.32/00
// from TTree zdcdigi/v1
// found on file: root://eoscms//eos/cms/store/caf/user/velicanu/PA2013_merged/pPb_hiForest2_monster_logerrevent_HI2013_express_v1_210634_210635_v14.root
//////////////////////////////////////////////////////////
#include "commonSetup.h"
#include <iostream>
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TTree.h>
#include <TBranch.h>

class Digis {
public :
   Digis(){};
   ~Digis(){};

   // Declaration of leaf types
   Int_t           n;
   Int_t           zside[36];   //[n]
   Int_t           section[36];   //[n]
   Int_t           channel[36];   //[n]
   Int_t           adcTs0[36];   //[n]
   Float_t         chargefCTs0[36];   //[n]
   Int_t           adcTs1[36];   //[n]
   Float_t         chargefCTs1[36];   //[n]
   Int_t           adcTs2[36];   //[n]
   Float_t         chargefCTs2[36];   //[n]
   Int_t           adcTs3[36];   //[n]
   Float_t         chargefCTs3[36];   //[n]
   Int_t           adcTs4[36];   //[n]
   Float_t         chargefCTs4[36];   //[n]
   Int_t           adcTs5[36];   //[n]
   Float_t         chargefCTs5[36];   //[n]
   Int_t           adcTs6[36];   //[n]
   Float_t         chargefCTs6[36];   //[n]
   Int_t           adcTs7[36];   //[n]
   Float_t         chargefCTs7[36];   //[n]
   Int_t           adcTs8[36];   //[n]
   Float_t         chargefCTs8[36];   //[n]
   Int_t           adcTs9[36];   //[n]
   Float_t         chargefCTs9[36];   //[n]

   // List of branches
   TBranch        *b_n;   //!
   TBranch        *b_zside;   //!
   TBranch        *b_section;   //!
   TBranch        *b_channel;   //!
   TBranch        *b_adcTs0;   //!
   TBranch        *b_chargefCTs0;   //!
   TBranch        *b_adcTs1;   //!
   TBranch        *b_chargefCTs1;   //!
   TBranch        *b_adcTs2;   //!
   TBranch        *b_chargefCTs2;   //!
   TBranch        *b_adcTs3;   //!
   TBranch        *b_chargefCTs3;   //!
   TBranch        *b_adcTs4;   //!
   TBranch        *b_chargefCTs4;   //!
   TBranch        *b_adcTs5;   //!
   TBranch        *b_chargefCTs5;   //!
   TBranch        *b_adcTs6;   //!
   TBranch        *b_chargefCTs6;   //!
   TBranch        *b_adcTs7;   //!
   TBranch        *b_chargefCTs7;   //!
   TBranch        *b_adcTs8;   //!
   TBranch        *b_chargefCTs8;   //!
   TBranch        *b_adcTs9;   //!
   TBranch        *b_chargefCTs9;   //!

};


void setupDigiTree(TTree *t,Digis &tDigis,bool doCheck = 1)
{
   // Set branch addresses and branch pointers
   t->SetBranchAddress("n", &tDigis.n, &tDigis.b_n);
   t->SetBranchAddress("zside", tDigis.zside, &tDigis.b_zside);
   t->SetBranchAddress("section", tDigis.section, &tDigis.b_section);
   t->SetBranchAddress("channel", tDigis.channel, &tDigis.b_channel);
   t->SetBranchAddress("adcTs0", tDigis.adcTs0, &tDigis.b_adcTs0);
   t->SetBranchAddress("chargefCTs0", tDigis.chargefCTs0, &tDigis.b_chargefCTs0);
   t->SetBranchAddress("adcTs1", tDigis.adcTs1, &tDigis.b_adcTs1);
   t->SetBranchAddress("chargefCTs1", tDigis.chargefCTs1, &tDigis.b_chargefCTs1);
   t->SetBranchAddress("adcTs2", tDigis.adcTs2, &tDigis.b_adcTs2);
   t->SetBranchAddress("chargefCTs2", tDigis.chargefCTs2, &tDigis.b_chargefCTs2);
   t->SetBranchAddress("adcTs3", tDigis.adcTs3, &tDigis.b_adcTs3);
   t->SetBranchAddress("chargefCTs3", tDigis.chargefCTs3, &tDigis.b_chargefCTs3);
   t->SetBranchAddress("adcTs4", tDigis.adcTs4, &tDigis.b_adcTs4);
   t->SetBranchAddress("chargefCTs4", tDigis.chargefCTs4, &tDigis.b_chargefCTs4);
   t->SetBranchAddress("adcTs5", tDigis.adcTs5, &tDigis.b_adcTs5);
   t->SetBranchAddress("chargefCTs5", tDigis.chargefCTs5, &tDigis.b_chargefCTs5);
   t->SetBranchAddress("adcTs6", tDigis.adcTs6, &tDigis.b_adcTs6);
   t->SetBranchAddress("chargefCTs6", tDigis.chargefCTs6, &tDigis.b_chargefCTs6);
   t->SetBranchAddress("adcTs7", tDigis.adcTs7, &tDigis.b_adcTs7);
   t->SetBranchAddress("chargefCTs7", tDigis.chargefCTs7, &tDigis.b_chargefCTs7);
   t->SetBranchAddress("adcTs8", tDigis.adcTs8, &tDigis.b_adcTs8);
   t->SetBranchAddress("chargefCTs8", tDigis.chargefCTs8, &tDigis.b_chargefCTs8);
   t->SetBranchAddress("adcTs9", tDigis.adcTs9, &tDigis.b_adcTs9);
   t->SetBranchAddress("chargefCTs9", tDigis.chargefCTs9, &tDigis.b_chargefCTs9);
   if (doCheck) {
      if (t->GetMaximum("n")>36) cout <<"FATAL ERROR: Arrary size of n too small!!!  "<<t->GetMaximum("n")<<endl;
   }
}

