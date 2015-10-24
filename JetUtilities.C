
//#include "JetSmear.h"
#include "TRandom.h"
#include "TMath.h"

class JetIndex{
public:
   double pt;
   int index;
};


bool comparePt(JetIndex a, JetIndex b) {return a.pt > b.pt;}


double getProjectedZ(float* z, float* dtheta, double jetpt, double jeteta, double jetphi, double trackpt, double tracketa, double trackphi, double eventEta = 0){
  // Calculate at dijet frame                                                                                                                                         
  double jetetaB = jeteta - eventEta;
  double tracketaB = tracketa - eventEta;

  double thetaJt = 2*atan(exp(-jetetaB));
  double thetaTr = 2*atan(exp(-tracketaB));

  double dphi = trackphi - jetphi;
  double alpha = acos(cos(dphi)*sin(thetaJt)*sin(thetaTr)+cos(thetaJt)*cos(thetaTr));

  double pJet = jetpt/sin(thetaJt);
  double pTrack = trackpt/sin(thetaTr);
  dtheta[1] = alpha;
  z[1] = pTrack*cos(alpha)/pJet;

  // Calculate at lab frame                                                                                                                                           

  eventEta = 0;
  jetetaB = jeteta - eventEta;
  tracketaB = tracketa - eventEta;

  thetaJt = 2*atan(exp(-jetetaB));
  thetaTr = 2*atan(exp(-tracketaB));

  pJet = jetpt/sin(thetaJt);
  pTrack = trackpt/sin(thetaTr);

  alpha = acos(cos(dphi)*sin(thetaJt)*sin(thetaTr)+cos(thetaJt)*cos(thetaTr));

  z[3] = pTrack*cos(alpha)/pJet;
  dtheta[3] = alpha;

  // Calculate at track frame                                                                                                                                         
  eventEta = tracketa;
  jetetaB = jeteta - eventEta;
  tracketaB = tracketa - eventEta;

  thetaJt = 2*atan(exp(-jetetaB));
  thetaTr = 2*atan(exp(-tracketaB));

  pJet = jetpt/sin(thetaJt);
  pTrack = trackpt/sin(thetaTr);

  alpha = acos(cos(dphi)*sin(thetaJt)*sin(thetaTr)+cos(thetaJt)*cos(thetaTr));

  z[2] = pTrack*cos(alpha)/pJet;
  dtheta[2] = alpha;


  // Calculate at jet frame                                                                                                                                           
  eventEta = jeteta;
  jetetaB = jeteta - eventEta;
  tracketaB = tracketa - eventEta;

  thetaJt = 2*atan(exp(-jetetaB));
  thetaTr = 2*atan(exp(-tracketaB));

  pJet = jetpt/sin(thetaJt);
  pTrack = trackpt/sin(thetaTr);

  alpha = acos(cos(dphi)*sin(thetaJt)*sin(thetaTr)+cos(thetaJt)*cos(thetaTr));
  z[0] = pTrack*cos(alpha)/pJet;
  dtheta[0] = alpha;


  return z[0];
}

int findMatch(double& drmin, Jets jets, double eta, double phi, bool gen = 0, double matchR = 0.3){

  drmin = 100;
  int m = -1;
  double ptmax = 0;
  for(int i = 0; i < jets.nref; ++i){
    double dr = deltaR(jets.jteta[i],jets.jtphi[i],eta,phi);
    double pt = jets.jtpt[i];
    if(jets.rawpt[i] < 15) continue;

    if(gen && dr < matchR && pt > ptmax){
      ptmax = pt;
      drmin = dr;
      m = i;
    }else if(dr < drmin){
      drmin = dr;
      m = i;
    }

  }

  return m;
}



namespace jetsmear{
  static const double par0[3] = {0.0313613,0.00878359,0.0248872};
  static const double par1[3] = {1.55023,1.48813,1.41283};
  static const double par2[3] = {1.91448,0.607755,0};  
  //  static const double  factorDiff[3] = {0.830665,0.954202,1.03942};
  //  static const double  factorSum[3] = {1.99776,1.87422,1.78901};
  static const double  factorDiff[3] = {1.,1.,1.};
  static const double  factorSum[3] = {1.,1.,1.};

  class JetResolution{
  public:
    JetResolution(){
      for(int i = 0; i < 3; ++i){
	fReso[i] = new TF1(Form("fReso_%d",i),"sqrt(pow([0],2)+pow([1]/sqrt(x),2)+pow([2]/x,2)-(pow([3],2)+pow([4]/sqrt(x),2)+pow([5]/x,2)) )",0,300);
	fReso[i]->SetParameter(3,1.90344e-10);
	fReso[i]->SetParameter(4,1.29908e+00);
	fReso[i]->SetParameter(5,2.04609e+00);
	fReso[i]->SetParameter(0,par0[i]);
	fReso[i]->SetParameter(1,par1[i]);
	fReso[i]->SetParameter(2,par2[i]);
      }

      random = new TRandom();
      pi = TMath::Pi();      
      fGauss = new TF1("fGauss","gaus(0)",-3,3);
      fGauss->SetParameter(0,1);
      fGauss->SetParameter(1,0);

      fCentrality = new TF1("fGauss","pol1",0,3);
      fCentrality->SetParameter(0,1.);
      fCentrality->SetParameter(1,-0.2034);      
    }

    int roll(){
      bin = floor(fCentrality->GetRandom());
      if(bin == 3) bin = 2;
      phi0 = pi*(random->Uniform());
      sum = factorSum[bin]*fGauss->GetRandom();
      diff = factorDiff[bin]*fGauss->GetRandom();

      return bin;
    }

    double getFluct1(double pt){
      return fReso[bin]->Eval(pt)*(sum+diff)/2.;
    }

    double getFluct2(double pt){
      return fReso[bin]->Eval(pt)*(sum-diff)/2.;
    }

    double getFluct(Jets jets, int j){
      double pt = jets.jtpt[j];
      double fluct = getFluct1(pt);
      double dphi0 = fabs(deltaPhi(jets.jtphi[j],phi0));
      if(dphi0 >= pi/4. && dphi0 <= 3.*pi/4.) fluct = getFluct2(pt);
      return pt*fluct;
    }

    TF1* fReso[3];
    TF1* fGauss;
    TF1* fCentrality;
    TRandom* random;

    int bin;    
    double sum;
    double diff;
    double fluct1;
    double fluct2;
    double pi;
    double phi0;

  };
}



void HiForest::sortJets(TTree* jetTree, Jets& jets, double etaMax, bool allEvents, int smearType){

  jetsmear::JetResolution* res = 0;
  if(smearType==0){
    res = new jetsmear::JetResolution();
  }

  vector<TBranch*> branches(0);

   if(allEvents || currentEvent == 0){
      branches.push_back(jetTree->Branch("Lead",&jtLead,"Lead/I"));
      branches.push_back(jetTree->Branch("SubLead",&jtSubLead,"SubLead/I"));
      branches.push_back(jetTree->Branch("HasDijet",&jtHasDijet,"HasDijet/O"));
      branches.push_back(jetTree->Branch("HasLeadingJet",&jtHasLeadingJet,"HasLeadingJet/O"));

      if(smearType==0 && !mc){
	branches.push_back(jetTree->Branch("smpt",jets.smpt,"smpt[nref]/F"));
      }

      jetTree->SetAlias("AJ","(jtpt[Lead]-jtpt[SubLead])/(jtpt[Lead]+jtpt[SubLead])");
      jetTree->SetAlias("dijetEta","(jteta[Lead]+jteta[SubLead])/2.");
   }

   vector<JetIndex> vecs;
   vecs.reserve(maxEntry);

   for (int i=0; allEvents ? i<GetEntries() : 1;i++){
      if(verbose && i % 50000 == 0) cout<<"Processing Event : "<<i<<endl;
 
     if(allEvents){
	jetTree->GetEntry(i);
      }

      vecs.clear();

      if(smearType == 0)res->roll();
	      
      for(int j = 0; j < jets.nref; ++j){
	//         if(jets.jtpt[j] < ptMin) continue;
	 if(fabs(jets.jteta[j]) > etaMax) continue;
	 
	 JetIndex entry;
	 entry.pt = jets.jtpt[j];
	 entry.index = j;

	 if(smearType == 0){
	   entry.pt += res->getFluct(jets,j);
	   if(collisionMode == cPbPb && i>=0) cout<<"Flucted"<<endl;
	   jets.smpt[j] = entry.pt;
	   jets.jtpt[j] = entry.pt;
	 }
	 vecs.push_back(entry);
      }

      sort(vecs.begin(),vecs.end(),comparePt);

      jtLead=-1;
      jtSubLead=-1;
      jtHasLeadingJet = 0;
      jtHasDijet = 0;

      if(vecs.size() > 0){
	 jtLead = vecs[0].index;
	 if(smearType == 0 && jets.smpt[jtLead] > 100) jtHasLeadingJet = 1;
	 if(smearType != 0 && jets.jtpt[jtLead] > 100) jtHasLeadingJet = 1;
      }

      if(vecs.size() > 1){
	 jtSubLead = vecs[1].index;
	 if(smearType == 0 &&jets.smpt[jtSubLead] > 40){
           jtHasDijet = jtHasLeadingJet && fabs(deltaPhi(jets.jtphi[jtLead],jets.jtphi[jtSubLead])) > 2.*3.1415926/3.;
         }
	 if(smearType != 0 && jets.jtpt[jtSubLead] > 40){
	   jtHasDijet = jtHasLeadingJet && fabs(deltaPhi(jets.jtphi[jtLead],jets.jtphi[jtSubLead])) > 2.*3.1415926/3.;
	 }
      }

      for(unsigned int ib = 0; ib < branches.size(); ++ib){
	 branches[ib]->Fill();
      }

   }
   
   return;
}


void HiForest::correlateTracks(TTree* jetTree, Jets& jets, bool allEvents, bool smeared){ 

   vector<TBranch*> branches(0);

   if(allEvents || currentEvent == 0){

     if(1){
      jtChg = new Float_t[maxEntry];
      jtNeut = new Float_t[maxEntry];
      jtEM = new Float_t[maxEntry];

      jtChgGen = new Float_t[maxEntry];
      jtNeutGen = new Float_t[maxEntry];
      jtEMGen = new Float_t[maxEntry];

     

      jtPtMax = new Float_t[maxEntry];
      jtPtMean = new Float_t[maxEntry];
      jtPtMeanW = new Float_t[maxEntry];

      jtLeadType = new Int_t[maxEntry];
     }

      tjDeltaEtaLead = new Float_t[maxEntryTrack];
      tjDeltaPhiLead = new Float_t[maxEntryTrack];
      zLead = new Float_t[maxEntryTrack];

      tjDeltaEtaSubLead = new Float_t[maxEntryTrack];
      tjDeltaPhiSubLead = new Float_t[maxEntryTrack];
      zSubLead = new Float_t[maxEntryTrack];

      zOldLead = new Float_t[maxEntryTrack];
      zOldSubLead = new Float_t[maxEntryTrack];


      zSingleLead = new Float_t[maxEntryTrack];
      zLabLead = new Float_t[maxEntryTrack];

      tjDeltaThetaLead = new Float_t[maxEntryTrack];
      tjDeltaThetaLabLead = new Float_t[maxEntryTrack];
      tjDeltaThetaSingleLead = new Float_t[maxEntryTrack];


      zSingleSubLead = new Float_t[maxEntryTrack];
      zLabSubLead = new Float_t[maxEntryTrack];

      tjDeltaThetaSubLead = new Float_t[maxEntryTrack];
      tjDeltaThetaLabSubLead = new Float_t[maxEntryTrack];
      tjDeltaThetaSingleSubLead = new Float_t[maxEntryTrack];


      corrLead = new Float_t[maxEntryTrack];
      corrSubLead = new Float_t[maxEntryTrack];

      branches.push_back(jetTree->Branch("jtChg",jtChg,"jtChg[nref]/F"));
      branches.push_back(jetTree->Branch("jtNeut",jtNeut,"jtNeut[nref]/F"));
      branches.push_back(jetTree->Branch("jtEM",jtEM,"jtEM[nref]/F"));
      branches.push_back(jetTree->Branch("jtChgGen",jtChgGen,"jtChgGen[nref]/F"));
      branches.push_back(jetTree->Branch("jtNeutGen",jtNeutGen,"jtNeutGen[nref]/F"));
      branches.push_back(jetTree->Branch("jtEMGen",jtEMGen,"jtEMGen[nref]/F"));
      branches.push_back(jetTree->Branch("jtPtMax",jtPtMax,"jtPtMax[nref]/F"));
      branches.push_back(jetTree->Branch("jtPtMean",jtPtMean,"jtPtMean[nref]/F"));
      branches.push_back(jetTree->Branch("jtPtMeanW",jtPtMeanW,"jtPtMeanW[nref]/F"));
      branches.push_back(jetTree->Branch("jtLeadType",jtLeadType,"jtLeadType[nref]/I"));

      branches.push_back(trackTree->Branch("tjDetaLead",tjDeltaEtaLead,"tjDetaLead[nTrk]/F"));
      branches.push_back(trackTree->Branch("tjDphiLead",tjDeltaPhiLead,"tjDphiLead[nTrk]/F"));
      branches.push_back(trackTree->Branch("zLead",zLead,"zLead[nTrk]/F"));
      branches.push_back(trackTree->Branch("tjDetaSubLead",tjDeltaEtaSubLead,"tjDetaSubLead[nTrk]/F"));
      branches.push_back(trackTree->Branch("tjDphiSubLead",tjDeltaPhiSubLead,"tjDphiSubLead[nTrk]/F"));
      branches.push_back(trackTree->Branch("zSubLead",zSubLead,"zSubLead[nTrk]/F"));
      branches.push_back(trackTree->Branch("zOldLead",zOldLead,"zOldLead[nTrk]/F"));
      branches.push_back(trackTree->Branch("zOldSubLead",zOldSubLead,"zOldSubLead[nTrk]/F"));

      branches.push_back(trackTree->Branch("zSingleLead",zSingleLead,"zSingleLead[nTrk]/F"));
      branches.push_back(trackTree->Branch("zSingleSubLead",zSingleSubLead,"zSingleSubLead[nTrk]/F"));

      branches.push_back(trackTree->Branch("zLabLead",zLabLead,"zLabLead[nTrk]/F"));
      branches.push_back(trackTree->Branch("zLabSubLead",zSubLead,"zLabSubLead[nTrk]/F"));

      branches.push_back(trackTree->Branch("tjDthetaLead",tjDeltaThetaLead,"tjDthetaLead[nTrk]/F"));
      branches.push_back(trackTree->Branch("tjDthetaLabLead",tjDeltaThetaLabLead,"tjDthetaLabLead[nTrk]/F"));
      branches.push_back(trackTree->Branch("tjDthetaSingleLead",tjDeltaThetaSingleLead,"tjDthetaSingleLead[nTrk]/F"));

      branches.push_back(trackTree->Branch("tjDthetaSubLead",tjDeltaThetaSubLead,"tjDthetaSubLead[nTrk]/F"));
      branches.push_back(trackTree->Branch("tjDthetaLabSubLead",tjDeltaThetaLabSubLead,"tjDthetaLabSubLead[nTrk]/F"));
      branches.push_back(trackTree->Branch("tjDthetaSingleSubLead",tjDeltaThetaSingleSubLead,"tjDthetaSingleSubLead[nTrk]/F"));


      branches.push_back(trackTree->Branch("corrLead",corrLead,"corrLead[nTrk]/F"));
      branches.push_back(trackTree->Branch("corrSubLead",corrSubLead,"corrSubLead[nTrk]/F"));

      jetTree->SetAlias("jtFracChg","jtChg/jtpt");
      jetTree->SetAlias("jtFracNeut","jtNeut/jtpt");
      jetTree->SetAlias("jtFracEM","jtFracEM/jtpt");
      jetTree->SetAlias("refFracChg","jtChg/refpt");
      jetTree->SetAlias("refFracNeut","jtNeut/refpt");
      jetTree->SetAlias("refFracEM","jtFracEM/refpt");
      jetTree->SetAlias("jtFracChgGen","jtChgGen/jtpt");
      jetTree->SetAlias("jtFracNeutGen","jtNeutGen/refpt");
      jetTree->SetAlias("jtFracEMGen","jtFracEMGen/refpt");

      trackTree->SetAlias("tjDRlead","sqrt(tjDetaLead*tjDetaLead+tjDphiLead*tjDphiLead)");
      trackTree->SetAlias("tjDRsublead","sqrt(tjDetaSubLead*tjDetaSubLead+tjDphiSubLead*tjDphiSubLead)");

   }

   double correctionFactors[4] = {0,0,0,0};
   float dummy[5];

   for (int i=0; allEvents ? i<GetEntries() : 1;i++){
      if(i % 1000 == 0) cout<<"Processing Event : "<<i<<endl;
      if(allEvents){
	 jetTree->GetEntry(i);
	 trackTree->GetEntry(i);
	 hltTree->GetEntry(i);
      }

      int cbin = evt.hiBin;
      if(collisionMode == cPP) cbin = 33;

      double eventEta = 0;
      if(hasDiJet(jets)) eventEta = (jets.jteta[jtLead]+jets.jteta[jtSubLead])/2.;

      for(int j = 0; j < jets.nref; ++j){

	jtChg[j] = 0;
        jtNeut[j] = 0;
        jtEM[j] = 0;

	jtPtMax[j] = 0;
        jtPtMean[j] = 0;
        jtPtMeanW[j] = 0;

	jtLeadType[j] = 0;

	 for (int t = 0; t < track.nTrk; ++t) {

	   double jetPt = jets.jtpt[j];
	   if(smeared)jetPt = jets.smpt[j];

	    if(j == jtLead){
	       tjDeltaEtaLead[t] = track.trkEta[t] - jets.jteta[j];
	       tjDeltaPhiLead[t] = deltaPhi(track.trkPhi[t],jets.jtphi[j]);

	       zOldLead[t] = track.trkPt[t]/jetPt;
	       zLead[t] = getProjectedZ(dummy,dummy,jetPt,jets.jteta[j],jets.jtphi[j],track.trkPt[t],track.trkEta[t],track.trkPhi[t],eventEta);
	       //	       cout<<"jtpt : "<<jets.jtpt[j]<<"  spt : "<<jets.smpt[j]<<endl;

	       corrLead[t] = trackCorrections[0]->GetCorr(track.trkPt[t],track.trkEta[t],jetPt,cbin,correctionFactors);
	    }
	    if(j == jtSubLead){
	       tjDeltaEtaSubLead[t] = track.trkEta[t] - jets.jteta[j];
               tjDeltaPhiSubLead[t] = deltaPhi(track.trkPhi[t],jets.jtphi[j]);
               zSubLead[t] = getProjectedZ(dummy,dummy,jetPt,jets.jteta[j],jets.jtphi[j],track.trkPt[t],track.trkEta[t],track.trkPhi[t],eventEta);
               zOldSubLead[t] = track.trkPt[t]/jetPt;
               corrSubLead[t] = trackCorrections[1]->GetCorr(track.trkPt[t],track.trkEta[t],jetPt,cbin,correctionFactors);
	    }

	    double dr = deltaR(track.trkEta[t],track.trkPhi[t],jets.jteta[j],jets.jtphi[j]);
	    if(dr > cone) continue;
	    if(jtPtMax[j] < track.trkPt[t]) jtPtMax[j] = track.trkPt[t];
	    jtChg[j] += track.trkPt[t];
	    
	 }
      }
      for(unsigned int ib = 0; ib < branches.size(); ++ib){
         branches[ib]->Fill();
      }
   }
  
   return;
}


int HiForest::leadingJet(){ return jtLead;}
int HiForest::subleadingJet(){ return jtSubLead;}
int HiForest::thirdJet(){ return -1;}
double HiForest::deltaPhiDijet(Jets& jets){
  return fabs(deltaPhi(jets.jtphi[leadingJet()],jets.jtphi[subleadingJet()]));
}

bool HiForest::hasDiJet(Jets& jets, double pt1, double pt2, double dphiMin){ 
  if(jtSubLead < 0 || jtLead < 0) return false;
  if(deltaPhiDijet(jets) < dphiMin) return false;
  if(jets.jtpt[leadingJet()] < pt1) return false;
  if(jets.jtpt[subleadingJet()] < pt2) return false;
  return true;
};

//double HiForest::jetFracChg(int i){ return 0;}
//double HiForest::jetFracNeut(int i){ return 0;}
//double HiForest::jetFracEM(int i){ return 0;}


void HiForest::fakeRejection(TTree *jetTree, Jets &jets, bool allEvents)
{
	std::vector<TBranch *> branch;

	branch.push_back(jetTree->Branch("fr01Chg", jets.fr01Chg,
									 "fr01Chg[nref]/F"));
	branch.push_back(jetTree->Branch("fr01EM", jets.fr01EM,
									 "fr01EM[nref]/F"));
	branch.push_back(jetTree->Branch("fr01", jets.fr01,
									 "fr01[nref]/F"));

	for (int i = 0; i < (allEvents ? GetEntries() : 1); i++) {
		if (allEvents) {
			jetTree->GetEntry(i);
			trackTree->GetEntry(i);
			photonTree->GetEntry(i);
			if (i % 1000 == 0) {
				std::cout << i <<" / "<< GetEntries() << endl;
			}
		}

		for (int j = 0; j < jets.nref; j++) {
			float pseudorapidity_adapt = jets.jteta[j];
			float azimuth_adapt = jets.jtphi[j];
			float max_weighted_perp = 0;
			float sum;

			jets.fr01Chg[j] = 0;
			jets.fr01EM[j] = 0;

			// Unadapted discriminant with adaption search
			sum = 0;
			for (int k = 0; k < track.nTrk; k++) {
				const float dpseudorapidity =
					track.trkEta[k] - jets.jteta[j];
				const float dazimuth =
					deltaPhi(track.trkPhi[k], jets.jtphi[j]);
				const float angular_weight =
					exp(-50.0F * (dpseudorapidity * dpseudorapidity +
								  dazimuth * dazimuth));
				const float weighted_perp =
					angular_weight * track.trkPt[k] * track.trkPt[k];
				const float weighted_perp_square =
					weighted_perp * track.trkPt[k];

				sum += weighted_perp_square;
				if (weighted_perp >= max_weighted_perp) {
					pseudorapidity_adapt = track.trkEta[k];
					azimuth_adapt = track.trkPhi[k];
					max_weighted_perp = weighted_perp;
				}
			}
			jets.fr01Chg[j] = std::max(jets.fr01Chg[j], sum);
			sum = 0;
			for (int k = 0; k < photon.nPho; k++) {
				const float dpseudorapidity =
					photon.phoEta->at(k) - jets.jteta[j];
				const float dazimuth =
					deltaPhi(photon.phoPhi->at(k), jets.jtphi[j]);
				const float angular_weight =
					exp(-50.0F * (dpseudorapidity * dpseudorapidity +
								  dazimuth * dazimuth));
				const float weighted_perp =
					angular_weight * photon.phoEt->at(k) * photon.phoEt->at(k);
				const float weighted_perp_square =
					weighted_perp * photon.phoEt->at(k);

				sum += weighted_perp_square;
				if (weighted_perp >= max_weighted_perp) {
					pseudorapidity_adapt = photon.phoEta->at(k);
					azimuth_adapt = photon.phoPhi->at(k);
					max_weighted_perp = weighted_perp;
				}
			}
			jets.fr01EM[j] = std::max(jets.fr01EM[j], sum);
			// (First order) adapted discriminant
			sum = 0;
			for (int k = 0; k < track.nTrk; k++) {
				const float dpseudorapidity =
					track.trkEta[k] - pseudorapidity_adapt;
				const float dazimuth =
					deltaPhi(track.trkPhi[k], azimuth_adapt);
				const float angular_weight =
					exp(-50.0F * (dpseudorapidity * dpseudorapidity +
								  dazimuth * dazimuth));
				const float weighted_perp =
					angular_weight * track.trkPt[k] * track.trkPt[k];
				const float weighted_perp_square =
					weighted_perp * track.trkPt[k];

				sum += weighted_perp_square;
			}
			jets.fr01Chg[j] = std::max(jets.fr01Chg[j], sum);
			sum = 0;
			for (int k = 0; k < photon.nPho; k++) {
				const float dpseudorapidity =
					photon.phoEta->at(k) - jets.jteta[j];
				const float dazimuth =
					deltaPhi(photon.phoPhi->at(k), jets.jtphi[j]);
				const float angular_weight =
					exp(-50.0F * (dpseudorapidity * dpseudorapidity +
								  dazimuth * dazimuth));
				const float weighted_perp =
					angular_weight * photon.phoEt->at(k) * photon.phoEt->at(k);
				const float weighted_perp_square =
					weighted_perp * photon.phoEt->at(k);

				sum += weighted_perp_square;
				if (weighted_perp >= max_weighted_perp) {
					pseudorapidity_adapt = photon.phoEta->at(k);
					azimuth_adapt = photon.phoPhi->at(k);
					max_weighted_perp = weighted_perp;
				}
			}
			jets.fr01EM[j] = std::max(jets.fr01EM[j], sum);
			// Combine charged track and ECAL energy (HCAL is too
			// coarse for fake rejection purpose)
			jets.fr01[j] = jets.fr01Chg[j] + jets.fr01EM[j];
		}

		for(std::vector<TBranch *>::const_iterator iterator =
				branch.begin();
			iterator != branch.end(); iterator++) {
			(*iterator)->Fill();
		}
	}
}

double jetHadFraction(Jets& jets, int ijet, Hits& hbhe, double radius = 0.3){

  double x = 0;
  double jeteta = jets.jteta[ijet];
  double jetphi = jets.jtphi[ijet];
  double jetenergy = jets.rawpt[ijet] + jets.jtpu[ijet];

  for(int i = 0; i < hbhe.n; ++i){
    double eta = hbhe.eta[i];
    double phi = hbhe.phi[i];

    double dr = deltaR(jeteta,jetphi,eta,phi);
    if(dr < radius){
      x+= hbhe.et[i];
    }

  }


  return x/jetenergy;

}





