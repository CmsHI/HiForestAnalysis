#include <iostream>
#include "TCanvas.h"
#include "TError.h"
#include "TPad.h"
#include "TString.h"
#include "TRandom.h"
#include "TH1F.h"
#include "TMath.h"
#include "TF1.h"

#include "TFile.h"
#include "TTree.h"
#include "TH1D.h"
#include "TH2D.h"
#include "TCanvas.h"
#include "TLegend.h"
#include "TLatex.h"
#include "TString.h"
#include "TChain.h"

#include "TCut.h"
#include "TNtuple.h"

#include "THStack.h"
#include <sstream>
#include <iomanip>

using namespace std;

int getlength(double y, int prec){
  stringstream ss (stringstream::in | stringstream::out);
  ss << fixed << std::setprecision(prec) << y;
  return ss.str().length();

}

int determinePrecision(double error, int errorPrecision = 1){

  int prec = 0;
  if(error <= 0.) return prec;
  while(fabs(error) < 1.){
    error = error*10.;
    prec++;
  }

  return prec+errorPrecision;
}



void makeHEPDATA(TH1* h, int xPrecision = 2,int yPrecision = -2, bool symmetric = 1, double* sys = 0){

  bool doSys = sys != 0 && sys[0] != 0;

  const char* notation = "f";

  //  cout<<"This is a histogram : "<<h->GetName()<<endl;
  if(symmetric) cout<<"xlow\t\t xhigh\t\t y\t\t stat\t\t ";
  else cout<<"xlow\t\t xhigh\t\t y\t\t +stat\t\t -stat\t\t ";

  if(doSys){
    cout<<"sys\t\t ";
  }
  cout<<endl;

  int prec = 1;

  for(int i = 0; i< h->GetNbinsX(); ++i){
    int bin = i+1;
    string entry = "";

    double stat = h->GetBinError(bin);
    double y = h->GetBinContent(bin);

    if(y != 0){
      if(yPrecision > 0) prec = yPrecision;
      else prec = determinePrecision(stat);
    }

    entry+=Form(Form("%%0.%d%s",xPrecision,notation),h->GetBinLowEdge(bin));
    entry+="\t\t ";
    entry+=Form(Form("%%0.%d%s",xPrecision,notation),h->GetBinLowEdge(bin+1));
    entry+="\t\t ";
    entry+=Form(Form("%%0.%d%s",prec,notation),y);
    if(getlength(y,prec) > 6) entry+="\t";
    else entry+="\t\t ";
    entry+=Form(Form("%%0.%d%s",prec,notation),stat);
    entry+="\t\t ";
    if(doSys){
    entry+=Form(Form("%%0.%d%s",prec,notation),sys[i]);
    entry+="\t\t ";
    }

    if(y > 0) cout<<entry.data()<<endl;
  }

}

void makeHEPDATA(TGraphAsymmErrors* g, 
		 double* sysup, double* sysdown,
		 int xPrecision = 0, int yPrecision = -2
		 ){
  
  double x[100];
  double y[100];
  double* eyup;
  double* eydown;

  double ptMin[100] = {120,130,140,150,160,180,200,220,260,300,1500};

  //  cout<<"This is a graph."<<g->GetName()<<endl;
  //  cout<<"xlow xhigh xfocus y +stat -stat +sys -sys"<<endl;

  eyup = g->GetEYhigh();
  eydown = g->GetEYlow();

  double totsys = 0;
  for(int i = 0; i< g->GetN(); ++i){
    totsys += sysup[i]+sysdown[i];
  }

  if(totsys != 0) cout<<"xlow\t\t xhigh\t\t xfocus\t\t y\t\t stat\t\t +sys\t\t -sys\t\t"<<endl;
  else cout<<"xlow\t\t xhigh\t\t xfocus\t\t y\t\t stat\t\t"<<endl;

  int prec = 1;

  for(int i = 0; i< g->GetN(); ++i){

    double xx,yy;

    int bin = i;

    g->GetPoint(bin,xx,yy);

    double stat = TMath::Max(eyup[bin],eydown[bin]);
    double sys = TMath::Max(sysup[bin],sysdown[bin]);

    double errmax = TMath::Max(stat,sys);

    if(yy != 0){
      if(yPrecision > 0) prec = yPrecision;
      else prec = determinePrecision(errmax);
    }

    string entry = "";
    entry+= Form(Form("%%0.%df",xPrecision),ptMin[bin]);
    entry+="\t\t ";
    entry+= Form(Form("%%0.%df",xPrecision),ptMin[bin+1]);
    entry+="\t\t ";
    entry+= Form(Form("%%0.%df",xPrecision+1),xx);
    entry+="\t\t ";
    entry+= Form(Form("%%0.%df",prec),yy);
    entry+="\t\t ";
    entry+= Form(Form("%%0.%df",prec),eyup[bin]);

    if(0){
    entry+="\t\t ";
    entry+= Form(Form("%%0.%df",prec),eydown[bin]);
    }

    if(totsys != 0){
    entry+="\t\t ";
    entry+= Form(Form("%%0.%df",prec),sysup[bin]);
    entry+="\t\t ";
    entry+= Form(Form("%%0.%df",prec),sysdown[bin]);
    }

    if(yy > 0) cout<<entry.data()<<endl;

  }


}


