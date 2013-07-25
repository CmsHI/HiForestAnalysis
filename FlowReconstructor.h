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
#include <vector>

#define MAXCANDS 2000

class FlowReconstructor{
public:
  class Candidate;

  FlowReconstructor() : 
     flowHistFree(0), flowHistFreeP(0), flowHistFreeM(0), 
     flowHist(0), flowHistP(0), flowHistM(0), 
     flowHistPP(0), flowHistPM(0), flowHistMP(0), flowHistMM(0){
    
    flowEtaMin = 3;
    pi = TMath::Pi();
    Ntower = 36;
    fitoption = "RLQ0";

    candidates.reserve(MAXCANDS);

    realloc();
  }


  void realloc(){

    if(flowHistFree) delete flowHistFree;
    if(flowHistFreeP) delete flowHistFreeP;
    if(flowHistFreeM) delete flowHistFreeM;
    if(flowHist) delete flowHist;
    if(flowHistP) delete flowHistP;
    if(flowHistM) delete flowHistM;
    if(flowHistPP) delete flowHistPP;
    if(flowHistPM) delete flowHistPM;
    if(flowHistMP) delete flowHistMP;
    if(flowHistMM) delete flowHistMM;

    flowHistFree = new TH1D("flowHistFree","",Ntower,-pi,pi);
    flowHistFreeP = new TH1D("flowHistFreeP","",Ntower,-pi,pi);
    flowHistFreeM = new TH1D("flowHistFreeM","",Ntower,-pi,pi);

    flowHist = new TH1D("flowHist","",Ntower/4,0,pi/2);
    flowHistP = new TH1D("flowHistP","",Ntower/4,0,pi/2);
    flowHistM = new TH1D("flowHistM","",Ntower/4,0,pi/2);
    flowHistPM = new TH1D("flowHistPM","",Ntower/4,0,pi/2);
    flowHistMP = new TH1D("flowHistMP","",Ntower/4,0,pi/2);
    flowHistPP = new TH1D("flowHistPP","",Ntower/4,0,pi/2);
    flowHistMM = new TH1D("flowHistMM","",Ntower/4,0,pi/2);

    fFlow = new TF1("fFlow","[0]*(1+[1]*cos(2*(x-[2])))",-pi,pi);
    fFlowEP = new TF1("fFlowEP","[0]*(1+[1]*cos(2*(x)))",0,pi/2);

    fFlow->SetParLimits(1,-1,1);
    fFlowEP->SetParLimits(1,-1,1);

    fFlow->SetParLimits(2,-pi/2,pi/2);

    fFlow->FixParameter(0,1);
    fFlowEP->FixParameter(0,1);





  }


  void reset(){

    flowHist->Reset();
    flowHistP->Reset();
    flowHistM->Reset();
    flowHistPP->Reset();
    flowHistMM->Reset();
    flowHistMP->Reset();
    flowHistPM->Reset();

    flowHistFree->Reset();
    flowHistFreeP->Reset();
    flowHistFreeM->Reset();

    etsum=0;
    etx=0;
    ety=0;
    v2=0;

    etp=0;
    etxp=0;
    etyp=0;
    v2p=0;
    etm=0;
    etxm=0;
    etym=0;
    v2m=0;
    v2pm=0;
    v2mp=0;
    v2pp=0;
    v2mm=0;
    etx1=0;
    ety1=0;

    psiPS=-9;
    psiMS=-9; 
    psiS=-9;
    psiTri = -9;
    psiTriP = -9;
    psiTriM = -9;
    psiTriS = -9;
    psiTriPS = -9;
    psiTriMS = -9;

  }

  void fillRandom(double inputPsi = 0, double inputV2 = 0.1, int N = 100000){

    fFlow->SetParameter(2,inputPsi);
    fFlow->SetParameter(1,inputV2);
    fFlowEP->SetParameter(1,inputV2);

    for(int i = 0; i < N; ++i){

      double phi = fFlow->GetRandom();
      double phiEP = fFlowEP->GetRandom();

      flowHistFree->Fill(phi);
      flowHist->Fill(phiEP);
      etsum += 1;

    }


  }

  void fillTowers(const Hits& tower, double psi, double psiP, double psiM, double phi1 = 0){
    for(int i = 0; i < tower.n; ++i){
      double eta = tower.eta[i];
      if(fabs(eta) < flowEtaMin) continue;
      double et = tower.et[i];
      double phi = tower.phi[i];

      Candidate cand;
      cand.weight = et;
      cand.phi = phi;

      double phiPsi = min(fabs(deltaPhi(phi,psi)),fabs(deltaPhi(phi,psi+pi)));

      double phiJet1 = min(fabs(deltaPhi(phi,phi1)),fabs(deltaPhi(phi,phi1+pi)));

      double phiPsiM = min(fabs(deltaPhi(phi,psiM)),fabs(deltaPhi(phi,psiM+pi)));
      double phiPsiP = min(fabs(deltaPhi(phi,psiP)),fabs(deltaPhi(phi,psiP+pi)));

      bool aligned = phiPsi < pi/4;
      bool alignedP = phiPsiP < pi/4;
      bool alignedM = phiPsiM < pi/4;

      if(eta > 0){
	flowHistFreeP->Fill(phi,et);

	flowHistP->Fill(phiPsi,et);
	flowHistPM->Fill(phiPsiM,et);
	flowHistPP->Fill(phiPsiP,et);
	etp += et;

	candidatesP.push_back(cand);

	if(aligned) etyp += et;
	else etxp += et;

      }else{
	flowHistFreeM->Fill(phi,et);
	etm += et;

	if(aligned) etym += et;
	else etxm += et;

	flowHistM->Fill(phiPsi,et);
	flowHistMP->Fill(phiPsiP,et);
	flowHistMM->Fill(phiPsiM,et);
	candidatesM.push_back(cand);

      }

      if(aligned) ety += et;
      else etx += et;

      etsum += et;
      flowHist->Fill(phiPsi,et);
      flowHistFree->Fill(phi,et);

      candidates.push_back(cand);

    }

  }

  void normalize(){

    if(etsum>0) flowHist->Scale(1./flowHist->Integral()*flowHist->GetNbinsX());
    if(etp>0) flowHistP->Scale(1./flowHistP->Integral()*flowHistP->GetNbinsX());
    if(etm>0) flowHistM->Scale(1./flowHistM->Integral()*flowHistM->GetNbinsX());
    if(etp>0) flowHistPP->Scale(1./flowHistPP->Integral()*flowHistPP->GetNbinsX());
    if(etp>0) flowHistPM->Scale(1./flowHistPM->Integral()*flowHistPM->GetNbinsX());
    if(etm>0) flowHistMP->Scale(1./flowHistMP->Integral()*flowHistMP->GetNbinsX());
    if(etm>0) flowHistMM->Scale(1./flowHistMM->Integral()*flowHistMM->GetNbinsX());
    if(etsum>0) flowHistFree->Scale(1./flowHistFree->Integral()*flowHistFree->GetNbinsX());
    if(etp>0) flowHistFreeP->Scale(1./flowHistFreeP->Integral()*flowHistFreeP->GetNbinsX());
    if(etm>0) flowHistFreeM->Scale(1./flowHistFreeM->Integral()*flowHistFreeM->GetNbinsX());


  }

  void fit(double psi){

    flowHist->Fit(fFlowEP,fitoption.data());
    v2 = fFlowEP->GetParameter(1);

    flowHistP->Fit(fFlowEP,fitoption.data());
    v2p = fFlowEP->GetParameter(1);

    flowHistM->Fit(fFlowEP,fitoption.data());
    v2m = fFlowEP->GetParameter(1);

    flowHistPP->Fit(fFlowEP,fitoption.data());
    v2pp = fFlowEP->GetParameter(1);

    flowHistPM->Fit(fFlowEP,fitoption.data());
    v2pm = fFlowEP->GetParameter(1);

    flowHistMP->Fit(fFlowEP,fitoption.data());
    v2mp = fFlowEP->GetParameter(1);

    flowHistMM->Fit(fFlowEP,fitoption.data());
    v2mm = fFlowEP->GetParameter(1);

    if(psi > -5) fFlow->SetParameter(2,psi);
    flowHistFree->Fit(fFlow,fitoption.data());
    v2s = fFlow->GetParameter(1);
    psiS = fFlow->GetParameter(2);

    if(psi > -5) fFlow->SetParameter(2,psi);
    flowHistFreeP->Fit(fFlow,fitoption.data());
    v2ps = fFlow->GetParameter(1);
    psiPS = fFlow->GetParameter(2);

    if(psi > -5) fFlow->SetParameter(2,psi);
    flowHistFreeM->Fit(fFlow,fitoption.data());
    v2ms = fFlow->GetParameter(1);
    psiMS = fFlow->GetParameter(2);

  }


  void calculate(double psi = 0, double psiP = 0, double psiM = 0){

    v2 = 2*integrate(flowHist);    
    v2p = 2*integrate(flowHistP);
    v2m = 2*integrate(flowHistM);

    v2s = integrate(flowHistFree,psiS);
    v2ps = integrate(flowHistFreeP,psiPS);
    v2ms = integrate(flowHistFreeM,psiMS);

    fFlowEP->SetParameter(1,v2);
    fFlow->SetParameter(1,v2s);
    fFlow->SetParameter(2,psiS);
   
  }

  // Tower by tower correlations
  void correlate(){




  }

  
  double integrate(TH1* h, double psi = 0){

    double sum = 0;
    double normalization = 2*pi;

    for(int i = 1; i < h->GetNbinsX()+1; ++i){
    
      double y = h->GetBinContent(i) - 1;
      double x = h->GetBinCenter(i);
      
      double fy = cos(2.*(x-psi));
      sum += y*fy;
  
    }

    double sign = 1;
    if(sum < 0) sign = -1;

    return sign*sqrt(fabs(sum))/normalization;

  }


  TH1D* flowHistFree;
  TH1D* flowHistFreeP;
  TH1D* flowHistFreeM;

  TH1D* flowHist;
  TH1D* flowHistP;
  TH1D* flowHistM;
  TH1D* flowHistPM;
  TH1D* flowHistMP;
  TH1D* flowHistPP;
  TH1D* flowHistMM;

  TF1* fFlow;
  TF1* fFlowEP;

  int Ntower;
  double flowEtaMin;
  float etsum,etx,ety,v2,
    etp,etxp,etyp,v2p,
    etm,etxm,etym,v2m,
    v2pm,v2mp,v2pp,v2mm,etx1,ety1,
    v2s,v2ps,v2ms;

  double psi1, psi2, psi, psiP, psiM, psiPS, psiMS, psiS,
    psiTri, psiTriP, psiTriM, psiTriS, psiTriPS, psiTriMS;
  double pi;
  string fitoption;

  vector<Candidate> candidates;
  vector<Candidate> candidatesP;
  vector<Candidate> candidatesM;

  class Candidate{
  public:
    double phi;
    double weight;
  };



};




