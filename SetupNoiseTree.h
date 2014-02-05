//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Jan 23 16:17:05 2013 by ROOT version 5.32/00
// from TTree hbhenoise/v1
// found on file: root://eoscms//eos/cms/store/caf/user/velicanu/PA2013_merged/pPb_hiForest2_monster_logerrevent_HI2013_express_v1_210634_210635_v14.root
//////////////////////////////////////////////////////////
#include "commonSetup.h"
#include <iostream>
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TTree.h>
#include <TBranch.h>

class Noises {
public :
   Noises(){};
   ~Noises(){};

   // Declaration of leaf types
   Int_t           run;
   Long64_t        event;
   Int_t           luminosityBlock;
   Int_t           bunchCrossing;
   Int_t           orbit;
   Long64_t        time;
   Int_t           FilterStatus;
   Int_t           MaxZeros;
   Int_t           MaxHPDHits;
   Int_t           MaxHPDNoOtherHits;
   Int_t           MaxRBXHits;
   Int_t           IsolatedCount;
   Double_t        IsolatedSumE;
   Double_t        IsolatedSumET;
   Int_t           FlatNoiseCount;
   Double_t        FlatNoiseSumE;
   Double_t        FlatNoiseSumET;
   Int_t           SpikeNoiseCount;
   Double_t        SpikeNoiseSumE;
   Double_t        SpikeNoiseSumET;
   Bool_t          HasBadTS4TS5;
   Double_t        TotalCalibCharge;
   Double_t        MinE2E10;
   Double_t        MaxE2E10;
   Double_t        RBXEnergy[72];
   Double_t        RBXEnergy15[72];
   Int_t           RBXHitCount[72];
   Double_t        RBXR45[72];
   Double_t        RBXCharge[72][10];

   // 2011 branches

   Int_t           maxhpdhits;
   Int_t           maxrbxhits;
   Int_t           nspikenoise;
   Bool_t          hasbadts4ts5;


   // List of branches
   TBranch        *b_run;   //!
   TBranch        *b_event;   //!
   TBranch        *b_luminosityBlock;   //!
   TBranch        *b_bunchCrossing;   //!
   TBranch        *b_orbit;   //!
   TBranch        *b_time;   //!
   TBranch        *b_FilterStatus;   //!
   TBranch        *b_MaxZeros;   //!
   TBranch        *b_MaxHPDHits;   //!
   TBranch        *b_MaxHPDNoOtherHits;   //!
   TBranch        *b_MaxRBXHits;   //!
   TBranch        *b_IsolatedCount;   //!
   TBranch        *b_IsolatedSumE;   //!
   TBranch        *b_IsolatedSumET;   //!
   TBranch        *b_FlatNoiseCount;   //!
   TBranch        *b_FlatNoiseSumE;   //!
   TBranch        *b_FlatNoiseSumET;   //!
   TBranch        *b_SpikeNoiseCount;   //!
   TBranch        *b_SpikeNoiseSumE;   //!
   TBranch        *b_SpikeNoiseSumET;   //!
   TBranch        *b_HasBadTS4TS5;   //!
   TBranch        *b_TotalCalibCharge;   //!
   TBranch        *b_MinE2E10;   //!
   TBranch        *b_MaxE2E10;   //!
   TBranch        *b_RBXEnergy;   //!
   TBranch        *b_RBXEnergy15;   //!
   TBranch        *b_RBXHitCount;   //!
   TBranch        *b_RBXR45;   //!
   TBranch        *b_RBXCharge;   //!

};


void setupNoiseTree(TTree *t,Noises &tNoises,bool doCheck = 1)
{
   // Set branch addresses and branch pointers
   t->SetBranchAddress("run", &tNoises.run, &tNoises.b_run);
   t->SetBranchAddress("event", &tNoises.event, &tNoises.b_event);
   t->SetBranchAddress("luminosityBlock", &tNoises.luminosityBlock, &tNoises.b_luminosityBlock);
   t->SetBranchAddress("bunchCrossing", &tNoises.bunchCrossing, &tNoises.b_bunchCrossing);
   t->SetBranchAddress("orbit", &tNoises.orbit, &tNoises.b_orbit);
   t->SetBranchAddress("time", &tNoises.time, &tNoises.b_time);
   t->SetBranchAddress("FilterStatus", &tNoises.FilterStatus, &tNoises.b_FilterStatus);
   t->SetBranchAddress("MaxZeros", &tNoises.MaxZeros, &tNoises.b_MaxZeros);
   t->SetBranchAddress("MaxHPDHits", &tNoises.MaxHPDHits, &tNoises.b_MaxHPDHits);
   t->SetBranchAddress("MaxHPDNoOtherHits", &tNoises.MaxHPDNoOtherHits, &tNoises.b_MaxHPDNoOtherHits);
   t->SetBranchAddress("MaxRBXHits", &tNoises.MaxRBXHits, &tNoises.b_MaxRBXHits);
   t->SetBranchAddress("IsolatedCount", &tNoises.IsolatedCount, &tNoises.b_IsolatedCount);
   t->SetBranchAddress("IsolatedSumE", &tNoises.IsolatedSumE, &tNoises.b_IsolatedSumE);
   t->SetBranchAddress("IsolatedSumET", &tNoises.IsolatedSumET, &tNoises.b_IsolatedSumET);
   t->SetBranchAddress("FlatNoiseCount", &tNoises.FlatNoiseCount, &tNoises.b_FlatNoiseCount);
   t->SetBranchAddress("FlatNoiseSumE", &tNoises.FlatNoiseSumE, &tNoises.b_FlatNoiseSumE);
   t->SetBranchAddress("FlatNoiseSumET", &tNoises.FlatNoiseSumET, &tNoises.b_FlatNoiseSumET);
   t->SetBranchAddress("SpikeNoiseCount", &tNoises.SpikeNoiseCount, &tNoises.b_SpikeNoiseCount);
   t->SetBranchAddress("SpikeNoiseSumE", &tNoises.SpikeNoiseSumE, &tNoises.b_SpikeNoiseSumE);
   t->SetBranchAddress("SpikeNoiseSumET", &tNoises.SpikeNoiseSumET, &tNoises.b_SpikeNoiseSumET);
   t->SetBranchAddress("HasBadTS4TS5", &tNoises.HasBadTS4TS5, &tNoises.b_HasBadTS4TS5);
   t->SetBranchAddress("TotalCalibCharge", &tNoises.TotalCalibCharge, &tNoises.b_TotalCalibCharge);
   t->SetBranchAddress("MinE2E10", &tNoises.MinE2E10, &tNoises.b_MinE2E10);
   t->SetBranchAddress("MaxE2E10", &tNoises.MaxE2E10, &tNoises.b_MaxE2E10);
   t->SetBranchAddress("RBXEnergy", tNoises.RBXEnergy, &tNoises.b_RBXEnergy);
   t->SetBranchAddress("RBXEnergy15", tNoises.RBXEnergy15, &tNoises.b_RBXEnergy15);
   t->SetBranchAddress("RBXHitCount", tNoises.RBXHitCount, &tNoises.b_RBXHitCount);
   t->SetBranchAddress("RBXR45", tNoises.RBXR45, &tNoises.b_RBXR45);
   t->SetBranchAddress("RBXCharge", tNoises.RBXCharge, &tNoises.b_RBXCharge);

   t->SetBranchAddress("maxhpdhits", &tNoises.maxhpdhits);
   t->SetBranchAddress("maxrbxhits", &tNoises.maxrbxhits);

   t->SetBranchAddress("nspikenoise", &tNoises.nspikenoise);
   t->SetBranchAddress("hasbadts4ts5", &tNoises.hasbadts4ts5);



   if (doCheck) {
   }
}

