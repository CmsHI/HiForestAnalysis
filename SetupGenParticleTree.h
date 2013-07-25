//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Jul 18 23:43:21 2012 by ROOT version 5.27/06b
// from TTree hi/Tree of Hi gen Event
// found on file: /d102/yjlee/hiForest2MC/lowPtSimTrack/mergedFile100.root
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
   GenParticles(){};
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
   Float_t         pt[maxEntrySim];   //[mult]
   Float_t         eta[maxEntrySim];   //[mult]
   Float_t         phi[maxEntrySim];   //[mult]
   Int_t           pdg[maxEntrySim];   //[mult]
   Int_t           chg[maxEntrySim];   //[mult]
   Int_t           sube[maxEntrySim];   //[mult]
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
   TBranch        *b_sube;   //!
   TBranch        *b_vx;   //!
   TBranch        *b_vy;   //!
   TBranch        *b_vz;   //!
   TBranch        *b_vr;   //!

};


void setupGenParticleTree(TTree *t,GenParticles &tGenParticles,bool doCheck = 0)
{
   // Set branch addresses and branch pointers
   if (t->GetBranch("event")) t->SetBranchAddress("event", &tGenParticles.event, &tGenParticles.b_event);
   if (t->GetBranch("b")) t->SetBranchAddress("b", &tGenParticles.b, &tGenParticles.b_b);
   if (t->GetBranch("npart")) t->SetBranchAddress("npart", &tGenParticles.npart, &tGenParticles.b_npart);
   if (t->GetBranch("ncoll")) t->SetBranchAddress("ncoll", &tGenParticles.ncoll, &tGenParticles.b_ncoll);
   if (t->GetBranch("nhard")) t->SetBranchAddress("nhard", &tGenParticles.nhard, &tGenParticles.b_nhard);
   if (t->GetBranch("phi0")) t->SetBranchAddress("phi0", &tGenParticles.phi0, &tGenParticles.b_phi0);
   if (t->GetBranch("scale")) t->SetBranchAddress("scale", &tGenParticles.scale, &tGenParticles.b_scale);
   if (t->GetBranch("n")) t->SetBranchAddress("n", tGenParticles.n, &tGenParticles.b_n);
   if (t->GetBranch("ptav")) t->SetBranchAddress("ptav", tGenParticles.ptav, &tGenParticles.b_ptav);
   if (t->GetBranch("mult")) t->SetBranchAddress("mult", &tGenParticles.mult, &tGenParticles.b_mult);
   if (t->GetBranch("pt")) t->SetBranchAddress("pt", tGenParticles.pt, &tGenParticles.b_pt);
   if (t->GetBranch("eta")) t->SetBranchAddress("eta", tGenParticles.eta, &tGenParticles.b_eta);
   if (t->GetBranch("phi")) t->SetBranchAddress("phi", tGenParticles.phi, &tGenParticles.b_phi);
   if (t->GetBranch("pdg")) t->SetBranchAddress("pdg", tGenParticles.pdg, &tGenParticles.b_pdg);
   if (t->GetBranch("chg")) t->SetBranchAddress("chg", tGenParticles.chg, &tGenParticles.b_chg);
   if (t->GetBranch("sube")) t->SetBranchAddress("sube", tGenParticles.sube, &tGenParticles.b_sube);
   if (t->GetBranch("vx")) t->SetBranchAddress("vx", &tGenParticles.vx, &tGenParticles.b_vx);
   if (t->GetBranch("vy")) t->SetBranchAddress("vy", &tGenParticles.vy, &tGenParticles.b_vy);
   if (t->GetBranch("vz")) t->SetBranchAddress("vz", &tGenParticles.vz, &tGenParticles.b_vz);
   if (t->GetBranch("vr")) t->SetBranchAddress("vr", &tGenParticles.vr, &tGenParticles.b_vr);
   if (doCheck) {
      if (t->GetMaximum("mult")>maxEntrySim) { cout <<"FATAL ERROR: Arrary size of mult too small!!!  "<<t->GetMaximum("mult")<<endl; exit(0);
 }   }
}

