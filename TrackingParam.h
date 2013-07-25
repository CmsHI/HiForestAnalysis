#ifndef TrackingParam_h
#define TrackingParam_h
#include <iostream>
#include <vector>
#include "TFile.h"
#include "TF1.h"
#include "TH1.h"
#include "TH2.h"
#include "TH3.h"
#include "TString.h"
#include "TLine.h"
using namespace std;

class TrackingParam
{
public:
   TFile *fAccCorr;
   TFile *fCenCorr;
   TFile *fResCorr;

   TH2D* hAccCorr_eta_phi_pT_05_14;
   TH2D* hAccCorr_eta_phi_pT_14_16;
   TH2D* hAccCorr_eta_phi_pT_16_18;
   TH2D* hAccCorr_eta_phi_pT_18_3;
   TH2D* hAccCorr_eta_phi_pT_3_8;
   TH2D* hAccCorr_eta_phi_pT_8_20;
   TH2D* hAccCorr_eta_phi_pT_20_Inf;

   TF1* fFitCent_05_14;
   TF1* fFitCent_14_18;
   TF1* fFitCent_18_3;
   TF1* fFitCent_3_8;
   TF1* fFitCent_8_20;
   TF1* fFitCent_20_Inf;
   
   TH2D *hFak2D;
   TH2D *hRec2D;

   TH3D *hFak3D;
   TH3D *hRec3D;

   TH1D* hResCorr;

   TrackingParam();
   Float_t GetCorr(float eta, float pt, float phi, int cent);
};

TrackingParam::TrackingParam()
{
  fAccCorr = new TFile("trkPara/v0/TrkCorr_3DHistos_pThat80_Inclusive.root");
  fCenCorr = new TFile("trkPara/v0/CentralityWeights.root");
  fResCorr = new TFile("trkPara/v0/PtResidualWeights.root");

  hAccCorr_eta_phi_pT_05_14 = (TH2D*)fAccCorr->Get("hSim3D_eta_phi_pT_05_14");
  hAccCorr_eta_phi_pT_14_16 = (TH2D*)fAccCorr->Get("hSim3D_eta_phi_pT_14_16");
  hAccCorr_eta_phi_pT_16_18 = (TH2D*)fAccCorr->Get("hSim3D_eta_phi_pT_16_18");
  hAccCorr_eta_phi_pT_18_3 = (TH2D*)fAccCorr->Get("hSim3D_eta_phi_pT_18_3");
  hAccCorr_eta_phi_pT_3_8 = (TH2D*)fAccCorr->Get("hSim3D_eta_phi_pT_3_8");
  hAccCorr_eta_phi_pT_8_20 = (TH2D*)fAccCorr->Get("hSim3D_eta_phi_pT_8_20");
  hAccCorr_eta_phi_pT_20_Inf = (TH2D*)fAccCorr->Get("hSim3D_eta_phi_pT_20_Inf");

  hFak3D = (TH3D*)fAccCorr->Get("hFak3D");
  hRec3D = (TH3D*)fAccCorr->Get("hRec3D");

  fFitCent_05_14 = (TF1*)fCenCorr->Get("fFitCent_05_14");
  fFitCent_14_18 = (TF1*)fCenCorr->Get("fFitCent_14_18");
  fFitCent_18_3 = (TF1*)fCenCorr->Get("fFitCent_18_3");
  fFitCent_3_8 = (TF1*)fCenCorr->Get("fFitCent_3_8");
  fFitCent_8_20 = (TF1*)fCenCorr->Get("fFitCent_8_20");
  fFitCent_20_Inf = (TF1*)fCenCorr->Get("fFitCent_20_Inf");

  hResCorr = (TH1D*)fResCorr->Get("hCorrRecPt_clone");  

  hFak2D = (TH2D*) hFak3D->Project3D("xy");
  hRec2D = (TH2D*) hRec3D->Project3D("xy");

}

Float_t TrackingParam::GetCorr(float eta, float pt, float phi, int cent)
{
   float weight_acc = 0.;
   float weight_cen = 0.;
   float weight_res = 0.;

   TF1 *funCentCorr = fFitCent_05_14;

   if(pt>0.5 && pt<=1.4) {
      weight_acc = hAccCorr_eta_phi_pT_05_14->GetBinContent(hAccCorr_eta_phi_pT_05_14->GetXaxis()->FindBin(eta),hAccCorr_eta_phi_pT_05_14->GetYaxis()->FindBin(phi));
      funCentCorr = fFitCent_05_14;
   }
   if(pt>1.4 && pt<=1.6) {
      weight_acc = hAccCorr_eta_phi_pT_14_16->GetBinContent(hAccCorr_eta_phi_pT_14_16->GetXaxis()->FindBin(eta),hAccCorr_eta_phi_pT_14_16->GetYaxis()->FindBin(phi));
      funCentCorr = fFitCent_14_18;
   }
   if(pt>1.6 && pt<=1.8) {
      weight_acc = hAccCorr_eta_phi_pT_16_18->GetBinContent(hAccCorr_eta_phi_pT_16_18->GetXaxis()->FindBin(eta),hAccCorr_eta_phi_pT_16_18->GetYaxis()->FindBin(phi));
      funCentCorr = fFitCent_14_18;
   }
   if(pt>1.8 && pt<=3.) {
      weight_acc = hAccCorr_eta_phi_pT_18_3->GetBinContent(hAccCorr_eta_phi_pT_18_3->GetXaxis()->FindBin(eta),hAccCorr_eta_phi_pT_18_3->GetYaxis()->FindBin(phi));
      funCentCorr = fFitCent_18_3;
   }
   if(pt>3. && pt<=8.) {
      weight_acc = hAccCorr_eta_phi_pT_3_8->GetBinContent(hAccCorr_eta_phi_pT_3_8->GetXaxis()->FindBin(eta),hAccCorr_eta_phi_pT_3_8->GetYaxis()->FindBin(phi));
      funCentCorr = fFitCent_3_8;
   }
   if(pt>8. && pt<=20.) {
      weight_acc = hAccCorr_eta_phi_pT_8_20->GetBinContent(hAccCorr_eta_phi_pT_8_20->GetXaxis()->FindBin(eta),hAccCorr_eta_phi_pT_8_20->GetYaxis()->FindBin(phi));
      funCentCorr = fFitCent_8_20;
   }
   if(pt>20.) {
      weight_acc = hAccCorr_eta_phi_pT_20_Inf->GetBinContent(hAccCorr_eta_phi_pT_20_Inf->GetXaxis()->FindBin(eta),hAccCorr_eta_phi_pT_20_Inf->GetYaxis()->FindBin(phi));
      funCentCorr = fFitCent_20_Inf;
   }

   double fakeRate = hFak2D->GetBinContent(hFak2D->GetXaxis()->FindBin(pt),hFak2D->GetYaxis()->FindBin(eta));
   double nRec     = hRec2D->GetBinContent(hRec2D->GetXaxis()->FindBin(pt),hRec2D->GetYaxis()->FindBin(eta));

   if (nRec!=0) {
      fakeRate /= nRec;
   } else {
      fakeRate = 0;
      std::cerr<<"[TrackingParam] Not enough tracks for fake rate estimation!! Set to 0.."<<std::endl;
      std::cerr<<"     eta: " << eta << std::endl;
      std::cerr<<"     phi: " << phi << std::endl;
      std::cerr<<"     pT: " << pt << std::endl;
      std::cerr<< hFak2D->GetXaxis()->FindBin(pt)<<" "<<hFak2D->GetYaxis()->FindBin(eta)<<endl;
   }
   
   //cout <<fakeRate<<" "<<nRec<<endl;
   weight_cen = funCentCorr->Eval(cent);

   int whichPtBin = hResCorr->FindBin(pt);
   weight_res = hResCorr->GetBinContent(whichPtBin);

   if(weight_cen==0)
      std::cerr<<"[TrackingParam] Centrality weight is 0!!"<<std::endl;
   if(weight_res==0)
      std::cerr<<"[TrackingParam] Residual weight is 0!!"<<std::endl;
   if(weight_acc==0) {
      std::cerr<<"[TrackingParam] Acceptance weight is 0. Can happen due to dead modules."<<std::endl;
      std::cerr<<"     eta: " << eta << std::endl;
      std::cerr<<"     phi: " << phi << std::endl;
      std::cerr<<"     pT: " << pt << std::endl;
   }

   float effcorr = (weight_acc/weight_cen/weight_res)*(1-fakeRate);

   return effcorr;
}
#endif // TrackingParam_h
