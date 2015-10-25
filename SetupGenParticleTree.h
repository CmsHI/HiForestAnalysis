//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Sat Oct 24 21:28:54 2015 by ROOT version 6.02/10
// from TTree hi/Tree of Hi gen Event
// found on file: ../../HiForest2015/Pyquen_Unquenched_AllQCDPhoton30_PhotonFilter20GeV_eta24_TuneZ2_PbPb_5020GeV_0.root
//////////////////////////////////////////////////////////
#include "commonSetup.h"
#include <iostream>
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TTree.h>
#include <TBranch.h>

class GenParticles {
public :
   GenParticles(){   pt = 0;
   eta = 0;
   phi = 0;
   pdg = 0;
   chg = 0;
   matchingID = 0;
   nMothers = 0;
   motherIdx = 0;
   nDaughters = 0;
   daughterIdx = 0;
   sube = 0;
};
   ~GenParticles(){};

   // Declaration of leaf types
   Int_t           event;
   Float_t         b;
   Float_t         npart;
   Float_t         ncoll;
   Float_t         nhard;
   Float_t         phi0;
   Float_t         scale;
   Int_t           n[3];
   Float_t         ptav[3];
   Int_t           mult;
   vector<float>   *pt;
   vector<float>   *eta;
   vector<float>   *phi;
   vector<int>     *pdg;
   vector<int>     *chg;
   vector<int>     *matchingID;
   vector<int>     *nMothers;
   vector<vector<int> > *motherIdx;
   vector<int>     *nDaughters;
   vector<vector<int> > *daughterIdx;
   vector<int>     *sube;
   Float_t         vx;
   Float_t         vy;
   Float_t         vz;
   Float_t         vr;

   // List of branches
   TBranch        *b_event;   //!
   TBranch        *b_b;   //!
   TBranch        *b_npart;   //!
   TBranch        *b_ncoll;   //!
   TBranch        *b_nhard;   //!
   TBranch        *b_phi0;   //!
   TBranch        *b_scale;   //!
   TBranch        *b_n;   //!
   TBranch        *b_ptav;   //!
   TBranch        *b_mult;   //!
   TBranch        *b_pt;   //!
   TBranch        *b_eta;   //!
   TBranch        *b_phi;   //!
   TBranch        *b_pdg;   //!
   TBranch        *b_chg;   //!
   TBranch        *b_matchingID;   //!
   TBranch        *b_nMothers;   //!
   TBranch        *b_motherIdx;   //!
   TBranch        *b_nDaughters;   //!
   TBranch        *b_daughterIdx;   //!
   TBranch        *b_sube;   //!
   TBranch        *b_vx;   //!
   TBranch        *b_vy;   //!
   TBranch        *b_vz;   //!
   TBranch        *b_vr;   //!

};


void setupGenParticleTree(TTree *t,GenParticles &tGenParticles,bool doCheck = 1)
{
   // Set object pointer


   // Set branch addresses and branch pointers
   t->SetBranchAddress("event", &tGenParticles.event, &tGenParticles.b_event);
   t->SetBranchAddress("b", &tGenParticles.b, &tGenParticles.b_b);
   t->SetBranchAddress("npart", &tGenParticles.npart, &tGenParticles.b_npart);
   t->SetBranchAddress("ncoll", &tGenParticles.ncoll, &tGenParticles.b_ncoll);
   t->SetBranchAddress("nhard", &tGenParticles.nhard, &tGenParticles.b_nhard);
   t->SetBranchAddress("phi0", &tGenParticles.phi0, &tGenParticles.b_phi0);
   t->SetBranchAddress("scale", &tGenParticles.scale, &tGenParticles.b_scale);
   t->SetBranchAddress("n", tGenParticles.n, &tGenParticles.b_n);
   t->SetBranchAddress("ptav", tGenParticles.ptav, &tGenParticles.b_ptav);
   t->SetBranchAddress("mult", &tGenParticles.mult, &tGenParticles.b_mult);
   t->SetBranchAddress("pt", &tGenParticles.pt, &tGenParticles.b_pt);
   t->SetBranchAddress("eta", &tGenParticles.eta, &tGenParticles.b_eta);
   t->SetBranchAddress("phi", &tGenParticles.phi, &tGenParticles.b_phi);
   t->SetBranchAddress("pdg", &tGenParticles.pdg, &tGenParticles.b_pdg);
   t->SetBranchAddress("chg", &tGenParticles.chg, &tGenParticles.b_chg);
   t->SetBranchAddress("matchingID", &tGenParticles.matchingID, &tGenParticles.b_matchingID);
   t->SetBranchAddress("nMothers", &tGenParticles.nMothers, &tGenParticles.b_nMothers);
   t->SetBranchAddress("motherIdx", &tGenParticles.motherIdx, &tGenParticles.b_motherIdx);
   t->SetBranchAddress("nDaughters", &tGenParticles.nDaughters, &tGenParticles.b_nDaughters);
   t->SetBranchAddress("daughterIdx", &tGenParticles.daughterIdx, &tGenParticles.b_daughterIdx);
   t->SetBranchAddress("sube", &tGenParticles.sube, &tGenParticles.b_sube);
   t->SetBranchAddress("vx", &tGenParticles.vx, &tGenParticles.b_vx);
   t->SetBranchAddress("vy", &tGenParticles.vy, &tGenParticles.b_vy);
   t->SetBranchAddress("vz", &tGenParticles.vz, &tGenParticles.b_vz);
   t->SetBranchAddress("vr", &tGenParticles.vr, &tGenParticles.b_vr);
   if (doCheck) {
   }
}

