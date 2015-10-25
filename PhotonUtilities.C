bool HiForest::isSpike(int j)
{
   if (fabs(photon.phoEta->at(j))<1.479) {
      double swiss = photon.pho_swissCrx->at(j);
      if (swiss>0.9) return 1;
      if (fabs(photon.pho_seedTime->at(j))>3) return 1;
      if (photon.phoSigmaIEtaIEta_2012->at(j)<0.002) return 1;
      if (photon.phoSigmaIPhiIPhi_2012->at(j)<0.002) return 1;
   }
   return 0;
}

bool HiForest::isLooseEGamma(int j)
{
   
   if (fabs(photon.phoEta->at(j))<1.479) {
      // Barrel photon                                                                                                                       
      if (photon.phoHoverE->at(j)>0.1) return 0;
      if ((photon.phoSCRawE->at(j)/photon.phoE->at(j))<0.5) return 0;
   } else {
      // Endcap photon                                                                                                  
      return 0;  // Need to update to include endcap photons                                                            
   }
   
   return 1;
}

bool HiForest::isLoosePhoton(int j)
{
  //
  //
   if (fabs(photon.phoEta->at(j))<1.479) {
      // Barrel photon                                                                                                                       
      if (photon.phoHoverE->at(j)>0.1) return 0;
     
      //if (photon.pho_isEle->at(j)) return 0;   // FIXME
      if ((photon.phoSCRawE->at(j)/photon.phoE->at(j))<0.5) return 0;
   } else {
      // Endcap photon                                                                                                  
      return 0;  // Need to update to include endcap photons                                                            
   }

   return 1;
}

bool HiForest::isGoodPhoton(int j)
{

   if (fabs(photon.phoEta->at(j))<1.479) {
      // Barrel photon                                                                                                                                                                   
      if (photon.phoHoverE->at(j)>0.1) return 0;
      //if (photon.pho_isEle->at(j)) return 0;   // FIXME
      if ((photon.phoSCRawE->at(j)/photon.phoE->at(j))<0.5) return 0;
      if (photon.phoSigmaIEtaIEta->at(j)>0.010) return 0;
      if ((photon.pho_ecalClusterIsoR4->at(j)+photon.pho_hcalRechitIsoR4->at(j)+photon.pho_trackIsoR4PtCut20->at(j))/0.9> 5.0 ) return 0;
   } else {
      // Endcap photon
      return 0;  // Need to update to include endcap photons
   }

   return 1;
}

bool HiForest::isIsolatedPhoton(int j)
{

   if (fabs(photon.phoEta->at(j))<1.479) {
      // Barrel photon                                                                                                                                                                   
      if (photon.phoHoverE->at(j)>0.1) return 0;
      //if (photon.pho_isEle->at(j)) return 0;   // FIXME
      if ((photon.phoSCRawE->at(j)/photon.phoE->at(j))<0.5) return 0;
      if ((photon.pho_ecalClusterIsoR4->at(j)+photon.pho_hcalRechitIsoR4->at(j)+photon.pho_trackIsoR4PtCut20->at(j))/0.9> 1.0 ) return 0;
   } else {
      // Endcap photon
      return 0;  // Need to update to include endcap photons
   }

   return 1;
}


bool HiForest::isMCSignal(int j)
{
//Yen-Jie: Matching broken (no gen-reco matching in ggNtuple , use HiForest::MatchGenPhoton()

  if ( photon.isGenMatched->at(j) != 1) 
    return 0;
  if ( fabs(photon.mcMomPID->at(photon.genMatchedIdx->at(j))) > 22)
    return 0;
  if ( fabs(photon.mcCalIsoDR04->at(photon.genMatchedIdx->at(j))) > 5)
    return 0;
  return 1;
}

bool HiForest::isDirectPhoton(int j)
{

  if ( photon.isGenMatched->at(j) != 1)
    return 0;
  if ( fabs(photon.mcMomPID->at(photon.genMatchedIdx->at(j))) != 22)
    return 0;
  
  return 1;
}

bool HiForest::isFragPhoton(int j)
{
  if ( photon.isGenMatched->at(j) != 1)
    return 0;
  if ( fabs(photon.mcMomPID->at(photon.genMatchedIdx->at(j))) >= 22)
    return 0;
  return 1;
}


float HiForest::getCorrEt(int j)
{
   if ( fabs(photon.phoEta->at(j))>1.479) return  photon.phoEt->at(j); // photon correction valid only for barrel photons
   if ( photon.phoEt->at(j)<20 ) return -100;
   
   if  ( (collisionMode == cPPb) || (collisionMode == cPP) )  {
     if ( photon.phoR9->at(j) > 0.94 )
       return  ( photon.phoEt->at(j) / (0.9969-0.0000289*photon.phoEt->at(j)) ) ; 
     else 
       return   ( photon.phoEt->at(j) / (0.9957+0.0000343*photon.phoEt->at(j)) ) ; 
   }
   else  {  // ( if collisionMode == cPbPb  )
     if ( evt.hiBin == -1 ) 
       return photon.phoEt->at(j);
     
     int icent(0);
     int isConv(0);
     if ( photon.phoR9->at(j) > 0.94 ) 
       isConv = 0;
     else
       isConv = 1;
     
     if ( evt.hiBin < 4 ) 
       icent = 1;
     else if ( evt.hiBin < 12 ) 
       icent = 2;
     else if ( evt.hiBin < 40 )
       icent = 3;
     else
       return -90;
     
     float corrFactor = fEnergyScale[isConv][icent]->Eval( photon.phoEt->at(j));
     return photon.phoEt->at(j)/corrFactor ;
   }
   
   return -1;
}

void HiForest::MatchGenPhoton()
{
    int nGEN  = photon.mcEt->size();
    int nRECO = photon.phoEt->size();
    
    float delta(0.15);
    
    if (photon.isGenMatched==0) photon.isGenMatched = new vector<bool>;
    if (photon.genMatchedIdx==0) photon.genMatchedIdx = new vector<int>;

    photon.isGenMatched->clear();
    photon.genMatchedIdx->clear();
    
    
    for (int j=0; j< nRECO;j++) {
      float currentMaxEt(-1);
      bool gpTemp(false);
      int matched=-1;
      for (int i=0;i< nGEN;i++) {
        if (photon.mcStatus->at(i)!=1 || (photon.mcPID->at(i))!=22) continue;
	if (photon.phoEt->at(i)<currentMaxEt) continue;
	if (deltaR(photon.mcEta->at(i), photon.mcPhi->at(i), photon.phoEta->at(j), photon.phoPhi->at(j))>delta) continue;
	gpTemp=true;
	matched=i;
	currentMaxEt=photon.phoEt->at(i);
      }
      photon.isGenMatched->push_back(gpTemp);
      photon.genMatchedIdx->push_back(matched);
    }  

}


