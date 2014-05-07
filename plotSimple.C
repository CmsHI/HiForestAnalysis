#include "plotCorrelations.C"


TH1* plotSimple(const char* sample = "pyquen_Wide", double vtx = -7, double cbin = 0, double psi = 0, double eta = 0., int ajBin = -1){

  int bineta, binvtx, binpsi, bincent;
  int analysisBin = findBin(vtx,cbin,psi,eta);

  findBinXYZ(analysisBin, binvtx, bincent, binpsi, bineta);
  const char* file = Form("%s_vtx%d_cent%d_psi%d.root",sample,binvtx,bincent,binpsi);
  TFile* sigfile = new TFile(file);

  TH3D* hh;
  TH1D* hpt;  
  string jet = "SubLead";

  if(ajBin < 0){
    hh = (TH3D*)sigfile->Get(Form("hCorr%s_%d_%d",jet.data(),analysisBin,0));
    hpt = (TH1D*)sigfile->Get(Form("hPt%s_%d_%d",jet.data(),analysisBin,0));
    for(int i = 1; i < 4; ++i){
      hh->Add((TH3D*)sigfile->Get(Form("hCorr%s_%d_%d",jet.data(),analysisBin,i)));
      hpt->Add((TH3D*)sigfile->Get(Form("hPt%s_%d_%d",jet.data(),analysisBin,i)));
    }
  }else{
    hh = (TH3D*)sigfile->Get(Form("hCorr%s_%d_%d",jet.data(),analysisBin,ajBin));
    hpt = (TH1D*)sigfile->Get(Form("hPt%s_%d_%d",jet.data(),analysisBin,ajBin));
  }

  hh->Scale(1./hpt->Integral());

  hh->Rebin3D(1,2,2);
  TH1* h = project(hh);

  h->Draw("surf1");

  return h;

}
