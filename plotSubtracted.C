#include "plotSimple.C"

void plotSubtracted(double vtx = -7, double cbin = 0, double psi = 0, double eta = 0.6, int ajBin = -1){

  TCanvas* c1 = new TCanvas("c1","c1",600,600);
  TH1* h1 = plotSimple("signal",vtx,cbin,psi,eta,ajBin);

  TCanvas* c0 = new TCanvas("c0","c0",600,600);
  TH1* h0 = plotSimple("mixed",vtx,cbin,psi,eta,ajBin);

  TCanvas* c2 = new TCanvas("c2","c2",600,600);

  TH1* hR = (TH1*)h1->Clone("hR");
  hR->Add(h0,-1);
  //  hR->Divide(h0);

  hR->Draw("surf1");

}
