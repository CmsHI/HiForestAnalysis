#ifndef TrackUtilities_C
#define TrackUtilities_C

#include <TMath.h>

// Calo Matching -----------------------------------------
void HiForest::matchTrackCalo(bool allEvents){

   if(allEvents || currentEvent == 0){
      towerEt = new Float_t[maxEntry];
      towerdR = new Float_t[maxEntry];
      hbheEt = new Float_t[maxEntry];
      hbhedR = new Float_t[maxEntry];
      
      trackTree->Branch("towerEt",towerEt,"towerEt[nTrk]/F");
      trackTree->Branch("towerdR",towerdR,"towerdR[nTrk]/F");
      trackTree->Branch("hbhedR",hbheEt,"hbhedR[nTrk]/F");
      trackTree->Branch("hbheEt",hbheEt,"hbheEt[nTrk]/F");
   }

   for (int i=0; allEvents ? i<GetEntries() : 1;i++){
      if(allEvents) GetEntry(i);
      for (int j=0;j<track.nTrk;j++) {
	 int matchedTower = getMatchedCaloTowerAllowReuse(j);
	 int matchedHBHE  = getMatchedHBHEAllowReuse(j);
	 float matchedTowerdR = deltaR(track.trkEta[j],track.trkPhi[j],tower.eta[matchedTower],tower.phi[matchedTower]);
	 float matchedHbhedR = deltaR(track.trkEta[j],track.trkPhi[j],hbhe.eta[matchedHBHE],hbhe.phi[matchedHBHE]);
	 towerEt[j]=tower.et[matchedTower];
	 towerdR[j]=matchedTowerdR;
	 hbheEt[j]=hbhe.et[matchedHBHE];
	 hbhedR[j]=matchedHbhedR;
      }
      trackTree->Fill();
   }
 
}

int HiForest::getMatchedCaloTowerAllowReuse(int j)
{
   int best=-1;
   float bestDR2 = 1e10;
   float eta = track.trkEta[j];
   float phi = track.trkPhi[j];
   for (int i=0; i<tower.n; i++)
      {
	 float dR2 = deltaR2(eta,phi,tower.eta[i],tower.phi[i]);
	 if (dR2<bestDR2) {
	    bestDR2 = dR2;
	    best = i;
	 }
      }

   return best;
}


int HiForest::getMatchedHBHEAllowReuse(int j)
{
   int best=-1;
   float bestDR2 = 1e10;
   float eta = track.trkEta[j];
   float phi = track.trkPhi[j];
   for (int i=0; i<hbhe.n; i++)
      {
	 float dR2 = deltaR2(eta,phi,hbhe.eta[i],hbhe.phi[i]);
	 if (dR2<bestDR2) {
	    bestDR2 = dR2;
	    best = i;
	 }
      }

   return best;
}

bool HiForest::selectTrack(int j){

   if(j >= track.nTrk) return 0;

   if(1 || collisionMode==cPPb){
      if(!(track.highPurity[j])) return 0 ;
      if(TMath::Abs(track.trkDz1[j]/track.trkDzError1[j]) > 3) return 0 ;
      if(TMath::Abs(track.trkDxy1[j]/track.trkDxyError1[j]) > 3) return 0 ;
      if(track.trkPtError[j]/track.trkPt[j]>0.1) return 0 ;
      if(TMath::Abs(track.trkEta[j]) > 2.4) return 0;
      if(track.trkPt[j] < 0.4) return 0;      
   }else{
      cout<<"Track selection not implemented for this type of collision!"<<endl;
      return 0;
   }


   return 1;
   
}



#endif
