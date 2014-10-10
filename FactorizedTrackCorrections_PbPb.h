#include "TFile.h"
#include "TProfile.h"
#include "TProfile2D.h"
#include "TMath.h"
#include <iostream>

/*  Written by Austin Baty
    10/9/2014
    see bottom for explanation of code, usage, and some example code */

//current number of eff and fake histograms
const int n_eff  = 29;
const int n_fake = 29;

const double ptmin_fake[] = {0.5 ,0.5 ,0.5 ,0.5 ,0.5 ,0.55 ,0.55 ,0.55 ,0.55 ,0.55 ,0.65,0.65,0.65,0.65,0.65,0.8,0.8,0.8,0.8,0.8,1 ,1 ,1 ,1 ,1  ,3 ,3 ,3  ,8};
const double ptmax_fake[] = {0.55,0.55,0.55,0.55,0.55,0.65 ,0.65 ,0.65 ,0.65 ,0.65 ,0.8 ,0.8 ,0.8 ,0.8 ,0.8 ,1  ,1  ,1  ,1  ,1  ,3 ,3 ,3 ,3 ,3  ,8 ,8 ,8  ,300};
const double ptmin_eff[]  = {0.5 ,0.5 ,0.5 ,0.5 ,0.5 ,0.55 ,0.55 ,0.55 ,0.55 ,0.55 ,0.65,0.65,0.65,0.65,0.65,0.8,0.8,0.8,0.8,0.8,1 ,1 ,1 ,1 ,1  ,3 ,3 ,3  ,8};
const double ptmax_eff[]  = {0.55,0.55,0.55,0.55,0.55,0.65 ,0.65 ,0.65 ,0.65 ,0.65 ,0.8 ,0.8 ,0.8 ,0.8 ,0.8 ,1  ,1  ,1  ,1  ,1  ,3 ,3 ,3 ,3 ,3  ,8 ,8 ,8  ,300};

const int cent_min_fake[] = {0   ,20  ,40  ,60  ,100  ,0    ,20   ,40   ,60   ,100   ,0   ,20  ,40  ,60  ,100  ,0  ,20 ,40 ,60 ,100 ,0 ,20,40,60,100 ,0 ,20,40 ,0};
const int cent_max_fake[] = {20  ,40  ,60  ,100  ,200 ,20   ,40   ,60   ,100   ,200  ,20  ,40  ,60  ,100  ,200 ,20 ,40 ,60 ,100 ,200,20,40,60,100,200,20,40,200,200};
const int cent_min_eff[]  = {0   ,20  ,40  ,60  ,100  ,0    ,20   ,40   ,60   ,100   ,0   ,20  ,40  ,60  ,100  ,0  ,20 ,40 ,60 ,100 ,0 ,20,40,60,100 ,0 ,20,40 ,0};
const int cent_max_eff[]  = {20  ,40  ,60  ,100  ,200 ,20   ,40   ,60   ,100   ,200  ,20  ,40  ,60  ,100  ,200 ,20 ,40 ,60 ,100 ,200,20,40,60,100,200,20,40,200,200};

TFile      * f_eff[n_eff];
TProfile   * p_eff_cent[n_eff];
TProfile2D * p_eff_accept[n_eff];
TProfile   * p_eff_pt[n_eff];
TProfile   * p_eff_rmin[n_eff];

TFile      * f_fake[n_fake];
TProfile   * p_fake_cent[n_fake];
TProfile2D * p_fake_accept[n_fake];
TProfile   * p_fake_pt[n_fake];
TProfile   * p_fake_rmin[n_fake];

void initializeCorrections()
{
  for(int i=0; i<n_eff;i++)
    {
      f_eff[i] = new TFile(Form("PbPbFactorizedCorrections/eff/eff_pt%d_%d_cent%d_%d.root",(int)(100*ptmin_eff[i]),(int)(100*ptmax_eff[i]),(int)(0.5*cent_min_eff[i]),(int)(0.5*cent_max_eff[i])));
      p_eff_cent[i] = (TProfile*)f_eff[i]->Get("p_eff_cent");
      p_eff_pt[i] = (TProfile*)f_eff[i]->Get("p_eff_pt");
      p_eff_accept[i] = (TProfile2D*)f_eff[i]->Get("p_eff_acceptance");
      p_eff_rmin[i] = (TProfile*)f_eff[i]->Get("p_eff_rmin");
    }
 
  for(int i=0; i<n_fake;i++)
    {
      f_fake[i] = new TFile(Form("PbPbFactorizedCorrections/fake/fake_pt%d_%d_cent%d_%d.root",(int)(100*ptmin_fake[i]),(int)(100*ptmax_fake[i]),(int)(0.5*cent_min_fake[i]),(int)(0.5*cent_max_fake[i])));
      p_fake_cent[i] = (TProfile*)f_fake[i]->Get("p_fake_cent");
      p_fake_pt[i] = (TProfile*)f_fake[i]->Get("p_fake_pt");
      p_fake_accept[i] = (TProfile2D*)f_fake[i]->Get("p_fake_acceptance");
      p_fake_rmin[i] = (TProfile*)f_fake[i]->Get("p_fake_rmin");
    }
}

double getRmin(double eta, double phi, Float_t* jtPt, Float_t* jtEta, Float_t* jtPhi, Int_t nref)
{
  float rmin=199;
  for(int ijet = 0; ijet< nref; ijet++)
    {
      if(fabs(jtEta[ijet])>2 || jtPt[ijet]<50) continue;
      float r_reco = sqrt(pow(eta-jtEta[ijet],2)+pow(acos(cos(phi-jtPhi[ijet])),2));
      if(r_reco<rmin)rmin=r_reco;
    }
  return rmin;
}

double getEfficiency(double pt, double eta, double phi, double cent, double rmin)
{
  double eff        = 0;
 
  double eff_pt     = 1;
  double eff_accept = 1;
  double eff_cent   = 1;
  double eff_rmin   = 1;

  for(int i = 0; i<n_eff; i++)
    {
      if(pt>=ptmin_eff[i] && pt<ptmax_eff[i] && cent>=cent_min_eff[i] && cent<cent_max_eff[i])
        {
          eff_pt     = p_eff_pt[i]->GetBinContent(p_eff_pt[i]->FindBin(pt));
          eff_cent   = p_eff_cent[i]->GetBinContent(p_eff_cent[i]->FindBin(cent));
          eff_accept = p_eff_accept[i]->GetBinContent(p_eff_accept[i]->GetXaxis()->FindBin(phi),p_eff_accept[i]->GetYaxis()->FindBin(eta));
            
          if(rmin<=100) eff_rmin = p_eff_rmin[i]->GetBinContent(p_eff_rmin[i]->FindBin(rmin));
        }
    }
  eff = eff_pt*eff_accept*eff_cent*eff_rmin;
 
  if(eff==0)
    {
      //std::cout<<"zero efficiency"<<" eta="<<eta<<" pt="<<pt<<" phi="<<phi<<" cent="<<cent<< std::endl;
        
      if(pt>100) eff=0.8;
        else     eff=1;
    } 
  return eff;
}

double getFake(double pt, double eta, double phi, double cent, double rmin)
{
  double fake        = 0;

  double fake_pt     = 0;
  double fake_accept = 0;
  double fake_cent   = 0;
  double fake_rmin   = 0;

  for(int i = 0; i<n_fake; i++)
    {
      if(pt>=ptmin_fake[i] && pt<ptmax_fake[i] && cent>=cent_min_fake[i] && cent<cent_max_fake[i])
        {
          fake_pt     = p_fake_pt[i]->GetBinContent(p_fake_pt[i]->FindBin(pt));
          fake_cent   = p_fake_cent[i]->GetBinContent(p_fake_cent[i]->FindBin(cent));
          fake_accept = p_fake_accept[i]->GetBinContent(p_fake_accept[i]->GetXaxis()->FindBin(phi),p_fake_accept[i]->GetYaxis()->FindBin(eta));
          if(rmin<=100) fake_rmin=p_fake_rmin[i]->GetBinContent(p_fake_rmin[i]->FindBin(rmin));
        }
    }
  if(pt<100) fake = fake_pt+fake_cent+fake_accept+fake_rmin;
  return fake;
}

double getCorrection(double pt, double eta, double phi, double cent, Float_t* jtPt, Float_t* jtEta, Float_t* jtPhi, Int_t nref)
{
  if(eta<-2.4 || eta>2.4)
  { 
    std::cout << "eta out of range [-2.4,2.4]! Apply this eta cut before getting tracking corrections.  Terminating execution." << std::endl;
    std::exit(1);
  }

  if(pt<0.5)
  {
    std::cout << "pt less than 0.5 (should be >=0.5).  Apply this cut before getting tracking corrections.  Terminating execution." << std::endl;
    std::exit(1);
  }

  if(cent<0 || cent>200)
  {
    std::cout << "cent not within valid range [0,200).  Apply this cut before getting tracking corrections.  Terminating execution." << std::endl;
    std::exit(1);
  }

  double rmin = getRmin(eta,phi,jtPt,jtEta,jtPhi,nref);
  double corr = (1-getFake(pt,eta,phi,cent,rmin))/getEfficiency(pt,eta,phi,cent,rmin);
  return corr;  
}

/* USAGE

 * First get the correction tables and place them in a subdirectory called 'PbPbFactorizedCorrections/'
 * Official PbPb corrections (as of October 9 2014) can currently be found at 
 *      https://github.com/dgulhan/TrackCorrectionTables/tree/master/akVs3Calo_20140920
 *
 * An archive of correction tables is provided at:
 * 	https://github.com/abaty/TrackingCorrectionArchive

 * intializeCorrections loads the histograms containing the corrections, and
 * should be called before using the corrections:
 * initializeCorrections();
 *
 * Track Pt should be above 0.5.
 * Eta should have |eta|<2.4.
 * Centrality given using bins of 0.5% (200 hiBins total) i.e. hiBin of 6 correspondes to 2.5-3%.
 *
 * Rmin is defined as the distance to the nearest jet with pt>50 GeV/c and |eta|<2.
 * It is calculated with sqrt(dphi^2+deta^2) between the track and the jet.
 * The function calculates this for you, but you have to feed it arrays with the jetPt, jetEta, jetPhi, and number of jets (nref) for each event.
 *   
 *   getCorrection gives the total correction with Fake and Efficiency acounted for.
 *   required parameters are:
 *     
 *     track pt
 *     track eta
 *     track phi
 *     centrality bin
 *     an array of the pt of all jets in the event
 *     an array of the eta of all jets in the event
 *     an array of the phi of all jets in the event
 *     the number of jets in the event    */

/*  Example code
 
 initializeCorrections();
 HiForest *  h = new HiForest("/mnt/hadoop/cms/store/user/velicanu/HydjetDrum_Pyquen_Dijet100_FOREST_Track8_Jet24_FixedPtHat_v0/0.root","forest");
 h->LoadNoTrees();
 h->hasTrackTree = true;
 h->hasEvtTree = true;
 h->hasAkVs3CaloJetTree = true;

 for(int i=0; i<5; i++)
   {
     h->GetEntry(i);

     double cent = h->evt.hiBin;

     //track loop
     for( int j=0; j<20; j++)
     {
       double pt = h->track.trkPt[j];
       double eta = h->track.trkEta[j];
       double phi = h->track.trkPhi[j];

       if(pt<=0.5) continue;

     //correction is grabbed here
       double corr = getCorrection(pt,eta,phi,cent,h->akVs3Calo.jtpt,h->akVs3Calo.jteta,h->akVs3Calo.jtphi,h->akVs3Calo.nref);
       std::cout << corr  << std::endl;
     }
   }
 }
*/
