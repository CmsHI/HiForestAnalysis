
#include "TrackCorrector.h"

static const int MAXTABLE = 20;

class TrackCorrectorFactorized : public TrackCorrector {
 public: 

   TrackCorrectorFactorized(HiForest* iforest, string algo = "akVs3Calo") : TrackCorrector(iforest,algo){

	 int xn=14;
         double xptmin[]={0.4,0.4,0.4,0.4,0.4, 1, 1, 1,  1,  1, 3, 3,  3,  8};
         double xptmax[]={  1,  1,  1,  1,  1, 3, 3, 3,  3,  3, 8, 8,  8,300};

         int xcent_min[]={  0, 10, 20, 30, 50, 0,10,20, 30, 50, 0,10, 20,  0};
         int xcent_max[]={ 10, 20, 30, 50,100,10,20,30, 50,100,10,20,100,100};

         ntable = xn;
         for(int i = 0; i < ntable; ++i){
            ptmin[i] = xptmin[i];
            ptmax[i] = xptmax[i];
            cent_min[i] = xcent_min[i];
            cent_max[i] = xcent_max[i];

         }

	 for(int ipt=0; ipt<ntable;ipt++){
	    f_eff[ipt]= new TFile(Form("data/%s/eff/eff_pt%d_%d_cent%d_%d_%s_dogenjet0.root",algo.data(),(int)ptmin[ipt],(int)ptmax[ipt],cent_min[ipt],cent_max[ipt],algo.data()));
	    p_eff_cent[ipt]=(TProfile*)f_eff[ipt]->Get("p_eff_cent");
	    p_eff_pt[ipt]=(TProfile*)f_eff[ipt]->Get("p_eff_pt");
	    p_eff_accept[ipt]=(TProfile2D*)f_eff[ipt]->Get("p_eff_acceptance");
	    p_eff_rmin[ipt]=(TProfile*)f_eff[ipt]->Get("p_eff_rmin");
	    f_fake[ipt]= new TFile(Form("data/%s/fake/fake_pt%d_%d_cent%d_%d_%s_dogenjet0.root",algo.data(),(int)ptmin[ipt],(int)ptmax[ipt],cent_min[ipt],cent_max[ipt],algo.data()));
	    p_fake_cent[ipt]=(TProfile*)f_fake[ipt]->Get("p_fake_cent");
	    p_fake_pt[ipt]=(TProfile*)f_fake[ipt]->Get("p_fake_pt");
	    p_fake_accept[ipt]=(TProfile2D*)f_fake[ipt]->Get("p_fake_acceptance");
	    p_fake_rmin[ipt]=(TProfile*)f_fake[ipt]->Get("p_fake_rmin");
	 }	 
      }

      void load();

      double efficiency(int i){ return efficiencies[i];}
      double fake(int i){ return fakes[i];}
      double rmin(int i){ return rmins[i];}

 private:

   int ntable;
   double ptmin[MAXTABLE];
   double ptmax[MAXTABLE];

   int cent_min[MAXTABLE];
   int cent_max[MAXTABLE];

   double efficiencies[20000];
   double fakes[20000];
   double rmins[20000];

   TFile *f_eff[MAXTABLE];
   TProfile *p_eff_cent[MAXTABLE];
   TProfile2D *p_eff_accept[MAXTABLE];
   TProfile *p_eff_pt[MAXTABLE];
   TProfile *p_eff_rmin[MAXTABLE];
   TFile *f_fake[MAXTABLE];
   TProfile *p_fake_cent[MAXTABLE];
   TProfile2D *p_fake_accept[MAXTABLE];
   TProfile *p_fake_pt[MAXTABLE];
   TProfile *p_fake_rmin[MAXTABLE];


};

void TrackCorrectorFactorized::load(){

   jets = &(forest->akVs3Calo);
   tracks = &(forest->track);

  float cent=forest->evt.hiBin;

  //loop over tracks
  for(int itrk=0;itrk<tracks->nTrk;itrk++){
     
     float trackselect=(tracks->highPurity[itrk] && fabs(tracks->trkDxy1[itrk]/tracks->trkDxyError1[itrk])<3.0 && fabs(tracks->trkDz1[itrk]/tracks->trkDzError1[itrk])<3 && (tracks->trkPtError[itrk]/tracks->trkPt[itrk])<0.1);
     float eta=tracks->trkEta[itrk];
     
     if(fabs(eta)>2.4) continue;   
     float pt=tracks->trkPt[itrk];
     
     if(pt<0.5) continue; 
     float phi=tracks->trkPhi[itrk];
     float trkfake=tracks->trkFake[itrk];
     float trackstatus=tracks->trkStatus[itrk];
     float rmn=99;
     
     for(int ijet=0;ijet<jets->nref;ijet++){
        if(fabs(jets->jteta[ijet])>2 || jets->jtpt[ijet]<30) continue;
        float r_reco=deltaR(tracks->trkEta[itrk],tracks->trkPhi[itrk],jets->jteta[ijet],jets->jtphi[ijet]);
        if(r_reco<rmn)rmn=r_reco;
     }
     
   //get efficiency correction for the track
   float eff_accept=1;
   float eff_pt=1;
   float eff_cent=1;
   float eff_rmin=1;

   float fake_pt,fake_cent,fake_accept,fake_rmin;
   fake_pt=fake_cent=fake_accept=fake_rmin=0;

   for(int ipt=0;ipt<ntable;ipt++){
      if(pt>=ptmin[ipt] && pt<ptmax[ipt] && (0.5*cent)>=cent_min[ipt] && (0.5*cent)<cent_max[ipt]){
	 eff_pt=p_eff_pt[ipt]->GetBinContent(p_eff_pt[ipt]->FindBin(pt));
	 eff_cent=p_eff_cent[ipt]->GetBinContent(p_eff_cent[ipt]->FindBin(cent));
	 eff_accept=p_eff_accept[ipt]->GetBinContent(p_eff_accept[ipt]->GetXaxis()->FindBin(phi),p_eff_accept[ipt]->GetYaxis()->FindBin(eta));
	 if(rmn<5)eff_rmin=p_eff_rmin[ipt]->GetBinContent(p_eff_rmin[ipt]->FindBin(rmn));
 
	 fake_pt=p_fake_pt[ipt]->GetBinContent(p_fake_pt[ipt]->FindBin(pt));
	 fake_cent=p_fake_cent[ipt]->GetBinContent(p_fake_cent[ipt]->FindBin(cent));
	 fake_accept=p_fake_accept[ipt]->GetBinContent(p_fake_accept[ipt]->GetXaxis()->FindBin(phi),p_fake_accept[ipt]->GetYaxis()->FindBin(eta));
	 if(rmn<5)fake_rmin=p_fake_rmin[ipt]->GetBinContent(p_fake_rmin[ipt]->FindBin(rmn));      
      }     
   } 
   float eff=1;
   eff=eff_accept*eff_cent*eff_pt*eff_rmin;
   float fke=0;
   if(pt<100)fke=fake_accept+fake_cent+fake_pt+fake_rmin;
   if(eff==0){
      cout<<"zero efficiency"<<" eta="<<eta<<" pt="<<pt<<" phi="<<phi<<" cent="<<cent<<endl;
      if(pt>100)eff=0.8;
      else eff=1;
   }

   //fill in the track arrays
   efficiencies[itrk] = eff;
   fakes[itrk] = fke;
   rmins[itrk] = rmn;
  }
   
}
 



