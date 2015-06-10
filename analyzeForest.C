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

#include "FlowReconstructor.h"

using namespace std;

static const bool centralOnly = 1;
static const double matchR = 0.5;

void analyzeForest(
                   const char* infname = "/data_CMS/cms/yilmaz/HiForest_HYDJET_Track8_Jet21_STARTHI53_LV1_merged_forest_0.root",
		   const char* outname = "ntuple_data_PbPb_akPu3PF_04.root",
		   bool MC = 0,
		   bool PbPb = 0,
		   double jetEtaMax = 2,
		   int centIndex = 0, int etaBin = 0, int leadJetPtBin = 0, int trackPtBin = 0
		   ){

   cout<<"Begin"<<endl;

   bool mini = 1;


   int Nevents = 20000;
   Nevents = -1;

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


  double trkMin = 4;

  double leadPtMin = 100;
  double jetTrackMin = 4;


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
  
  double pi = TMath::Pi();
  cout<<"x"<<endl;

  FlowReconstructor* flow;

  if(doFlow) flow = new FlowReconstructor();
  cout<<"x"<<endl;

  string trackVars = "";
  string evtVars = "";
  string dijetVars = "";
  string dijetExtraVars = "";

  string matchedVars = "";
  string jetVars = "";
  string flowVars = "";
  string flowVarsA = "";
  string flowVarsB = "";
  string flowVarsC = "";

  evtVars += "evt:run:bin:hfp:hfm:zdc:vz:jet80:ntrk:npix:psi:noise:pthat:nside:nps:npb:npscom:npbcom:hfs:hfb:nls:nlb:nlscom:nlbcom";
  dijetVars += "jtpt1:jteta1:jtphi1:jtpt2:jteta2:jtphi2:jtpt3:jteta3:jtphi3:dphi"
     ":trkMax1:trkMax2:trkMax3";

  dijetExtraVars += "njet10:njet20:njet30:njet40:njet50:njet100"
     ":ngen10:ngen20:ngen30:ngen50"
     ":trkSum1:trkSum2:trkSum3"
     ":pu1:pu2:pu3"
     ":puc1:puc2:puc3"
     ":raw1:raw2:raw3"
     ":had1:had2:had3"
     ":matchPt1:matchPt2:matchPt3";
  
  matchedVars += "refpt1:refpt2:refpt3:pt1:pt2:pt3:type";

  flowVars += "v2:v2s:psi:psis:v2p:v2ps:psip:psips:v2m:v2ms:psim:psims:v2pm:v2mp:v2pp:v2mm";

  jetVars += evtVars;
  jetVars += ":";
  jetVars += dijetVars;
  jetVars += ":";
  jetVars += "pt:eta:phi";

  if(MC){
     jetVars += ":";
     jetVars += "genpt:geneta:genphi:dijetType";
  }

  trackVars += evtVars;
  trackVars += ":";
  trackVars += dijetVars;
  trackVars += ":";

  trackVars += "pt:eta:phi:dr1:dr2:bkg1a:bkg1b:bkg1c:bkg2a:bkg2b:bkg2c";
  trackVars += ":";
  trackVars += "z1:z2:z1a:z2a:z1b:z2b:z1c:z2c";

  dijetVars += ":";
  dijetVars += dijetExtraVars;


  cout<<"Filling event variables : "<<evtVars.data()<<endl;
  cout<<"Filling dijet variables : "<<dijetVars.data()<<endl;
  cout<<"Filling mc variables    : "<<matchedVars.data()<<endl;
  cout<<"Filling jet variables   : "<<jetVars.data()<<endl;
  cout<<"Filling track variables : "<<trackVars.data()<<endl;


  TNtuple *ntjet,*ntdijet,*ntmatch,*ntevt,*ntFlowA,*ntFlowB,*ntFlowC,*nttrk;

  ntdijet = new TNtuple("ntdijet","",dijetVars.data());
  if(MC) ntmatch = new TNtuple("ntmatch","",matchedVars.data());
  ntevt = new TNtuple("ntevt","",evtVars.data());

  if(doFlow){
     ntFlowA = new TNtuple("ntFlowA","",flowVars.data());
  }

  if(doInclusiveJets){
     ntjet = new TNtuple("ntjet","",jetVars.data());
  }
  if(fillTracks){
     nttrk = new TNtuple("nttrk","",trackVars.data());
  }

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
       jets2 = &(t->akPu3Calo);
       jets0 = &(t->ak3PF);


     }
     if(R == 5){
       jets1 = &(t->akPu5PF);
       jetTree1 = t->akPu5PFJetTree;
       jets2 = &(t->akPu5Calo);
       jets0 = &(t->ak5PF);

     }


   }else{

     if(R == 3){
       jets1 = &(t->akPu3PF);
       jetTree1 = t->akPu3PFJetTree;
       jets2 = &(t->ak3PF);
     }
     if(R == 5){
       jets1 = &(t->akPu5PF);
       jetTree1 = t->akPu5PFJetTree;
       jets2 = &(t->ak5PF);
     }
   }

   cout<<"a"<<endl;

   //   t->sortJets(jetTree1, *jets1, 2., 0, 1); // add smearing in here. save input as ref 

   for(int iev = 0; iev < Nevents; ++iev){
     if(iev%1000==0){ 
       cout<<"Processing entry : "<<iev<<endl;
       if(doFlow) flow->realloc();
     }
     t->GetEntry(iev);

     if(!MC && !PbPb && !(t->skim.pPAcollisionEventSelectionPA && t->skim.pHBHENoiseFilter)) continue;
     if(!MC && PbPb && !(t->skim.pcollisionEventSelection && t->skim.pHBHENoiseFilter)) continue;
     

     bool jet80 = t->hlt.HLT_PAJet80_NoJetID_v1;

     // add other selection

     int noise = -1;
     if(PbPb){

	 if(!(t->skim.pHBHENoiseFilter)) noise = 10;
	 
	 if(t->hcalNoise.maxhpdhits >= 17) noise = 11;
	 if(t->hcalNoise.maxrbxhits >= 56) noise = 12;
	 
	 if(t->hcalNoise.nspikenoise >= 1) noise = 14;
	 if(t->hcalNoise.hasbadts4ts5 >= 1) noise = 15;
    
       //       if(t->hcalNoise.maxzeros >= 17) noise = 2;
       //       if(t->hcalNoise.emenergy/t->hcalNoise.hadenergy <= 0.45) noise = 3;

     }else{
       if(0){
         if(t->hcalNoise.MaxHPDHits >= 17) noise = 1;
         if(t->hcalNoise.MaxRBXHits >= 56) noise = 2;

         if(t->hcalNoise.SpikeNoiseCount >= 1) noise = 4;
         if(t->hcalNoise.HasBadTS4TS5 >= 1) noise = 5;
       }
     
       if(!(t->skim.pVertexFilterCutGplus)) noise = 1;

     }

     if(!MC && noise >= 2) continue;

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
     double vz = t->track.zVtx[t->track.maxMultVtx];

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

     if(doFlow){
       flow->reset();

       flow->fillTowers(t->tower,psi,psiM,psiP);
       flow->fit(psi);

       v2 = flow->v2;
       v2p = flow->v2p;
       v2m = flow->v2m;
       v2pp = flow->v2pp;
       v2pm = flow->v2pm;
       v2mp = flow->v2mp;
       v2mm = flow->v2mm;
       psiS = flow->psiS;
       psiPS = flow->psiPS;
       psiMS = flow->psiMS;
       v2s = flow->v2s;
       v2ps = flow->v2ps;
       v2ms = flow->v2ms;
       
     }

     vecs.clear();

     for(int j = 0; j < jets1->nref; ++j){
       if(jets1->rawpt[j] < 15) continue;

       if( fabs(jets1->jteta[j]) > jetEtaMax ) continue;

       JetIndex entry;
       entry.pt = jets1->jtpt[j];
       entry.index = j;
       vecs.push_back(entry);
       if(jets1->trackMax[j]<jetTrackMin) continue;

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

     if(!MC && (vecs.size() < 1 || jets1->jtpt[jtLead] < leadPtMin)) continue;
          
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

     double dphijet=-10;
     dphijet=acos(cos(phi1-phi2));

     int im1 = findMatch(drm1,*jets0,eta1,phi1);
     int im2 = findMatch(drm2,*jets0,eta2,phi2);
     int im3 = findMatch(drm3,*jets0,eta3,phi3);

     if(im1 >= 0 ){
       pu1 = jets0->rawpt[im1]-raw1;
       puc1 = jets0->jtpt[im1]-pt1;
     }

     if(im2 >= 0 ){
       pu2 = jets0->rawpt[im2]-raw2;
       puc2 = jets0->jtpt[im2]-pt2;
     }

     if(im3 >= 0 ){
       pu3 = jets0->rawpt[im3]-raw3;
       puc3 = jets0->jtpt[im3]-pt3;
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

	if(jtLead == ig1 && jtSubLead == ig2) dijetType = 0;
        else if(jtLead == ig1 && jtSubLead == ig3) dijetType = 1;
        else if(jtLead == ig2 && jtSubLead == ig1) dijetType = 2;
        else if(jtLead == ig2 && jtSubLead == ig3) dijetType = 3;
        else if(jtLead == ig3 && jtSubLead == ig1) dijetType = 4;
        else if(jtLead == ig3 && jtSubLead == ig2) dijetType = 5;

     }

     double dijetEta = (eta1+eta2)/2;

     if(doGenParticles){
       
       for(int i = 0; i < t->genparticle.mult; ++i){
	 double peta = t->genparticle.eta[i];
         double petaCOM = peta - etaCOM;

         if(4. < peta && peta < 5.2){
	   if(t->genparticle.sube[i] == 0) hfs += t->genparticle.pt[i];
	   else hfb += t->genparticle.pt[i];
	 }


         if(fabs(peta) < 2.4){
	   if(t->genparticle.chg[i] == 0) continue;
	   if(t->genparticle.pt[i] > 0.4){
	     if(t->genparticle.sube[i] == 0) nps++;
	     else npb++;
	   }
	   if(t->genparticle.pt[i] > 0.1 && t->genparticle.pt[i] < 1){
             if(t->genparticle.sube[i] == 0) nls++;
             else nlb++;
           }


	 }
	 if(fabs(petaCOM) < 2.4){
	   if(t->genparticle.chg[i] == 0) continue;
	   if(t->genparticle.pt[i] > 0.4){
             if(t->genparticle.sube[i] == 0) npscom++;
             else npbcom++;
           }
	   if(t->genparticle.pt[i] > 0.1 && t->genparticle.pt[i] < 1){
             if(t->genparticle.sube[i] == 0) nlscom++;
             else nlbcom++;
           }
         }
       }
       
       if(doTracks){

     for(int i = 0; i < t->track.nTrk; ++i){

       if(!t->selectTrack(i)) continue;

       double dphitrk = acos(cos(t->track.trkPhi[i]-phi1));
       if(dphitrk < 2.*pi/3. && dphitrk > pi/3.) nside++;

       double tdr1 = deltaR(t->track.trkEta[i],t->track.trkPhi[i],eta1,phi1);
       double tdr2 = deltaR(t->track.trkEta[i],t->track.trkPhi[i],eta2,phi2);

       double bkg1a = deltaR(t->track.trkEta[i],t->track.trkPhi[i],-eta1,phi1);
       double bkg1b = deltaR(t->track.trkEta[i],t->track.trkPhi[i],eta1,phi1+pi);
       double bkg1c = deltaR(t->track.trkEta[i],t->track.trkPhi[i],-eta1,phi1+pi);

       double bkg2a = deltaR(t->track.trkEta[i],t->track.trkPhi[i],-eta2,phi2);
       double bkg2b = deltaR(t->track.trkEta[i],t->track.trkPhi[i],eta2,phi2+pi);
       double bkg2c = deltaR(t->track.trkEta[i],t->track.trkPhi[i],-eta2,phi2+pi);

       double drMax = 10000.;

       if(tdr1 > drMax && 
	  tdr2 > drMax &&
	  bkg1a > drMax &&
	  bkg1b > drMax &&
	  bkg1c > drMax &&
	  bkg2a > drMax &&
	  bkg2b > drMax &&
	  bkg2c > drMax) continue;

       if(jtLead > -1){
	 getProjectedZ(z1,tdt1,pt1,eta1,phi1,t->track.trkPt[i],t->track.trkEta[i],t->track.trkPhi[i],dijetEta);
	 getProjectedZ(z1a,tdt1a,pt1,-eta1,phi1,t->track.trkPt[i],t->track.trkEta[i],t->track.trkPhi[i],dijetEta);
         getProjectedZ(z1b,tdt1b,pt1,eta1,phi1+pi,t->track.trkPt[i],t->track.trkEta[i],t->track.trkPhi[i],dijetEta);
         getProjectedZ(z1c,tdt1c,pt1,-eta1,phi1+pi,t->track.trkPt[i],t->track.trkEta[i],t->track.trkPhi[i],dijetEta);
       }

       if(jtSubLead > -1){
	 getProjectedZ(z2,tdt2,pt2,eta2,phi2,t->track.trkPt[i],t->track.trkEta[i],t->track.trkPhi[i],dijetEta);
	 getProjectedZ(z2a,tdt2a,pt2,-eta2,phi2,t->track.trkPt[i],t->track.trkEta[i],t->track.trkPhi[i],dijetEta);
         getProjectedZ(z2b,tdt2b,pt2,eta2,phi2+pi,t->track.trkPt[i],t->track.trkEta[i],t->track.trkPhi[i],dijetEta);
         getProjectedZ(z2c,tdt2c,pt2,-eta2,phi2+pi,t->track.trkPt[i],t->track.trkEta[i],t->track.trkPhi[i],dijetEta);
       }


       float trkentry[] = {
	 (float)evt,(float)run,(float)t->evt.hiBin,(float)hfp,(float)hfm,(float)zdc,(float)vz,(float)jet80,(float)ntrk,(float)npix,(float)psi,(float)noise,(float)pthat,(float)
	 nside,(float)nps,(float)npb,(float)npscom,(float)npbcom,(float)hfs,(float)hfb,(float)nls,(float)nlb,(float)nlscom,(float)nlbcom,(float)
	  pt1,(float)eta1,(float)phi1,(float)pt2,(float)eta2,(float)phi2,(float)pt3,(float)eta3,(float)phi3,(float)dphijet,(float)
	 trkMax1,(float)trkMax2,(float)trkMax3,(float)
	  t->track.trkPt[i],(float)t->track.trkEta[i],(float)t->track.trkPhi[i],(float)
	  tdr1,(float)tdr2,(float)
	  bkg1a,(float)bkg1b,(float)bkg1c,(float)bkg2a,(float)bkg2b,(float)bkg2c,(float)
	 z1[frame],z2[frame],
	  z1a[frame],z2a[frame],
	  z1b[frame],z2b[frame],
	  z1c[frame],z2c[frame],	  
       };
       
       if(fillTracks) nttrk->Fill(trkentry);

     }
     }
     }
     
     float evtentry[] = {(float)evt,(float)run,(float)t->evt.hiBin,(float)hfp,(float)hfm,(float)zdc,(float)vz,(float)jet80,(float)ntrk,(float)npix,(float)psi,(float)noise,(float)pthat,(float)nside,(float)nps,(float)npb,(float)npscom,(float)npbcom,(float)hfs,(float)hfb,(float)nls,(float)nlb,(float)nlscom,(float)nlbcom};     
     float dijetentry[] = {(float)pt1,(float)eta1,(float)phi1,(float)pt2,(float)eta2,(float)phi2,(float)pt3,(float)eta3,(float)phi3,(float)dphijet,
			   (float)trkMax1,(float)trkMax2,(float)trkMax3,
			   (float)njt10,(float)njt20,(float)njt30,(float)njt40,(float)njt50,(float)njt100,
			   (float)ngen10,(float)ngen20,(float)ngen30,(float)ngen50,
			   (float)trkSum1,(float)trkSum2,(float)trkSum3,
			   (float)pu1,(float)pu2,(float)pu3,
			   (float)puc1,(float)puc2,(float)puc3,
			   (float)raw1,(float)raw2,(float)raw3,
			   (float)had1,(float)had2,(float)had3,
			   (float)matchPt1,(float)matchPt2,(float)matchPt3
     };

     float matchedentry[] = {(float)refpt1,(float)refpt2,(float)refpt3,(float)genpt1,(float)genpt2,(float)genpt3,(float)dijetType};
     float flowentryA[] = {(float)v2,(float)v2s,(float)psi,(float)psiS,(float)v2p,(float)v2ps,(float)psiP,(float)psiPS,(float)v2m,(float)v2ms,(float)psiM,(float)psiMS,(float)v2pm,(float)v2mp,(float)v2pp,(float)v2mm};

     ntevt->Fill(evtentry);
     ntdijet->Fill(dijetentry);
     if(MC) ntmatch->Fill(matchedentry);
     if(doFlow) ntFlowA->Fill(flowentryA);

     if(doInclusiveJets){
	vecs.clear();
	for(int j = 0; j < jets1->nref; ++j){
	  if(jets1->rawpt[j] < 15) continue;

	   //       if(j == jtLead) continue;
	   if( fabs(jets1->jteta[j]) > jetEtaMax ) continue;
	   if( jets1->jtpt[j] < ptSubLeadMin) continue;
	   
	   JetIndex entry;
	   entry.pt = jets1->jtpt[j];
	   entry.index = j;
	   vecs.push_back(entry);
	}
	
	sort(vecs.begin(),vecs.end(),comparePt);

     for(int j = 0; j < vecs.size(); ++j){

       int jj = vecs[j].index;

       double pt=-9, eta=-9, phi=-9, had=-9, ch=-9, trk=-9, ntrk=-9, ptm=-9, drm=-9, pu=-9;
       double genpt=-9, geneta=-9, genphi=-9;

       pt = jets1->jtpt[jj];
       eta = jets1->jteta[jj];
       phi = jets1->jtphi[jj];

       genpt = jets1->refpt[jj];
       geneta = jets1->refeta[jj];
       genphi = jets1->refphi[jj];

       float jentry[] = {(float)evt,(float)run,(float)t->evt.hiBin,(float)hfp,(float)hfm,(float)zdc,(float)vz,(float)jet80,(float)ntrk,(float)npix,(float)psi,(float)noise,(float)pthat,
			 (float)nside,(float)nps,(float)npb,(float)npscom,(float)npbcom,(float)hfs,(float)hfb,(float)nls,(float)nlb,(float)nlscom,(float)nlbcom,
			 (float)pt1,(float)eta1,(float)phi1,(float)pt2,(float)eta2,(float)phi2,(float)pt3,(float)eta3,(float)phi3,(float)dphijet,
			 (float)trkMax1,(float)trkMax2,(float)trkMax3,
			 (float)pt,(float)eta,(float)phi,(float)
			 genpt,(float)geneta,(float)genphi,(float)dijetType 
       };

       ntjet->Fill(jentry);

     }
     } 

   }
   
   outf->Write();


   cout<<"Congrats!!!"<<endl;


}




