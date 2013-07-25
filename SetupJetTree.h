//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Jun 20 12:21:51 2012 by ROOT version 5.27/06b
// from TTree t/akPu3PFpatJets Jet Analysis Tree
// found on file: ../Pythia30_HydjetDrum_mix01_HiForest2_v19.root
//////////////////////////////////////////////////////////
#include "commonSetup.h"
#include <iostream>
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TTree.h>
#include <TBranch.h>

class Jets {
public :
   Jets(){};
   ~Jets(){};

   // Declaration of leaf types
   Int_t           evt;
   Float_t         b;
   Int_t           nref;
   Float_t         rawpt[504];   //[nref]
   Float_t         jtpt[504];   //[nref]
   Float_t         jteta[504];   //[nref]
   Float_t         jty[504];   //[nref]
   Float_t         jtphi[504];   //[nref]
   Float_t         jtpu[504];   //[nref]
   Float_t         jtm[504];   //[nref]
   Float_t         discr_fr01[504];   //[nref]
   Float_t         trackMax[504];   //[nref]
   Float_t         trackSum[504];   //[nref]
   Int_t           trackN[504];   //[nref]
   Float_t         trackHardSum[504];   //[nref]
   Int_t           trackHardN[504];   //[nref]
   Float_t         chargedMax[504];   //[nref]
   Float_t         chargedSum[504];   //[nref]
   Int_t           chargedN[504];   //[nref]
   Float_t         chargedHardSum[504];   //[nref]
   Int_t           chargedHardN[504];   //[nref]
   Float_t         photonMax[504];   //[nref]
   Float_t         photonSum[504];   //[nref]
   Int_t           photonN[504];   //[nref]
   Float_t         photonHardSum[504];   //[nref]
   Int_t           photonHardN[504];   //[nref]
   Float_t         neutralMax[504];   //[nref]
   Float_t         neutralSum[504];   //[nref]
   Int_t           neutralN[504];   //[nref]

   Float_t         hcalSum[504];   //[nref]
   Float_t         ecalSum[504];   //[nref]

   Float_t         eMax[504];   //[nref]
   Float_t         eSum[504];   //[nref]
   Int_t           eN[504];   //[nref]
   Float_t         muMax[504];   //[nref]
   Float_t         muSum[504];   //[nref]
   Int_t           muN[504];   //[nref]
   Float_t         matchedPt[504];   //[nref]
   Float_t         matchedR[504];   //[nref]
   Int_t           beamId1;
   Int_t           beamId2;
   Float_t         pthat;
   Float_t         refpt[504];   //[nref]
   Float_t         refeta[504];   //[nref]
   Float_t         refy[504];   //[nref]
   Float_t         refphi[504];   //[nref]
   Float_t         refdphijt[504];   //[nref]
   Float_t         refdrjt[504];   //[nref]
   Float_t         refparton_pt[504];   //[nref]
   Int_t           refparton_flavor[504];   //[nref]
   Int_t           refparton_flavorForB[504];   //[nref]

   Float_t         genChargedSum[504];   //[nref]
   Float_t         genHardSum[504];   //[nref]

   Float_t         signalChargedSum[504];   //[nref]
   Float_t         signalHardSum[504];   //[nref]

   Int_t           subid[504];   //[nref]

   Int_t           ngen;
   Int_t           genmatchindex[100];   //[ngen]
   Float_t         genpt[100];   //[ngen]
   Float_t         geneta[100];   //[ngen]
   Float_t         geny[100];   //[ngen]
   Float_t         genphi[100];   //[ngen]
   Float_t         gendphijt[100];   //[ngen]
   Float_t         gendrjt[100];   //[ngen]
   Int_t           gensubid[100];   //[ngen]

   Float_t         smpt[504];   //[nref]
   Float_t         fr01Chg[504];   //[nref]
   Float_t         fr01EM[504];   //[nref]
   Float_t         fr01[504];   //[nref]

   // List of branches
   TBranch        *b_evt;   //!
   TBranch        *b_b;   //!
   TBranch        *b_nref;   //!
   TBranch        *b_rawpt;   //!
   TBranch        *b_jtpt;   //!
   TBranch        *b_jteta;   //!
   TBranch        *b_jty;   //!
   TBranch        *b_jtphi;   //!
   TBranch        *b_jtpu;   //!
   TBranch        *b_jtm;   //!
   TBranch        *b_discr_fr01;   //!
   TBranch        *b_trackMax;   //!
   TBranch        *b_trackSum;   //!
   TBranch        *b_trackN;   //!
   TBranch        *b_trackHardSum;   //!
   TBranch        *b_trackHardN;   //!
   TBranch        *b_chargedMax;   //!
   TBranch        *b_chargedSum;   //!
   TBranch        *b_chargedN;   //!
   TBranch        *b_chargedHardSum;   //!
   TBranch        *b_chargedHardN;   //!
   TBranch        *b_photonMax;   //!
   TBranch        *b_photonSum;   //!
   TBranch        *b_photonN;   //!
   TBranch        *b_photonHardSum;   //!
   TBranch        *b_photonHardN;   //!
   TBranch        *b_neutralMax;   //!
   TBranch        *b_neutralSum;   //!
   TBranch        *b_neutralN;   //!

   TBranch        *b_hcalSum;   //!
   TBranch        *b_ecalSum;   //!

   TBranch        *b_eMax;   //!
   TBranch        *b_eSum;   //!
   TBranch        *b_eN;   //!
   TBranch        *b_muMax;   //!
   TBranch        *b_muSum;   //!
   TBranch        *b_muN;   //!
   TBranch        *b_matchedPt;   //!
   TBranch        *b_matchedR;   //!
   TBranch        *b_beamId1;   //!
   TBranch        *b_beamId2;   //!
   TBranch        *b_pthat;   //!
   TBranch        *b_refpt;   //!
   TBranch        *b_refeta;   //!
   TBranch        *b_refy;   //!
   TBranch        *b_refphi;   //!
   TBranch        *b_refdphijt;   //!
   TBranch        *b_refdrjt;   //!
   TBranch        *b_refparton_pt;   //!
   TBranch        *b_refparton_flavor;   //!
   TBranch        *b_refparton_flavorForB;   //!

   TBranch        *b_genChargedSum;   //!
   TBranch        *b_genHardSum;   //!
   TBranch        *b_signalChargedSum;   //!
   TBranch        *b_signalHardSum;   //!
   TBranch        *b_subid;   //!

   TBranch        *b_ngen;   //!
   TBranch        *b_genmatchindex;   //!
   TBranch        *b_genpt;   //!
   TBranch        *b_geneta;   //!
   TBranch        *b_geny;   //!
   TBranch        *b_genphi;   //!
   TBranch        *b_gendphijt;   //!
   TBranch        *b_gendrjt;   //!
   TBranch        *b_gensubid;   //!
   TBranch        *b_smpt;   //!
   TBranch        *b_fr01Chg;   //!
   TBranch        *b_fr01EM;   //!
   TBranch        *b_fr01;   //!

};


void setupJetTree(TTree *t,Jets &tJets,bool doCheck = 0)
{
   // Set branch addresses and branch pointers
   if (t->GetBranch("evt")) t->SetBranchAddress("evt", &tJets.evt, &tJets.b_evt);
   if (t->GetBranch("b")) t->SetBranchAddress("b", &tJets.b, &tJets.b_b);
   if (t->GetBranch("nref")) t->SetBranchAddress("nref", &tJets.nref, &tJets.b_nref);
   if (t->GetBranch("rawpt")) t->SetBranchAddress("rawpt", tJets.rawpt, &tJets.b_rawpt);
   if (t->GetBranch("jtpt")) t->SetBranchAddress("jtpt", tJets.jtpt, &tJets.b_jtpt);
   if (t->GetBranch("jteta")) t->SetBranchAddress("jteta", tJets.jteta, &tJets.b_jteta);
   if (t->GetBranch("jty")) t->SetBranchAddress("jty", tJets.jty, &tJets.b_jty);
   if (t->GetBranch("jtphi")) t->SetBranchAddress("jtphi", tJets.jtphi, &tJets.b_jtphi);
   if (t->GetBranch("jtpu")) t->SetBranchAddress("jtpu", tJets.jtpu, &tJets.b_jtpu);
   if (t->GetBranch("jtm")) t->SetBranchAddress("jtm", tJets.jtm, &tJets.b_jtm);
   if (t->GetBranch("discr_fr01")) t->SetBranchAddress("discr_fr01", tJets.discr_fr01, &tJets.b_discr_fr01);
   if (t->GetBranch("trackMax")) t->SetBranchAddress("trackMax", tJets.trackMax, &tJets.b_trackMax);
   if (t->GetBranch("trackSum")) t->SetBranchAddress("trackSum", tJets.trackSum, &tJets.b_trackSum);
   if (t->GetBranch("trackN")) t->SetBranchAddress("trackN", tJets.trackN, &tJets.b_trackN);
   if (t->GetBranch("trackHardSum")) t->SetBranchAddress("trackHardSum", tJets.trackHardSum, &tJets.b_trackHardSum);
   if (t->GetBranch("trackHardN")) t->SetBranchAddress("trackHardN", tJets.trackHardN, &tJets.b_trackHardN);
   if (t->GetBranch("chargedMax")) t->SetBranchAddress("chargedMax", tJets.chargedMax, &tJets.b_chargedMax);
   if (t->GetBranch("chargedSum")) t->SetBranchAddress("chargedSum", tJets.chargedSum, &tJets.b_chargedSum);
   if (t->GetBranch("chargedN")) t->SetBranchAddress("chargedN", tJets.chargedN, &tJets.b_chargedN);
   if (t->GetBranch("chargedHardSum")) t->SetBranchAddress("chargedHardSum", tJets.chargedHardSum, &tJets.b_chargedHardSum);
   if (t->GetBranch("chargedHardN")) t->SetBranchAddress("chargedHardN", tJets.chargedHardN, &tJets.b_chargedHardN);
   if (t->GetBranch("photonMax")) t->SetBranchAddress("photonMax", tJets.photonMax, &tJets.b_photonMax);
   if (t->GetBranch("photonSum")) t->SetBranchAddress("photonSum", tJets.photonSum, &tJets.b_photonSum);
   if (t->GetBranch("photonN")) t->SetBranchAddress("photonN", tJets.photonN, &tJets.b_photonN);
   if (t->GetBranch("photonHardSum")) t->SetBranchAddress("photonHardSum", tJets.photonHardSum, &tJets.b_photonHardSum);
   if (t->GetBranch("photonHardN")) t->SetBranchAddress("photonHardN", tJets.photonHardN, &tJets.b_photonHardN);
   if (t->GetBranch("neutralMax")) t->SetBranchAddress("neutralMax", tJets.neutralMax, &tJets.b_neutralMax);
   if (t->GetBranch("neutralSum")) t->SetBranchAddress("neutralSum", tJets.neutralSum, &tJets.b_neutralSum);
   if (t->GetBranch("neutralN")) t->SetBranchAddress("neutralN", tJets.neutralN, &tJets.b_neutralN);

   if (t->GetBranch("hcalSum")) t->SetBranchAddress("hcalSum", tJets.hcalSum, &tJets.b_hcalSum);
   if (t->GetBranch("ecalSum")) t->SetBranchAddress("ecalSum", tJets.ecalSum, &tJets.b_ecalSum);

   if (t->GetBranch("eMax")) t->SetBranchAddress("eMax", tJets.eMax, &tJets.b_eMax);
   if (t->GetBranch("eSum")) t->SetBranchAddress("eSum", tJets.eSum, &tJets.b_eSum);
   if (t->GetBranch("eN")) t->SetBranchAddress("eN", tJets.eN, &tJets.b_eN);
   if (t->GetBranch("muMax")) t->SetBranchAddress("muMax", tJets.muMax, &tJets.b_muMax);
   if (t->GetBranch("muSum")) t->SetBranchAddress("muSum", tJets.muSum, &tJets.b_muSum);
   if (t->GetBranch("muN")) t->SetBranchAddress("muN", tJets.muN, &tJets.b_muN);
   if (t->GetBranch("matchedPt")) t->SetBranchAddress("matchedPt", tJets.matchedPt, &tJets.b_matchedPt);
   if (t->GetBranch("matchedR")) t->SetBranchAddress("matchedR", tJets.matchedR, &tJets.b_matchedR);
   if (t->GetBranch("beamId1")) t->SetBranchAddress("beamId1", &tJets.beamId1, &tJets.b_beamId1);
   if (t->GetBranch("beamId2")) t->SetBranchAddress("beamId2", &tJets.beamId2, &tJets.b_beamId2);
   if (t->GetBranch("pthat")) t->SetBranchAddress("pthat", &tJets.pthat, &tJets.b_pthat);
   if (t->GetBranch("refpt")) t->SetBranchAddress("refpt", tJets.refpt, &tJets.b_refpt);
   if (t->GetBranch("refeta")) t->SetBranchAddress("refeta", tJets.refeta, &tJets.b_refeta);
   if (t->GetBranch("refy")) t->SetBranchAddress("refy", tJets.refy, &tJets.b_refy);
   if (t->GetBranch("refphi")) t->SetBranchAddress("refphi", tJets.refphi, &tJets.b_refphi);
   if (t->GetBranch("refdphijt")) t->SetBranchAddress("refdphijt", tJets.refdphijt, &tJets.b_refdphijt);
   if (t->GetBranch("refdrjt")) t->SetBranchAddress("refdrjt", tJets.refdrjt, &tJets.b_refdrjt);
   if (t->GetBranch("refparton_pt")) t->SetBranchAddress("refparton_pt", tJets.refparton_pt, &tJets.b_refparton_pt);
   if (t->GetBranch("refparton_flavor")) t->SetBranchAddress("refparton_flavor", tJets.refparton_flavor, &tJets.b_refparton_flavor);
   if (t->GetBranch("refparton_flavorForB")) t->SetBranchAddress("refparton_flavorForB", tJets.refparton_flavorForB, &tJets.b_refparton_flavorForB);

   if (t->GetBranch("genChargedSum")) t->SetBranchAddress("genChargedSum", tJets.genChargedSum, &tJets.b_genChargedSum);
   if (t->GetBranch("genHardSum")) t->SetBranchAddress("genHardSum", tJets.genHardSum, &tJets.b_genHardSum);
   if (t->GetBranch("signalChargedSum")) t->SetBranchAddress("signalChargedSum", tJets.signalChargedSum, &tJets.b_signalChargedSum);
   if (t->GetBranch("signalHardSum")) t->SetBranchAddress("signalHardSum", tJets.signalHardSum, &tJets.b_signalHardSum);
   if (t->GetBranch("subid")) t->SetBranchAddress("subid", tJets.subid, &tJets.b_subid);

   if (t->GetBranch("ngen")) t->SetBranchAddress("ngen", &tJets.ngen, &tJets.b_ngen);
   if (t->GetBranch("genmatchindex")) t->SetBranchAddress("genmatchindex", tJets.genmatchindex, &tJets.b_genmatchindex);
   if (t->GetBranch("genpt")) t->SetBranchAddress("genpt", tJets.genpt, &tJets.b_genpt);
   if (t->GetBranch("geneta")) t->SetBranchAddress("geneta", tJets.geneta, &tJets.b_geneta);
   if (t->GetBranch("geny")) t->SetBranchAddress("geny", tJets.geny, &tJets.b_geny);
   if (t->GetBranch("genphi")) t->SetBranchAddress("genphi", tJets.genphi, &tJets.b_genphi);
   if (t->GetBranch("gendphijt")) t->SetBranchAddress("gendphijt", tJets.gendphijt, &tJets.b_gendphijt);
   if (t->GetBranch("gendrjt")) t->SetBranchAddress("gendrjt", tJets.gendrjt, &tJets.b_gendrjt);
   if (t->GetBranch("gensubid")) t->SetBranchAddress("gensubid", tJets.gensubid, &tJets.b_gensubid);
   if (t->GetBranch("smpt")) t->SetBranchAddress("smpt", tJets.smpt, &tJets.b_smpt);
   if (t->GetBranch("fr01Chg")) t->SetBranchAddress("fr01Chg", tJets.fr01Chg, &tJets.b_fr01Chg);
   if (t->GetBranch("fr01EM")) t->SetBranchAddress("fr01EM", tJets.fr01EM, &tJets.b_fr01EM);
   if (t->GetBranch("fr01")) t->SetBranchAddress("fr01", tJets.fr01, &tJets.b_fr01);
   if (doCheck) {
     if (t->GetMaximum("nref")>504){ cout <<"FATAL ERROR: Arrary size of nref too small!!!  "<<t->GetMaximum("nref")<<endl; exit(0);}
     if (t->GetMaximum("ngen")>100){ cout <<"FATAL ERROR: Arrary size of ngen too small!!!  "<<t->GetMaximum("ngen")<<endl; exit(0);}
   }
}

