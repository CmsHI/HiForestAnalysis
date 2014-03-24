
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
			for (int k = 0; k < photon.nPhotons; k++) {
				const float dpseudorapidity =
					photon.eta[k] - jets.jteta[j];
				const float dazimuth =
					deltaPhi(photon.phi[k], jets.jtphi[j]);
				const float angular_weight =
					exp(-50.0F * (dpseudorapidity * dpseudorapidity +
								  dazimuth * dazimuth));
				const float weighted_perp =
					angular_weight * photon.pt[k] * photon.pt[k];
				const float weighted_perp_square =
					weighted_perp * photon.pt[k];

				sum += weighted_perp_square;
				if (weighted_perp >= max_weighted_perp) {
					pseudorapidity_adapt = photon.eta[k];
					azimuth_adapt = photon.phi[k];
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
			for (int k = 0; k < photon.nPhotons; k++) {
				const float dpseudorapidity =
					photon.eta[k] - jets.jteta[j];
				const float dazimuth =
					deltaPhi(photon.phi[k], jets.jtphi[j]);
				const float angular_weight =
					exp(-50.0F * (dpseudorapidity * dpseudorapidity +
								  dazimuth * dazimuth));
				const float weighted_perp =
					angular_weight * photon.pt[k] * photon.pt[k];
				const float weighted_perp_square =
					weighted_perp * photon.pt[k];

				sum += weighted_perp_square;
				if (weighted_perp >= max_weighted_perp) {
					pseudorapidity_adapt = photon.eta[k];
					azimuth_adapt = photon.phi[k];
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





