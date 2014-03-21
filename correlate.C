

#include "hiForest.h"
#include "TCanvas.h"
#include "TH2F.h"
#include "TH1F.h"
#include "TH2D.h"
#include "TH1D.h"
#include "TNtuple.h"
#include "TMath.h"

#include "TCut.h"
#include <string>

using namespace std;

static const bool centralOnly = 1;
static const double matchR = 0.5;

void correlate(
		   const char* infname = "/data_CMS/cms/yilmaz/HiForest_HYDJET_Track8_Jet21_STARTHI53_LV1_merged_forest_0.root",
		   const char* outname = "histograms_01.root",
		   bool MC = 1,
		   bool PbPb = 1,
		   double jetEtaMax = 1.6,
		   int centIndex = 0, int etaBin = 0, int leadJetPtBin = 0, int trackPtBin = 0
		   ){

   cout<<"Begin"<<endl;

   bool mini = 1;

   int Nevents = 1000;

  bool usePF = 1;
  int R = 3;

  double etaCOM = -0.465;

  bool doFlow = 0;
  bool doInclusiveJets = 1;
  bool doTracks = 1;
  bool doGenParticles = 1;

  bool fillTracks = 0;

  if(mini){
    fillTracks = 0;
    doTracks = 0;
  }

  double pi = TMath::Pi();

  double trkMin = 0.5;

  double leadPtMin = 120;
  double subleadPtMin = 50;
  double dphiMin = 2.*pi/3.;

  int frame = 1; // Dijet frame for z

  int analysisId = 0;

  double ptSubLeadMin = 30;
  double ptLeadMin = 120;

  double etLeadMin[10] = {100, 100,120,150,180,200  };
  double etLeadMax[10] = {1000,120,150,180,200,1000 };

  double tkMin[10] = {4.,  4.,5.,7.,10., 20.};
  double tkMax[10] = {100.,5.,7.,10.,20.,1000.};

  TF1* gaus = new TF1("gaus","gaus",-5,5);
  gaus->SetParameter(0,1);
  gaus->SetParameter(1,0);
  gaus->SetParameter(2,1);

  TRandom* engin = new TRandom();

  //  double fitMin[10] = {100,80,60,50,100};
  //  double fitMax[10] = {250,200,150,100,250};

  double fitMin[10] = {100,90,80,70,100};
  double fitMax[10] = {300,300,300,300,300};

  TH1::SetDefaultSumw2();
  TH2::SetDefaultSumw2();
  cout<<"x"<<endl;

  string name[10] = {"c0to10","c10to20","c20to30","c30to50","c50to100","c0to30","c30to100","c0to100"};
  cout<<"x"<<endl;

  TFile* outf = new TFile(outname,"recreate");
  
  TNtuple *nt;
  nt = new TNtuple("nt","nt","x");

  TH3D* hAxisLead = new TH3D("hAxisLead","",500,0,500,160,-1.6,1.6,200,-pi,pi);
  TH3D* hAxisSubLead = new TH3D("hAxisSubLead","",500,0,500,160,-1.6,1.6,200,-pi,pi);

  TH3D* hCorrLead = new TH3D("hCorrLead","",500,0,500,160,-1.6,1.6,200,-pi,pi);
  TH3D* hCorrSubLead = new TH3D("hCorrSubLead","",500,0,500,160,-1.6,1.6,200,-pi,pi);

  TH3D* hGenParticleLead = new TH3D("hGenParticleLead","",500,0,500,160,-1.6,1.6,200,-pi,pi);
  TH3D* hGenParticleSubLead = new TH3D("hGenParticleSubLead","",500,0,500,160,-1.6,1.6,200,-pi,pi);

  TH1D* hPtLead = new TH1D("hPtLead","",500,0,500);
  TH1D* hPtSubLead = new TH1D("hPtSubLead","",500,0,500);

  bool pp = 0;

  double ajMin[10] = {0,    0.11, 0.22, 0.33, 0. , 0, 0};
  double ajMax[10] = {0.11, 0.22, 0.33, 1.,   1. , 0 ,0};

  int nEta = 4;
  double etaMin[10] = {0,  0,    0.5,  1.};
  double etaMax[10] = {5., 0.5,  1.,   2.};

   outf->cd();

   int NxsiBin = 20;
   int NptBin = 100;
   double zBins[21];
   double ptBins[101];

   cout<<"BINS : "<<endl;
   for(int i = 0; i < NxsiBin+1; ++i){
     double xsi = -1+(10./NxsiBin)*(NxsiBin-i-1);
     cout<<"xsi : "<<xsi<<endl;
     zBins[i] = exp(-xsi);
   }

   for(int i = 0; i < NptBin+1; ++i){
     ptBins[i] = i*1000./NptBin;
   }

   HiForest * t;
   if(PbPb){
     t = new HiForest(infname,"",cPbPb,MC);
   }else{
     t = new HiForest(infname,"",cPPb,MC);
   }

   t->hasPhotonTree *= 0;
   t->hasMetTree *= 0;
   t->hasPFTree *= 0;
   t->hasPFTree *= 0;


   t->hasAk2JetTree *= 0;
   t->hasAk3JetTree *= 1;
   t->hasAk4JetTree *= 0;
   t->hasAk5JetTree *= 1;

   t->hasAkPu2JetTree *= 0;
   t->hasAkPu3JetTree *= 1;
   t->hasAkPu4JetTree *= 0;
   t->hasAkPu5JetTree *= 1;

   t->hasAk2CaloJetTree *= 0;
   t->hasAk3CaloJetTree *= 1;
   t->hasAk4CaloJetTree *= 0;
   t->hasAk5CaloJetTree *= 1;

   t->hasAkPu2CaloJetTree *= 0;
   t->hasAkPu3CaloJetTree *= 1;
   t->hasAkPu4CaloJetTree *= 0;
   t->hasAkPu5CaloJetTree *= 1;

   t->hasTrackTree *= 1;
   t->hasPixTrackTree *= 0;
   t->hasTowerTree *= 0;
   t->hasHbheTree *= 0;
   t->hasEbTree *= 0;
   t->hasGenpTree *= 0;
   t->hasGenParticleTree *= MC;

   t->InitTree();

   cout<<"a"<<endl;


   if(Nevents > 0){
      t->nEntries = Nevents;
   }else{
      Nevents = t->nEntries;
   }

   outf->cd();

   vector<JetIndex> vecs;
   vecs.reserve(maxEntry);

   float z1[4], z2[4],
     z1a[4], z2a[4],
     z1b[4], z2b[4],
     z1c[4], z2c[4];

   float tdt1[4], tdt2[4], tdt1a[4], tdt2a[4], tdt1b[4], tdt2b[4], tdt1c[4], tdt2c[4];

   Jets *jets0 = 0, * jets1 = 0, *jets2 = 0;
   TTree  *jetTree0 = 0, * jetTree1 = 0, *jetTree2 = 0;

   if(usePF){
     if(R == 3){
       jets1 = &(t->akPu3PF);
       jetTree1 = t->akPu3PFJetTree;
     }
     if(R == 5){
       jets1 = &(t->akPu5PF);
       jetTree1 = t->akPu5PFJetTree;
     }
   }else{
     if(R == 3){
       jets1 = &(t->akPu3Calo);
       jetTree1 = t->akPu3CaloJetTree;
     }
     if(R == 5){
       jets1 = &(t->akPu5Calo);
       jetTree1 = t->akPu5CaloJetTree;
     }
   }

   cout<<"a"<<endl;

   for(int iev = 0; iev < Nevents; ++iev){
     if(iev%1000==0){ 
       cout<<"Processing entry : "<<iev<<endl;
     }
     t->GetEntry(iev);

     if(!MC && !PbPb && !(t->skim.pPAcollisionEventSelectionPA && t->skim.pHBHENoiseFilter)) continue;
     if(!MC && PbPb && !(t->skim.pcollisionEventSelection && t->skim.pHBHENoiseFilter)) continue;
     
     // add other selection

     int noise = -1;

     if(!MC && noise >= 2) continue;

     cout<<"passed event selection"<<endl;

     float pthat = jets1->pthat;

     double pt1 = -9, pt2 = -9, pt3 = -9, aj = -9,
       eta1 = -9,eta2 = -9,phi1 = -9,phi2 = -9,
       dphi  = -9, adphi  = -9,
       eta3 = -9, phi3 = -9, dr = -9,
       ch1 = 0,ch2 = 0, ch1alt = 0, ch2alt = 0,

	refpt1 = 0, refpt2 = 0, refpt3 = 0,
        genpt1 = 0, genpt2 = 0, genpt3 = 0,

       pu1=-9,pu2=-9, pu3 = -9, 
       puc1=-9,puc2=-9, puc3 = -9,

       raw1=-9,raw2=-9, raw3 = -9,

       drm1=-9,drm2=-9, drm3=-9,
       psi1=-9, psi2=-9, psi=-9, psiP=-9, psiM=-9, psiPS=-9, psiMS=-9, psiS=-9,
       psiTri = -9, psiTriP = -9, psiTriM = -9, psiTriS = -9, psiTriPS = -9, psiTriMS = -9;

     float etsum=0,etx=0,ety=0,v2=0,
       etp=0,etxp=0,etyp=0,v2p=0,
       etm=0,etxm=0,etym=0,v2m=0,
       v2pm=0,v2mp=0,v2pp=0,v2mm=0,etx1=0,ety1=0,
       v2s,v2ps,v2ms;

     int dijetType = -9,njt10=0,njt20=0,njt30=0,njt40=0,njt50=0,njt100=0;
     int ngen10 = 0, ngen20=0, ngen30 = 0, ngen50 = 0;

     float trkMax1 = -9,trkMax2=-9,trkMax3=-9,
       trkSum1=-9,trkSum2=-9,trkSum3=-9,
       had1=-9,had2=-9,had3=-9,
       matchPt1=-9,matchPt2=-9,matchPt3=-9;

     int nSide = -9;

     int iPlane = 21; //21 HF, 0 tracks

     double flowEtaMin = 3;

     double hfp = t->evt.hiHFplusEta4;
     double hfm = t->evt.hiHFminusEta4;
     double zdc = t->evt.hiZDCplus;
     double vz = t->track.zVtx[t->track.maxVtx];

     double ntrk = t->evt.hiNtracks;
     double npix = t->evt.hiNpix;

     int nside = 0;
     int nps = 0;
     int npb = 0;
     int npscom = 0;
     int npbcom = 0;
     double hfs = 0, hfb = 0;
     int nls = 0, nlb = 0, nlscom = 0, nlbcom = 0;

     psi = t->evt.hiEvtPlanes[iPlane];
     psiM = t->evt.hiEvtPlanes[iPlane+2];
     psiP = t->evt.hiEvtPlanes[iPlane+1];

     v2 = 0;

     vecs.clear();

     for(int j = 0; j < jets1->nref; ++j){
       if(jets1->rawpt[j] < 15) continue;

       if( fabs(jets1->jteta[j]) > jetEtaMax ) continue;

       JetIndex entry;
       entry.pt = jets1->jtpt[j];
       entry.index = j;
       vecs.push_back(entry);

       if(jets1->jtpt[j]>10) njt10++;
       if(jets1->jtpt[j]>20) njt20++;
       if(jets1->jtpt[j]>30) njt30++;
       if(jets1->jtpt[j]>40) njt40++;
       if(jets1->jtpt[j]>50) njt50++;
       if(jets1->jtpt[j]>100) njt100++;
     }

     sort(vecs.begin(),vecs.end(),comparePt);

     int jtLead = -1, jtSubLead = -1, jtThird = -1;

     if(vecs.size() > 0) jtLead = vecs[0].index;
     if(vecs.size() > 1) jtSubLead = vecs[1].index;
     if(vecs.size() > 2) jtThird = vecs[2].index;

     cout<<"Got some jets "<<vecs.size()<<endl;
     if(vecs.size() > 0) cout<<"pt1 : "<<jets1->jtpt[jtLead]<<endl;
     if(vecs.size() > 1) cout<<"pt2 : "<<jets1->jtpt[jtSubLead]<<endl;

     if(!MC && (vecs.size() < 1 || jets1->jtpt[jtLead] < leadPtMin)) continue;
     if(vecs.size() < 2 || jets1->jtpt[jtSubLead] < subleadPtMin) continue;
     if(fabs(deltaPhi(phi1,phi2)) < dphiMin) continue;
     
     cout<<"Got dijets"<<endl;

     int evt = t->hlt.Event;
     int run = t->hlt.Run;

     if(jtLead > -1){
       pt1 = jets1->jtpt[jtLead];
       eta1 = jets1->jteta[jtLead];
       phi1 = jets1->jtphi[jtLead];
       raw1 = jets1->rawpt[jtLead];
       trkMax1 = jets1->trackMax[jtLead];
       trkSum1 = jets1->trackSum[jtLead];
       matchPt1 = jets1->matchedPt[jtLead];

       if(MC) refpt1 = jets1->refpt[jtLead];
     }

     if(jtSubLead > -1){
       pt2 = jets1->jtpt[jtSubLead];
       eta2 = jets1->jteta[jtSubLead];
       phi2 = jets1->jtphi[jtSubLead];
       raw2 = jets1->rawpt[jtSubLead];
       trkMax2 = jets1->trackMax[jtSubLead];
       trkSum2 = jets1->trackSum[jtSubLead];
       matchPt2 = jets1->matchedPt[jtSubLead];

       if(MC) refpt2 = jets1->refpt[jtSubLead];

       aj = (pt1-pt2)/(pt1+pt2);
       dphi = deltaPhi(phi1,phi2);
       adphi = fabs(dphi);

       dr= deltaR(eta2,phi2,eta1,phi1);
       //       correlateTracks(t->track,eta2,phi2,trkMin,ch2,trk2,ntrk2);
     }

     if(jtThird > -1){
	pt3 = jets1->jtpt[jtThird];
	eta3 = jets1->jteta[jtThird];
	phi3 = jets1->jtphi[jtThird];
	raw3 = jets1->rawpt[jtThird];
	trkMax3 = jets1->trackMax[jtThird];
        trkSum3 = jets1->trackSum[jtThird];
	matchPt3 = jets1->matchedPt[jtThird];

	if(MC) refpt3 = jets1->refpt[jtThird];

     }
     
     if(MC){
	vecs.clear();
	for(int j = 0; j < jets1->ngen; ++j){	   
	   JetIndex entry;
	   if(fabs(jets1->geneta[j]) > 2) continue;
	   entry.pt = jets1->genpt[j];
	   entry.index = j;
	   vecs.push_back(entry);

	   if(jets1->genpt[j] > 10)ngen10++;
           if(jets1->genpt[j] > 20)ngen20++;
           if(jets1->genpt[j] > 30)ngen30++;
           if(jets1->genpt[j] > 50)ngen50++;

	}

	sort(vecs.begin(),vecs.end(),comparePt);

	int ig1 = -1, ig2 = -1, ig3 = -1;     
	if(vecs.size() > 0){
	   ig1 = jets1->genmatchindex[vecs[0].index];
	   genpt1 = jets1->genpt[vecs[0].index];
	}
	if(vecs.size() > 1){
	   ig2 = jets1->genmatchindex[vecs[1].index];
	   genpt2 = jets1->genpt[vecs[1].index];
	}
	if(vecs.size() > 2){
	   ig3 = jets1->genmatchindex[vecs[2].index];
	   genpt3 = jets1->genpt[vecs[2].index];
	}

     }

     double dijetEta = (eta1+eta2)/2;

     cout<<"Filling jets"<<endl;

     double weight = 1;
     hPtLead->Fill(pt1,weight);
     hPtSubLead->Fill(pt2,weight);

     hAxisLead->Fill(pt1,eta1,phi1,weight);
     hAxisSubLead->Fill(pt2,eta2,phi2,weight);

     if(doGenParticles){
       
       for(int i = 0; i < t->genparticle.mult; ++i){
	 if(t->genparticle.chg[i] == 0 || t->genparticle.sta[i] != 1) continue;
	 double peta = t->genparticle.eta[i];
         double pphi = t->genparticle.phi[i];
	 hGenParticleLead->Fill(pt1,deltaEta(peta,eta1),deltaPhi(pphi,phi1),weight); 
         hGenParticleSubLead->Fill(pt2,deltaEta(peta,eta2),deltaPhi(pphi,phi2),weight);
       }
     }
       
       if(doTracks){
       
	 for(int i = 0; i < t->track.nTrk; ++i){
	   if(!t->selectTrack(i)) continue;
	   if(t->track.trkPt[i] < trkMin) continue;	   
	   double peta = t->track.trkEta[i];
	   double pphi = t->track.trkPhi[i];
	   hCorrLead->Fill(pt1,deltaEta(peta,eta1),deltaPhi(pphi,phi1),weight);
	   hCorrSubLead->Fill(pt2,deltaEta(peta,eta2),deltaPhi(pphi,phi2),weight);

	 }
       }
     
   }
   
   outf->Write();

   cout<<"Congrats!!!"<<endl;


}




