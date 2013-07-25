
#include <string>
#include <vector>
#include <iostream> //or iostream.h
#include <cmath> // or math.h
#include <TH2D.h>
#include "TNtuple.h"
#include <TH1D.h>
#include <TNtuple.h>
#include <TFile.h>
#include <TSystem.h>
#include <TF1.h>
#include <TMath.h>
#include <TCanvas.h>
#include <TProfile.h>
#include <TLegend.h>
#include <TCut.h>
#include <TLine.h>
#include "hiForest.h"

void validate(){

TH1::SetDefaultSumw2();
using namespace std;
const int npthat = 7;
int valpthat[npthat] = {15, 30, 50, 80, 170, 220, 280};
TCanvas *cv1[npthat];
TCanvas *cv2[npthat];
TCanvas *cv3[npthat];
TCanvas *cv4[npthat];
TCanvas *cv5[npthat];
TCanvas *ca1[npthat];
TCanvas *ca2[npthat];
TCanvas *ca3[npthat];
TCanvas *ca4[npthat];
TCanvas *ca5[npthat];
TCanvas *cb1[npthat];
TCanvas *cb2[npthat];
TCanvas *cb3[npthat];
TCanvas *cb4[npthat];
TCanvas *cb5[npthat];
TCanvas *cs1[npthat];
TCanvas *cs2[npthat];
TCanvas *cs3[npthat];
TCanvas *cs4[npthat];
TCanvas *cs5[npthat];
TCanvas *cj1[npthat];
TCanvas *cp1[npthat];

 // GEN VALIDATION
TCut bkg("sube != 0");
TCut sig("sube == 0");
TCut chg("chg != 0 && sta == 1");
TCut genPtMin("refpt > 40");

HiForest *t[npthat];

for(int ipthat=0; ipthat<npthat; ipthat++){
 t[ipthat] = new HiForest(Form("/mnt/hadoop/cms/store/user/dgulhan/HIJING_GEN-SIM_revrese_betap/Hijing_reverse_Dijet%d_5p02TeV_FOREST_v1_merged/pt%d_HIJING_GEN-SIM_revrese_betap_merged_forest_0.root",valpthat[ipthat],valpthat[ipthat]),"",cPPb,1);

 t[ipthat]->InitTree();

 // VERTEX VALIDATION
 cv1[ipthat] = new TCanvas(Form("cv1_%d",ipthat),"",600,600);
 t[ipthat]->Draw("nVtx","","");
 cv1[ipthat]->SaveAs(Form("plots/cv1_%d.png",ipthat));

 cv2[ipthat] = new TCanvas(Form("cv2_%d",ipthat),"",600,600);
 t[ipthat]->Draw("zVtx[maxVtx]","","");
 cv2[ipthat]->SaveAs(Form("plots/cv2_%d.png",ipthat));

 cv3[ipthat] = new TCanvas(Form("cv3_%d",ipthat),"",600,600);
 t[ipthat]->Draw("yVtx[maxVtx]:xVtx[maxVtx]","","colz");
 cv3[ipthat]->SaveAs(Form("plots/cv3_%d.png",ipthat));

 cv4[ipthat] = new TCanvas(Form("cv4_%d",ipthat),"",600,600);
 t[ipthat]->Draw("maxVtx","","");
 cv4[ipthat]->SaveAs(Form("plots/cv4_%d.png",ipthat));

 cv5[ipthat] = new TCanvas(Form("cv5_%d",ipthat),"",600,600);
 t[ipthat]->Draw("zVtx[1]:zVtx[0]","","colz");
 cv5[ipthat]->SaveAs(Form("plots/cv5_%d.png",ipthat));

 //Background + Signal
 ca1[ipthat] = new TCanvas(Form("ca1_%d",ipthat),"",600,600);
 t[ipthat]->Draw("genParticle.eta",chg,"");
 ca1[ipthat]->SaveAs(Form("plots/ca1_%d.png",ipthat));

 ca2[ipthat] = new TCanvas(Form("ca2_%d",ipthat),"",600,600);
 t[ipthat]->Draw("genParticle.phi",chg,"");
 ca2[ipthat]->SaveAs(Form("plots/ca2_%d.png",ipthat));

 // Background
 cb1[ipthat] = new TCanvas(Form("cb1_%d",ipthat),"",600,600);
 t[ipthat]->Draw("genParticle.eta",bkg&&chg,"");
 cb1[ipthat]->SaveAs(Form("plots/cb1_%d.png",ipthat));

 cb2[ipthat] = new TCanvas(Form("cb2_%d",ipthat),"",600,600);
 t[ipthat]->Draw("genParticle.phi",bkg&&chg,"");
 cb2[ipthat]->SaveAs(Form("plots/cb2_%d.png",ipthat));

 cb3[ipthat] = new TCanvas(Form("cb3_%d",ipthat),"",600,600);
 
 cb4[ipthat] = new TCanvas(Form("cb4_%d",ipthat),"",600,600);

 cb5[ipthat] = new TCanvas(Form("cg5_%d",ipthat),"",600,600);


 // Signal
 cs1[ipthat] = new TCanvas(Form("cgs1_%d",ipthat),"",600,600);
 t[ipthat]->Draw("genParticle.eta",sig&&chg,"");
 cs1[ipthat]->SaveAs(Form("plots/cs1_%d.png",ipthat));

 cs2[ipthat] = new TCanvas(Form("cgs2_%d",ipthat),"",600,600);
 t[ipthat]->Draw("genParticle.phi",sig&&chg,"");
 
 cs2[ipthat]->SaveAs(Form("plots/cs2_%d.png",ipthat));

 cs3[ipthat] = new TCanvas(Form("cgs3_%d",ipthat),"",600,600);

 cs4[ipthat] = new TCanvas(Form("cgs4_%d",ipthat),"",600,600);

 cs5[ipthat] = new TCanvas(Form("cgs5_%d",ipthat),"",600,600);


 // Simple JES VALIDATION
 cj1[ipthat] = new TCanvas(Form("cj1_%d",ipthat),"",600,600);
 t[ipthat]->Draw("jtpt/refpt:refpt",genPtMin,"colz");
 t[ipthat]->Draw("jtpt/refpt:refpt",genPtMin,"prof same");
 cj1[ipthat]->SaveAs(Form("plots/cj1_%d.png",ipthat));

 //pthat check
 TLine l(valpthat[ipthat],0.01,valpthat[ipthat],20000);
 cp1[ipthat] = new TCanvas(Form("cp1_%d",ipthat),"",600,600);
 cp1[ipthat]->SetLogy();
 t[ipthat]->Draw("pthat","","");
 l.Draw("same");
 cp1[ipthat]->SaveAs(Form("cp1_%d.png",ipthat));
}

  TLegend *t4=new TLegend(0.57,0.65,0.49,0.83);
  //    t4->AddEntry(h2,"1 < |#eta| < 2 ","t");
   t4->SetFillColor(0);
    t4->SetBorderSize(0);
    t4->SetFillStyle(0);
    t4->SetTextFont(25);
    t4->SetTextSize(24);


}
