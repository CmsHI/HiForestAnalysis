#ifndef TrackingCorrections_h
#define TrackingCorrections_h
#include <iostream>
#include <vector>
#include "TFile.h"
#include "TH1.h"
#include "TH2.h"
#include "TH3.h"
#include "TString.h"
#include "TLine.h"
using namespace std;

class TrackingCorrections
{
public:
   vector<TFile*> sample_;
   vector<TFile*> normFiles_;
   vector<TString> centBin_;
   TH1D * ptBin_;
   TH1D * etaBin_;
   TH1D * jetBin_;
   
   // setup
   TString corrSetName_;
   TString trkCorrModule_;
   Int_t ptRebinFactor_;
   Int_t smoothLevel_;
   Bool_t weightSamples_;
   Bool_t isLeadingJet_;
   Bool_t trkPhiMode_;
   Bool_t ppMode_;
   
   vector<TString> levelName_;
   vector<vector<TString> > levelInput_;
   vector<TString> matName_;
   vector<Float_t> ptHatMin_;
   vector<Float_t> sampleCroSec_;
   
   Int_t numCentBins_;
   Int_t numPtBins_;
   Int_t numEtaBins_;
   Int_t numJEtBins_;
   Int_t numLevels_;
   
   // correction analysis
   vector< vector<TH1D*> >  hNoEvts_;
   vector< vector<float> >  numOfEvts_;// number of events
   vector<vector<vector<vector<TH3F*> > > > inputHists_;
   vector<vector<vector<TH3F*> > > combInputHists_;
   vector<vector<TH3F*> > correctionHists_;
   
   // inspection
   TH2D *hNum2DInsp, *hDen2DInsp;
   TH1D *hNum1DInsp, *hDen1DInsp;
   TH1D *vhPtHat[2][9], *vhJetPt[2][9], *vhCent[2][9];
   
   
   TrackingCorrections(TString name="trkCorrHisAna_djuqv1",TString mod="hitrkEffAnalyzer");
   void AddSample(TString file, Float_t pthat) {
      sample_.push_back(new TFile(file));
      //cout << "sameple" << sample_.size() << ": " << sample_.back()->GetName() << endl;
      ptHatMin_.push_back(pthat);
   }
   void AddNormFile(TString file) {
      normFiles_.push_back(new TFile(file));
   }
   void Init();
   Float_t GetCorr(Float_t pt, Float_t eta, Float_t jet, Float_t cent, Double_t * outCorr=0);
   TH2D * ProjectPtEta(TH3F * h3, Int_t zbinbeg, Int_t zbinend);
   void Write();
   TH1 * InspectCorr(Int_t lv, Int_t centBeg, Int_t centEnd, Int_t jetBegBin, Int_t jetEndBin,Int_t mode=0,Int_t begbin=0, Int_t endbin=-1);
};

TrackingCorrections::TrackingCorrections(TString name, TString mod) :
corrSetName_(name),
trkCorrModule_(mod),
ptRebinFactor_(1),
smoothLevel_(0),
isLeadingJet_(true),
trkPhiMode_(false),
ppMode_(false)
{
   centBin_.push_back("0to1");
   centBin_.push_back("2to3");
   centBin_.push_back("4to11");
   centBin_.push_back("12to19");
   if (name=="QM2011") centBin_.push_back("20to35");
   else if (name=="RAA2012") {
      centBin_.push_back("20to27");
      centBin_.push_back("28to35");
   }
   else centBin_.push_back("20to39");
   if (name.Contains("Forest2STA")) {
      centBin_.clear();
      centBin_.push_back("0to12");
      centBin_.push_back("12to40");
   }
   if (name.Contains("Forest2STAv10")) {
      centBin_.clear();
      centBin_.push_back("0to12");
      centBin_.push_back("12to30");
   }
   
   levelName_.push_back("Eff");
   levelName_.push_back("Fak");
   levelName_.push_back("Mul");
   levelName_.push_back("Sec");
   numLevels_ = levelName_.size();
   
   levelInput_.resize(numLevels_);
   levelInput_[0].push_back("heff3D"); levelInput_[0].push_back("hsim3D");
   levelInput_[1].push_back("hfak3D"); levelInput_[1].push_back("hrec3D");
   levelInput_[2].push_back("hmul3D"); levelInput_[2].push_back("heff3D");
   levelInput_[3].push_back("hsec3D"); levelInput_[3].push_back("hrec3D");
   
   matName_.push_back("Num");
   matName_.push_back("Den");
}

void TrackingCorrections::Init()
{
   cout << "==============================================" << endl;
   cout << " correction set: " << corrSetName_ << " module: " << trkCorrModule_ << endl;
   cout << " Setup - smoothLevel: " << smoothLevel_ << " ppMode: " << ppMode_ << " trkPhiMode: " << trkPhiMode_;
   cout << "         weight samples: " << weightSamples_ << endl;
   cout << "==============================================" << endl;
   // =============================
   // Setup Inputs
   // =============================
   for (UInt_t i=0; i<sample_.size(); ++i) cout << sample_[i]->GetName() << endl;
   
   if (sample_.size()==0||!sample_[0]) {
      cout << "No input correction file" << endl;
      exit(1);
   }

   if (ppMode_) {
      centBin_.clear();
      centBin_.push_back("0to40");
   }
   numCentBins_ = centBin_.size();
   
   // =============================
   // Get x,y,z bins
   // =============================
   TH3F* h3tmp = (TH3F*)sample_[0]->Get(trkCorrModule_+"/heff3D_cbin"+centBin_[0]);
   if (!h3tmp) {
      cout << "bad input: " << trkCorrModule_+"/heff3D_cbin"+centBin_[0] << " in " << sample_[0]->GetName() << endl;
      exit(1);
   }
   
   etaBin_ = (TH1D*)h3tmp->Project3D("x");
   ptBin_  = (TH1D*)h3tmp->Project3D("y");
   jetBin_ = (TH1D*)h3tmp->Project3D("z");
   
   numPtBins_ = ptBin_->GetNbinsX();
   numEtaBins_ = etaBin_->GetNbinsX();
   numJEtBins_ = jetBin_->GetNbinsX();
   
	cout << endl << "Pt " << numPtBins_ << " bins:";
	for (Int_t i=1; i<=numPtBins_+1; ++i) cout << ptBin_->GetBinLowEdge(i) << " ";
	cout << endl << "Eta " << numEtaBins_ << " bins:";
	for (Int_t i=1; i<=numEtaBins_+1; ++i) cout << etaBin_->GetBinLowEdge(i) << " ";
	cout << endl << "JEt " << numJEtBins_ << " bins:";
	for (Int_t i=1; i<=numJEtBins_+1; ++i) cout << jetBin_->GetBinLowEdge(i) << " ";
	cout << endl;
   
   // =============================
   // allocate memory for input histograms
   // =============================
   cout << "Levels: " << numLevels_ << " Samples: " << sample_.size() << " cbins: " << numCentBins_ << endl;
   vector<vector<vector<vector<TH3F*> > > > v(numLevels_,
                                              vector<vector<vector<TH3F*> > > (sample_.size(),
                                                                               vector<vector<TH3F*> > (numCentBins_,
                                                                                                       vector<TH3F*>(2)
                                                                                                       )
                                                                               )
                                              );
   inputHists_ = v;
   
   // =============================
   // load corrections
   // =============================
   for (Int_t lv=0; lv<numLevels_; ++lv) {
      cout << "Load " << levelName_[lv] << " Histograms for ptHatMin";
      for (UInt_t s=0; s<sample_.size(); ++s) {
         cout << " " << ptHatMin_[s] << endl;
         for (Int_t c=0; c<numCentBins_; ++c) {
            for (Int_t m=0; m<2; ++m) {
               TString hname(Form("%s/%s_cbin%s",trkCorrModule_.Data(),levelInput_[lv][m].Data(),centBin_[c].Data()));
               TH3F * h3 = (TH3F*)sample_[s]->Get(hname);
               if (!h3) {
                  cout << hname << " not found in correction file" << endl;
                  exit(1);
               }
               TH3F * hsave = (TH3F*)h3->Clone(Form("h%s_f%.0f_c%d_%d",(corrSetName_+levelName_[lv]).Data(),ptHatMin_[s],c,m));
               inputHists_[lv][s][c][m] = hsave;
               //cout << inputHists_[lv][s][c][m]->GetName() << ": " << inputHists_[lv][s][c][m] << endl;
            }
         }
      }
      cout << endl;
   }

   
   // get the number of events                                                                                                                
   vector<vector<TH1D*> > hnoe(ptHatMin_.size(), vector<TH1D*>(numCentBins_));
   hNoEvts_ = hnoe;
   
   
   vector<vector<float> > noeTemp(ptHatMin_.size(), vector<float>(numCentBins_,1));
   numOfEvts_ = noeTemp;
   
   if (weightSamples_) {
      for (UInt_t s=0; s<ptHatMin_.size(); ++s) { // merge pt hat samples with weight                                                             
        for (Int_t c=0; c<numCentBins_; ++c) {
          TString hnameNoE(Form("hPtHat_c%d",c));
          if (normFiles_.size()) hNoEvts_[s][c] =  (TH1D*)normFiles_[s]->Get(hnameNoE);
          else {
//             hnameNoE = Form("hPtHatBeforeSel");
            hnameNoE = Form("hPtHatBeforeSel_c%d",c);
            hNoEvts_[s][c] =  (TH1D*)sample_[s]->Get(hnameNoE);
          }
          if (!hNoEvts_[s][c]) {
            cout << "bad norm file: " << hnameNoE << endl;
            exit(1);
          }
          numOfEvts_[s][c] = hNoEvts_[s][c]->Integral();
          cout << " number of events in ptHat :" << ptHatMin_[s] << ", centrality : " << centBin_[c].Data()  << "  = " << numOfEvts_[s][c] << endl;
        }
      }
   }
   
   
   // =============================
   // set sample weights
   // =============================
   sampleCroSec_.reserve(ptHatMin_.size());
   for (UInt_t s=0; s<ptHatMin_.size(); ++s) { // merge pt hat samples with weight
     if (corrSetName_=="Forest2STAv12") {
        if ( ptHatMin_[s]==100) sampleCroSec_[s] = 3.069e-05 - 5.310e-07;
        else if ( ptHatMin_[s]==170) sampleCroSec_[s] = 1.470e-06 - 5.310e-07;
        else if ( ptHatMin_[s]==200) sampleCroSec_[s] = 5.310e-07;
        else cout << endl << endl << " Error no such pt hat!!!!!" << endl << endl << endl;
     } else if (corrSetName_=="Forest2STAv14") {
        if ( ptHatMin_[s]==50 ) sampleCroSec_[s] = 1.021e-03 - 9.913e-05;
        else if ( ptHatMin_[s]==80 ) sampleCroSec_[s] = 9.913e-05 - 3.0698e-05;
        else if ( ptHatMin_[s]==100) sampleCroSec_[s] = 3.069e-05 - 1.470e-06;
        else if ( ptHatMin_[s]==170) sampleCroSec_[s] = 1.470e-06 - 5.310e-07;
        else if ( ptHatMin_[s]==200) sampleCroSec_[s] = 5.310e-07 - 1.192e-07;
        else if ( ptHatMin_[s]==250) sampleCroSec_[s] = 1.192e-07 - 3.176e-08;
        else if ( ptHatMin_[s]==300) sampleCroSec_[s] = (3.176e-08);
        else cout << endl << endl << " Error no such pt hat!!!!!" << endl << endl << endl;
     } else {
        if ( ptHatMin_[s] == 30    ) sampleCroSec_[s] = 1.079e-02 - 1.021e-03;
        else if ( ptHatMin_[s]==50 ) sampleCroSec_[s] = 1.021e-03 - 9.913e-05;
        else if ( ptHatMin_[s]==80 ) sampleCroSec_[s] = 9.913e-05 - 3.0698e-05;
        else if ( ptHatMin_[s]==100) sampleCroSec_[s] = 3.069e-05 - 1.128e-05;
        else if ( ptHatMin_[s]==120) sampleCroSec_[s] = 1.128e-05 - 1.470e-06;
        else if ( ptHatMin_[s]==170) sampleCroSec_[s] = 1.470e-06 - 5.310e-07;
        else if ( ptHatMin_[s]==200) sampleCroSec_[s] = 5.310e-07 - 1.192e-07;
        else if ( ptHatMin_[s]==250) sampleCroSec_[s] = 1.192e-07 - 3.176e-08;
        else if ( ptHatMin_[s]==300) sampleCroSec_[s] = (3.176e-08);
        else cout << endl << endl << " Error no such pt hat!!!!!" << endl << endl << endl;
     }
     if (ppMode_) {
        if ( ptHatMin_[s]==80 ) sampleCroSec_[s] = 9.913e-05 - 1.128e-05;
        else if ( ptHatMin_[s]==120) sampleCroSec_[s] = 1.128e-05 - 1.470e-06;
        else if ( ptHatMin_[s]==170) sampleCroSec_[s] = 1.470e-06 - 5.310e-07;
        else if ( ptHatMin_[s]==200) sampleCroSec_[s] = 5.310e-07 - 1.192e-07;
        else if ( ptHatMin_[s]==250) sampleCroSec_[s] = 1.192e-07;
        else cout << endl << endl << " Error no such pt hat!!!!!" << endl << endl << endl;
     }
     float basePtHat;
     if (s==0) basePtHat = 1e-9;
     sampleCroSec_[s]/=basePtHat;
     cout << "sample pthat: " << ptHatMin_[s] << ", cross section: " << sampleCroSec_[s] << endl;
   }
   
   // =============================
   // smooth inputs
   // =============================
   vector<vector<vector<TH3F*> > > vci(numLevels_,
                                      vector<vector<TH3F*> > (numCentBins_,
                                                              vector<TH3F*>(2)
                                                              )
                                      );
   combInputHists_ = vci;

//    Float_t ptHatMargin=-0.1; // 10
   for (Int_t lv=0; lv<numLevels_; ++lv) {
      for (Int_t m=0; m<2; ++m) {
         for (Int_t c=0; c<numCentBins_; ++c) {
            // declare new histograms
            combInputHists_[lv][c][m] = (TH3F*)h3tmp->Clone(Form("combInputHist_lv%d_c%d_%d",lv,c,m));
            combInputHists_[lv][c][m]->Reset();
            for (Int_t ijet=1; ijet<=numJEtBins_; ++ijet) {
               for (Int_t ipt=1; ipt<=numPtBins_; ++ipt) {
                  for (Int_t ieta=1; ieta<=numEtaBins_; ++ieta) {
                     Double_t content[2] = {0,0};
                     Double_t error[2] = {0,0};
                     // for each correction bin: merge, and smooth
                     for (Int_t ipt_neighbor=ipt; ipt_neighbor>=1||ipt_neighbor<=numPtBins_; ++ipt_neighbor) { // merge neighbor pt bins
                        if (ipt_neighbor!=ipt) {
                           if (smoothLevel_>=0) break;
                           else if (ptBin_->GetBinLowEdge(ipt_neighbor)<2 || abs(ipt_neighbor-ipt)>1) break;
                        }
                        Int_t eta_direction = (ieta>numEtaBins_/2 ? -1 : 1);
                        for (Int_t ieta_neighbor=ieta; ieta_neighbor>=1&&ieta_neighbor<=numEtaBins_; ieta_neighbor+=eta_direction) { // merge neighbor eta bins
                           if (ieta_neighbor!=ieta) {
                              if (smoothLevel_==0) break;
//                               else if ((ieta_neighbor>=1&&ieta_neighbor<=4) || (ieta_neighbor>=10&&ieta_neighbor<=13)) {
//                                  if (abs(ieta_neighbor-ieta)>=1) break;
//                               }
                              else {
                                 if (ieta_neighbor!=(numEtaBins_+1-ieta)) continue;
                              }
                           }
                           for (Int_t ijet_neighbor=ijet; ijet_neighbor>=1&&ijet_neighbor<=numJEtBins_; ++ijet_neighbor) { // merge neighbor jet bins
                              if (ijet_neighbor!=ijet) {
                                 break;
//                                  if (smoothLevel_==0||jetBin_->GetBinLowEdge(ijet_neighbor)<40) break;
//                                  else if (abs(ijet_neighbor-ijet)>=2) break;
                              }
                              for (UInt_t s=0; s<ptHatMin_.size(); ++s) { // merge pt hat samples
                                 // only merge pt hat samples that has less pt hat than this jet bin
//                                  if (!trkPhiMode_&&jetBin_->GetBinLowEdge(ijet_neighbor)>=40 && (ptHatMin_[s]+ptHatMargin > jetBin_->GetBinLowEdge(ijet_neighbor))) continue;
                                 
if (!weightSamples_) {                                 content[m]+=inputHists_[lv][s][c][m]->GetBinContent(ieta_neighbor,ipt_neighbor,ijet_neighbor);
                                 error[m] = sqrt(pow(error[m],2)+pow(inputHists_[lv][s][c][m]->GetBinError(ieta_neighbor,ipt_neighbor,ijet_neighbor),2));
                                 } else {
content[m]+=inputHists_[lv][s][c][m]->GetBinContent(ieta_neighbor,ipt_neighbor,ijet_neighbor)*sampleCroSec_[s]/numOfEvts_[s][c];
                                 error[m] = sqrt(pow(error[m],2)+pow(inputHists_[lv][s][c][m]->GetBinError(ieta_neighbor,ipt_neighbor,ijet_neighbor)*sampleCroSec_[s]/numOfEvts_[s][c],2));
                                 }
                              } // end of for pt hat loop
                           }
                        }
                     }
                     combInputHists_[lv][c][m]->SetBinContent(ieta,ipt,ijet, content[m]);
                     combInputHists_[lv][c][m]->SetBinError(ieta,ipt,ijet, error[m]);
                  } // end for each correction bin
               }
            }
         }
      }
   }

   // =============================
   // correction histograms
   // =============================
   vector<vector<TH3F*> > vc(numLevels_,vector<TH3F*>(numCentBins_));
   correctionHists_ = vc;
   for (Int_t lv=0; lv<numLevels_; ++lv) {
      for (Int_t c=0; c<numCentBins_; ++c) {
         correctionHists_[lv][c] = (TH3F*)combInputHists_[lv][c][0]->Clone(Form("correctionHists_lv%d_c%d",lv,c));
         correctionHists_[lv][c]->Divide(combInputHists_[lv][c][1]);
      }
   }
}

Float_t TrackingCorrections::GetCorr(Float_t pt, Float_t eta, Float_t jet, Float_t cent, Double_t * outCorr)
{
   // Find Correction Bin
   Int_t ptBin = ptBin_->FindBin(pt);
   Int_t etaBin = etaBin_->FindBin(eta);
   Int_t jetBin = jetBin_->FindBin(jet);
   
   Int_t bin = -1;   
   // Get the corresponding centrality bin
   if (corrSetName_.Contains("Forest2STA")) {
      if (cent<12) bin = 0;
      else bin =1;
   } else {
      if (cent<2) bin = 0;
      else if (cent<4) bin = 1;
      else if (cent<12) bin = 2;
      else if (cent<20) bin = 3;   
      else bin = 4;
   }
   if (ppMode_) bin=0;
   Double_t corr[4]={1,1,1,1};
   for (Int_t lv=0; lv<numLevels_; ++lv) {
      corr[lv] = correctionHists_[lv][bin]->GetBinContent(etaBin,ptBin,jetBin);
      if (outCorr) outCorr[lv] = corr[lv];
   }

   // if eff==0, no correction, b/c too few statistics   
   if (corr[0]<0.001) {
     cout << " warning eff=0 for pt eta jet cent: " << pt << " " << eta << " " << jet << " " << cent << endl;
   }
   Double_t eff = (corr[0]<0.001 ? 1 : corr[0]);
   Double_t fake = corr[1];
   Double_t mul = corr[2];
   Double_t sec = corr[3];
   return (1-fake)*(1-sec)/(eff*(1+mul));
}

TH2D* TrackingCorrections::ProjectPtEta(TH3F * h3, Int_t zbinbeg, Int_t zbinend)
{
   h3->GetZaxis()->SetRange(zbinbeg,zbinend);
   TH2D * h2 = (TH2D*)h3->Project3D(Form("yx_%d_%d",zbinbeg,zbinend));
   return h2;
}

void TrackingCorrections::Write()
{
   for (Int_t lv=0; lv<numLevels_; ++lv) {
      for (UInt_t s=0; s<sample_.size(); ++s) {
         for (Int_t c=0; c<numCentBins_; ++c) {
            for (Int_t m=0; m<2; ++m) {
               inputHists_[lv][s][c][m]->Write();
            }
         }
      }
   }
}

TH1 * TrackingCorrections::InspectCorr(Int_t lv, Int_t centBeg, Int_t centEnd, Int_t jetBegBin, Int_t jetEndBin, Int_t mode, Int_t begbin, Int_t endbin)
{
   Int_t rebinFactor=1;
   TH3F *hNum=0, *hDen=0;
   TH2D *hNum2D=0, *hDen2D=0, *hCorr2D=0;
   TH1D *hNum1D=0, *hDen1D=0, *hCorr1D=0;
   
   TString inspName(Form("%s_%s_Lv%d_c%d_%d_j%d_%d_%d",(corrSetName_).Data(),trkCorrModule_.Data(),lv,centBeg,centEnd,jetBegBin,jetEndBin,mode));
   if (mode>0) inspName+=Form("_bin_%d_%d",begbin,endbin);
   
   hNum = (TH3F*)combInputHists_[lv][centBeg][0]->Clone(inspName+"hNum");
   hDen = (TH3F*)combInputHists_[lv][centBeg][1]->Clone(inspName+"hDen");
   
   if (mode<=2) {
      hNum->GetZaxis()->SetRange(jetBegBin,jetEndBin);
      hDen->GetZaxis()->SetRange(jetBegBin,jetEndBin);
      hNum2D = (TH2D*)hNum->Project3D("yx");
      hDen2D = (TH2D*)hDen->Project3D("yx");
      
      // ===============================================
      // 2D Inspection
      // ===============================================
      if (mode==0) {
         hCorr2D = (TH2D*)hNum2D->Clone(inspName+"Corr2D");
         hCorr2D->Divide(hNum2D,hDen2D);
         return hCorr2D;
      }
      
      if (mode==1) {
         // ===============================================
         // 1D Pt
         // ===============================================
         hNum1D = hNum2D->ProjectionX(inspName+"Num_px",begbin,endbin);
         hDen1D = hDen2D->ProjectionX(inspName+"Den_px",begbin,endbin);
      } else if (mode==2) {
         // ===============================================
         // 1D Eta
         // ===============================================
         hNum1D = hNum2D->ProjectionY(inspName+"Num_py",begbin,endbin);
         hDen1D = hDen2D->ProjectionY(inspName+"Den_py",begbin,endbin);
      }
      
      hNum1D->Rebin(rebinFactor);
      hDen1D->Rebin(rebinFactor);
      hCorr1D = (TH1D*)hNum1D->Clone(inspName+"Corr1D");
      hCorr1D->Divide(hNum1D,hDen1D);
   } else if (mode==3) {
      // ===============================================
      // 1D Jet
      // ===============================================
      //cout << "xaxis: " << begbin << "," << endbin << endl;
      //cout << "yaxis: " << jetBegBin << "," << jetEndBin << endl;
      hNum->GetYaxis()->SetRange(jetBegBin,jetEndBin); // set pt range
      hDen->GetYaxis()->SetRange(jetBegBin,jetEndBin); // set pt range
      hNum->GetXaxis()->SetRange(begbin,endbin); // set eta range
      hDen->GetXaxis()->SetRange(begbin,endbin); // set eta range
      hNum1D = (TH1D*)hNum->Project3D("z");
      hDen1D = (TH1D*)hDen->Project3D("z");
      hNum1D->Rebin(rebinFactor);
      hDen1D->Rebin(rebinFactor);
      hCorr1D = (TH1D*)hNum1D->Clone(inspName+"Corr1Dz");
      hCorr1D->Divide(hNum1D,hDen1D);
   }
   
   if (lv==0&&centBeg==0) {
      hNum1DInsp = (TH1D*)hNum1D->Clone(Form("%s_Insp",hNum1D->GetName()));
      hDen1DInsp = (TH1D*)hDen1D->Clone(Form("%s_Insp",hDen1D->GetName()));
   }
   // Event Level Inspection
   for (UInt_t s=0; s<ptHatMin_.size(); ++s) { // merge pt hat samples with weight                                                             
      for (Int_t c=0; c<numCentBins_; ++c) {
         TString hname(Form("hPtHat_c%d",c));
         if (ppMode_) hname = "hPtHat";
         TH1D * h =  (TH1D*)sample_[s]->Get(hname);
         if (!h) {
            cout << "bad histogram: " << hname << endl;
            exit(1);
         }
         TH1D * hs = (TH1D*)h->Clone(Form("%s_weighted",h->GetName()));
         float weight = sampleCroSec_[s]/numOfEvts_[s][c];
         if (weightSamples_) hs->Scale(weight);
         if (s==0) {
            vhPtHat[0][c] = (TH1D*)h->Clone(Form("%s_merge",h->GetName()));
            vhPtHat[1][c] = (TH1D*)hs->Clone(Form("%s_merge",hs->GetName()));
         } else {
            vhPtHat[0][c]->Add(h);
            vhPtHat[1][c]->Add(hs);
         }
      }
   }
   return hCorr1D;
}
#endif // TrackingCorrections_h
