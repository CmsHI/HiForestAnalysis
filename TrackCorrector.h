#include <iostream>
#include <vector>
#include <algorithm>
#include "TCanvas.h"
#include "TError.h"
#include "TPad.h"
#include "TString.h"
#include "TRandom1.h"
#include "TH1F.h"

#include "TFile.h"
#include "TTree.h"
#include "TH1D.h"
#include "TProfile.h"
#include "TProfile2D.h"
#include "TH2D.h"
#include "TCanvas.h"
#include "TLegend.h"
#include "TLatex.h"
#include "TString.h"
#include "TCut.h"
#include "TNtuple.h"
#include "TLine.h"
#include "hiForest.h"

class TrackCorrector{
 public: 

   TrackCorrector(HiForest* iforest, string algo = "akVs3Calo"){
      forest = iforest;
   }

   virtual double efficiency(int i){ return 0;}
   virtual double fake(int i){ return 0;}

   virtual void load(){
      jets = &(forest->akVs3Calo);
      tracks = &(forest->track);
   }
   
   HiForest* forest;
   Jets* jets;
   Tracks* tracks;
};

