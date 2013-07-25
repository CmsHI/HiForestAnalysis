bool HiForest::isSpike(int j)
{
   if (photon.isEB[j]) {
      double swiss = 1-(photon.eRight[j]+photon.eLeft[j]+photon.eTop[j]+photon.eBottom[j])/photon.eMax[j];
      if (swiss>0.9) return 1;
      if (fabs(photon.seedTime[j])>3) return 1;
      if (photon.sigmaIetaIeta[j]<0.002) return 1;
      if (photon.sigmaIphiIphi[j]<0.002) return 1;
   }
   return 0;
}

bool HiForest::isLooseEGamma(int j)
{
   
   if (photon.isEB[j]) {
      // Barrel photon                                                                                                                       
      if (photon.hadronicOverEm[j]>0.1) return 0;
      if ((photon.rawEnergy[j]/photon.energy[j])<0.5) return 0;
   } else {
      // Endcap photon                                                                                                  
      return 0;  // Need to update to include endcap photons                                                            
   }
   
   return 1;
}

bool HiForest::isLoosePhoton(int j)
{

   if (photon.isEB[j]) {
      // Barrel photon                                                                                                                       
      if (photon.hadronicOverEm[j]>0.1) return 0;
      if (photon.isEle[j]) return 0;
      if ((photon.rawEnergy[j]/photon.energy[j])<0.5) return 0;
   } else {
      // Endcap photon                                                                                                  
      return 0;  // Need to update to include endcap photons                                                            
   }

   return 1;
}

bool HiForest::isGoodPhoton(int j)
{

   if (photon.isEB[j]) {
      // Barrel photon                                                                                                                                                                   
      if (photon.hadronicOverEm[j]>0.1) return 0;
      if (photon.isEle[j]) return 0;
      if ((photon.rawEnergy[j]/photon.energy[j])<0.5) return 0;
      if (photon.sigmaIetaIeta[j]>0.010) return 0;
      if ((photon.cr4[j]+photon.cc4[j]+photon.ct4PtCut20[j])/0.9> 5.0 ) return 0;
   } else {
      // Endcap photon
      return 0;  // Need to update to include endcap photons
   }

   return 1;
}

bool HiForest::isIsolatedPhoton(int j)
{

   if (photon.isEB[j]) {
      // Barrel photon                                                                                                                                                                   
      if (photon.hadronicOverEm[j]>0.1) return 0;
      if (photon.isEle[j]) return 0;
      if ((photon.rawEnergy[j]/photon.energy[j])<0.5) return 0;
      if ((photon.cr4[j]+photon.cc4[j]+photon.ct4PtCut20[j])/0.9> 1.0 ) return 0;
   } else {
      // Endcap photon
      return 0;  // Need to update to include endcap photons
   }

   return 1;
}


bool HiForest::isMCSignal(int j)
{

  if ( photon.isGenMatched[j] != 1) 
    return 0;
  if ( fabs(photon.genMomId[j]) > 22)
    return 0;
  if ( photon.genCalIsoDR04[j] > 5)
    return 0;
  return 1;
}

bool HiForest::isDirectPhoton(int j)
{

  if ( photon.isGenMatched[j] != 1)
    return 0;
  if ( photon.genMomId[j] !=22)
    return 0;
  
  return 1;
}

bool HiForest::isFragPhoton(int j)
{
  if ( photon.isGenMatched[j] != 1)
    return 0;
  if ( fabs(photon.genMomId[j]) >= 22)
    return 0;
  return 1;
}


float HiForest::getCorrEt(int j)
{
   if ( !photon.isEB[j]) return  -100; // photon correction valid only for barrel photons
   if ( photon.pt[j]<20 ) return -100; // photon correction valid only for photon pt > 40 GeV b/c we are using photon embedded sample
   
   if ( evt.hiBin == -1 ) 
     return photon.pt[j];

   int icent(0);
   int isConv(0);
   if ( photon.r9[j] > 0.94 ) 
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
   
   float corrFactor = fEnergyScale[isConv][icent]->Eval( photon.pt[j]);
   return photon.pt[j]/corrFactor ;
}



