#ifndef COMMONUTILITY_Yongsun_H
#define COMMONUTILITY_Yongsun_H
#include <TGraphAsymmErrors.h>
#include <TLegend.h>
#include <TF1.h>
#include <TCanvas.h>
#include <TLatex.h>
#include <TLine.h>
#include <TCanvas.h>
#include <TBox.h>
#include <TH1F.h>
#include <TH1D.h>
#include <TH2D.h>
#include <TH2F.h>
#include <TGaxis.h>


void divideWOerr( TH1* h1, TH1* h2) {  //by Yongsun Jan 26 2012                                                                              
  if ( h1->GetNbinsX() != h2->GetNbinsX() ) {
    cout << " different bin numbers!!" << endl;
    return;
  }

  for ( int i=1 ; i<=h1->GetNbinsX() ; i++) {
    if ( (h2->GetBinContent(i) == 0 ) ) {
      h1->SetBinContent(i, 0);
      h1->SetBinError (i, 0);
    }
    else {
      float newV = h1->GetBinContent(i)/ h2->GetBinContent(i);
      float newE = h1->GetBinError(i)  / h2->GetBinContent(i);
      h1->SetBinContent(i, newV);
      h1->SetBinError  (i, newE);
    }
  }
}



void AddBinError( TH1* h=0, int binNumber=0 , float val=0){
  float valO = h->GetBinError(binNumber);
  float newVal = sqrt( valO*valO + val*val);
  h->SetBinError(binNumber,newVal);
}

void drawSys(TH1 *h,double *sys, int theColor= kYellow, int fillStyle = -1, int lineStyle = -1)
{
   for (int i=1;i<=h->GetNbinsX();i++)
      {
	 double val = h->GetBinContent(i);
	 double err = val * sys[i-1];
	 TBox *b = new TBox(h->GetBinLowEdge(i),val-err,h->GetBinLowEdge(i+1),val+err);
	 //      b->SetFillStyle(3001);                                                                                                                                                                              
	 b->SetLineColor(theColor);
	 b->SetFillColor(theColor);
	 if ( fillStyle > -1 ) b->SetFillStyle(fillStyle);
	 if ( lineStyle > -1 ) b->SetLineStyle(lineStyle);
	 
	 b->Draw();
      }
}

void drawSys(TGraph *h, double *sys, double width=5, int theColor= kYellow, int fillStyle = -1, int lineStyle = -1)
{
  for (int i=0;i<h->GetN();i++)
    {
      double val;
      double theX;
      h->GetPoint(i,theX,val);
      double err = val * sys[i];
      TBox *b = new TBox(theX-width,val-err,theX+width,val+err);
      
      b->SetLineColor(theColor);
      b->SetFillColor(theColor);
      if ( fillStyle > -1 ) b->SetFillStyle(fillStyle);
      if ( lineStyle > -1 ) b->SetLineStyle(lineStyle);
      
      b->Draw();
    }
}



void drawSysAbs(TH1 *h,TH1 *sys, int theColor= kYellow, int fillStyle = -1, int lineStyle = -1)
{
   for (int i=1;i<=h->GetNbinsX();i++)
      {
         double val = h->GetBinContent(i);
         double err = fabs(sys->GetBinContent(i));
	 if (err == 0  ) continue;
	 TBox *b = new TBox(h->GetBinLowEdge(i),val-err,h->GetBinLowEdge(i+1),val+err);
         b->SetLineColor(theColor);
         b->SetFillColor(theColor);
         if ( fillStyle > -1 ) b->SetFillStyle(fillStyle);
         if ( lineStyle > -1 ) b->SetLineStyle(lineStyle);

         b->Draw();
      }
}

void integerizeTH1(TH1* h1) {
   for ( int j = 0 ; j <= h1->GetNbinsX()+1 ; j++) {
      float vTemp = h1->GetBinContent(j);
      h1->SetBinContent( j , (int)vTemp ) ;
   }
}

void multiplyBonA(TH1* h1, TH1* h2) {
   if ( h1->GetNbinsX() != h2->GetNbinsX() ) { 
      cout << " different bin numbers.." << endl ;
      return ;
   }
   
   for ( int j=1 ; j<= h1->GetNbinsX(); j++) {
      float v1 = h1->GetBinContent(j);
      float e1 = h1->GetBinError(j);
      float v2 = h2->GetBinContent(j);
      float e2 = h2->GetBinError(j);
      
      float v3 = v1 * v2;
      float e3 = e1 * v2;
      h1->SetBinContent(j, v3);
      h1->SetBinError(j, e3);
   }
}

void drawPatch(float x1, float y1, float x2, float y2, int color =0, int style=1001, char* ops = ""){
   TLegend *t1=new TLegend(x1,y1,x2,y2,NULL,ops);
   if ( color ==0) t1->SetFillColor(kWhite);
   else t1->SetFillColor(color);
   t1->SetBorderSize(0);
   t1->SetFillStyle(style);
   t1->Draw("");
}

void drawErrorBox(float x1,float y1, float x2, float y2, int theColor=kSpring+8)
{
   TBox* tt = new TBox(x1,y1,x2,y2);
   tt->SetFillColor(theColor);
   tt->SetFillStyle(3001);
   tt->Draw();
}

void drawErrorBand(TH1* h, double* err, int theColor=kSpring+8)
{
   for ( int j=1 ; j<= h->GetNbinsX()-1; j++) {
      double theCont = h->GetBinContent(j);
      double theErr  = err[j] * h->GetBinContent(j);
      TBox* tt = new TBox(h->GetBinLowEdge(j), theCont-theErr, h->GetBinLowEdge(j)+ h->GetBinWidth(j), theCont+theErr);
      tt->SetFillColor(theColor);
      tt->SetFillStyle(3001);
      tt->Draw();
   }
}



void drawText(const char *text, float xp, float yp, bool bold = 0, int textSize=18){
   TLatex *tex = new TLatex(xp,yp,text);
   tex->SetTextFont(43);
   if(bold)tex->SetTextFont(63);

   int textColor = 1;
   tex->SetTextSize(textSize);
   tex->SetTextColor(textColor);
   tex->SetLineWidth(1);
   tex->SetNDC();
   tex->Draw();
}

void drawText2(const char *text, float xp, float yp, int textSize=18){
   TLatex *tex = new TLatex(xp,yp,text);
   tex->SetTextFont(63);
   tex->SetTextSize(textSize);
   tex->SetTextColor(kBlack);
   tex->SetLineWidth(1);
   tex->Draw();
}

void jumSun(double x1=0,double y1=0,double x2=1,double y2=1,int color=1, double width=1)
{
   TLine* t1 = new TLine(x1,y1,x2,y2);
   t1->SetLineWidth(width);
   t1->SetLineStyle(7);
   t1->SetLineColor(color);
   t1->Draw();
}


void onSun(double x1=0,double y1=0,double x2=1,double y2=1,int color=1, double width=1)
{
  TLine* t1 = new TLine(x1,y1,x2,y2);
  t1->SetLineWidth(width);
  t1->SetLineStyle(1);
  t1->SetLineColor(color);
  t1->Draw();
}
void regSun(double x1=0,double y1=0,double x2=1,double y2=1,int color=1, double width=1)
{
   TLine* t1 = new TLine(x1,y1,x2,y2);
   t1->SetLineWidth(width);
   t1->SetLineStyle(1);
   t1->SetLineColor(color);
   t1->Draw();
}

void mcStyle1(TH1* h=0) {
   h->SetLineColor(kRed);
   h->SetFillColor(kRed-9);
   h->SetFillStyle(3004);
}
void mcStyle2(TH1* h=0) {
   h->SetLineColor(kBlue);
   h->SetFillColor(kAzure-8);
   h->SetFillStyle(3005);
}

void mcStyle3(TH1* h=0) {
  h->SetLineColor(kBlue);
  h->SetFillColor(kAzure-8);
  h->SetFillStyle(3005);
  h->SetMarkerSize(0);
}

void makeMultiPanelCanvas(TCanvas*& canv, const Int_t columns,
                          const Int_t rows, const Float_t leftOffset=0.,
                          const Float_t bottomOffset=0.,
                          const Float_t leftMargin=0.2,
                          const Float_t bottomMargin=0.2,
                          const Float_t edge=0.05) {
   if (canv==0) {
      cout << "makeMultiPanelCanvas","Got null canvas.";
      return;
   }
   canv->Clear();

   TPad* pad[columns][rows];
   
   Float_t Xlow[columns];
   Float_t Xup[columns];
   Float_t Ylow[rows];
   Float_t Yup[rows];
   Float_t PadWidth =
      (1.0-leftOffset)/((1.0/(1.0-leftMargin)) +
			   (1.0/(1.0-edge))+(Float_t)columns-2.0);
   Float_t PadHeight =
      (1.0-bottomOffset)/((1.0/(1.0-bottomMargin)) +
			  (1.0/(1.0-edge))+(Float_t)rows-2.0);
   Xlow[0] = leftOffset;
   Xup[0] = leftOffset + PadWidth/(1.0-leftMargin);
   Xup[columns-1] = 1;
   Xlow[columns-1] = 1.0-PadWidth/(1.0-edge);
   
   Yup[0] = 1;
   Ylow[0] = 1.0-PadHeight/(1.0-edge);
   Ylow[rows-1] = bottomOffset;
   Yup[rows-1] = bottomOffset + PadHeight/(1.0-bottomMargin);
   
   for(Int_t i=1;i<columns-1;i++) {
      Xlow[i] = Xup[0] + (i-1)*PadWidth;
      Xup[i] = Xup[0] + (i)*PadWidth;
   }
   Int_t ct = 0;
   for(Int_t i=rows-2;i>0;i--) {
      Ylow[i] = Yup[rows-1] + ct*PadHeight;
      Yup[i] = Yup[rows-1] + (ct+1)*PadHeight;
      ct++;
   }

   TString padName;
   for(Int_t i=0;i<columns;i++) {
      for(Int_t j=0;j<rows;j++) {
         canv->cd();
         padName = Form("p_%d_%d",i,j);
         pad[i][j] = new TPad(padName.Data(),padName.Data(),
			      Xlow[i],Ylow[j],Xup[i],Yup[j]);
         if(i==0) pad[i][j]->SetLeftMargin(leftMargin);
         else pad[i][j]->SetLeftMargin(0);

         if(i==(columns-1)) pad[i][j]->SetRightMargin(edge);
         else pad[i][j]->SetRightMargin(0);

         if(j==0) pad[i][j]->SetTopMargin(edge);
         else pad[i][j]->SetTopMargin(0);
	 
         if(j==(rows-1)) pad[i][j]->SetBottomMargin(bottomMargin);
         else pad[i][j]->SetBottomMargin(0);
	 
         pad[i][j]->Draw();
         pad[i][j]->cd();
         pad[i][j]->SetNumber(columns*j+i+1);
      }
   }
}





void twikiSave(TCanvas* c=0, char* name="",int w=0,int h=0)
{
   if ( w==0) w = c->GetWindowWidth();
   if ( h==0) h = c->GetWindowHeight();
   
   c->SaveAs(name);
   cout << Form(" <br/>   <img src=\"%%ATTACHURLPATH%%/%s\" alt=\"%s\" width='%d' height='%d'/>",name,name,w,h)<< endl;
}

void centralityBinning(float *b=0)
{
  b[0]=      0;
  b[1]=  5.045;
  b[2]=  7.145;
  b[3]=  8.755;
  b[4]= 10.105;
  b[5]=  11.294;
  b[6]= 12.373;
  b[7]=  13.359;
  b[8]= 14.283;
  b[9]=  15.202;
  b[10] = 100;
 }
void handsomeTH2( TH2 *a=0)
{
   a->GetYaxis()->SetTitleOffset(1.25);
   a->GetXaxis()->CenterTitle();
   a->GetYaxis()->CenterTitle();
}

void handsomeTH1( TH1 *a=0, int col =1, float size=1, int markerstyle=20)
{
  a->SetMarkerColor(col);
  a->SetMarkerSize(size);
  a->SetMarkerStyle(markerstyle);
  a->SetLineColor(col);
  a->GetYaxis()->SetTitleOffset(1.25);
  a->GetXaxis()->CenterTitle();
  a->GetYaxis()->CenterTitle();
}
void fixedFontAxis(TGaxis * ax)
{
   ax->SetLabelFont(43);
   ax->SetLabelOffset(0.01);
   ax->SetLabelSize(22);
   ax->SetTitleFont(43);
   ax->SetTitleSize(14);
   ax->SetTitleOffset(2);
}

void fixedFontHist(TH1 * h, Float_t xoffset=1.3, Float_t yoffset=1.2)
{
   h->SetLabelFont(43,"X");
   h->SetLabelFont(43,"Y");
   //h->SetLabelOffset(0.01);
   h->SetLabelSize(22);
   h->SetTitleFont(43);
   h->SetTitleSize(16);
   h->SetLabelSize(18,"Y");
   h->SetLabelSize(18,"X");
   h->SetTitleFont(43,"Y");
   h->SetTitleSize(20,"Y");
   h->SetTitleSize(20,"X");
   h->SetTitleOffset(xoffset,"X");
   h->SetTitleOffset(yoffset,"Y");
   h->GetXaxis()->CenterTitle();
   h->GetYaxis()->CenterTitle();
}

void handsomeTH1Fill( TH1 *a=0, int nFill=1) {
   handsomeTH1(a,nFill);
   a->SetFillColor(nFill);
}
void handsomeTGraph(TGraphAsymmErrors* a, int col=1)
{
   a->SetLineColor(col);
   a->SetMarkerColor(col);
   a->SetMarkerSize(1);
   a->SetMarkerStyle(24);
}

void TH1ScaleByWidth(TH1* h=0) 
{
   int nBins = h->GetNbinsX();
   // cout << "Start scaling by width" << endl;
   for ( int j=1; j<=nBins ;j++)
      {
         double theWidth = h->GetBinWidth(j);
         //      cout << "width = " << theWidth << ",   " ;                                                                                  
	 double cont = h->GetBinContent(j);
         double err =  h->GetBinError(j);
         h->SetBinContent(j, cont/theWidth);
         h->SetBinError  (j, err/theWidth);
      }
   cout << endl;
}


void scaleInt( TH1 *a=0, double normFac=1.)
{
   float fac = a->Integral(1,a->GetNbinsX());
   if ( fac>0) a->Scale(normFac/fac);
}

double goodIntegral( TH1 *a=0, int lower=-123, int upper=-123)
{
   int nBins = a->GetNbinsX();
   
   if ( (lower==-123) || (upper==-123)) {
      lower = 1;
      upper = nBins;
   }
   double tempInt=0;
   for ( int j=lower; j<=upper; j++) {
      tempInt = tempInt + a->GetBinContent(j) * a->GetBinWidth(j);
   }
   return tempInt;
}

double goodIntegralError( TH1 *a=0, int lower=-123, int upper=-123)
{
   int nBins = a->GetNbinsX();
   if ( (lower==-123) || (upper==-123)) {
      lower = 1;
      upper = nBins;
   }
   
   double tempInt=0;
   for ( int j=lower; j<=upper; j++) {
      tempInt = tempInt + a->GetBinError(j) * a->GetBinError(j) * a->GetBinWidth(j) *  a->GetBinWidth(j);
   }
   return sqrt(tempInt);
}




void handsomeTH1Sumw2( TH1 *a=0, int col =1, float size=1, int markerstyle=20)
{
   handsomeTH1(a,col,size,markerstyle);
   a->Sumw2();
}



void handsomeTH1N( TH1 *a=0, int col =1)
{
   handsomeTH1(a,col);
   a->Scale(1./a->GetEntries());
}


void handsomeTH1OnlyColor( TH1 *a=0, int col =1)
{
   a->SetMarkerColor(col);
   a->SetLineColor(col);
   a->GetYaxis()->SetTitleOffset(1.25);
}


void easyLeg( TLegend *a=0 , TString head="")
{
  a->SetBorderSize(0);
  a->SetHeader(head);
  a->SetTextFont(43);
  a->SetTextSize(17);
  a->SetLineColor(1);
  a->SetLineStyle(1);
  a->SetLineWidth(1);
  a->SetFillColor(0);
  a->SetFillStyle(0);

}



double cleverRange(TH1* h,float fac=1.2, float minY=1.e-3)
{
   float maxY =  fac * h->GetBinContent(h->GetMaximumBin());
   //   cout <<" range will be set as " << minY << " ~ " << maxY << endl; 
   h->SetAxisRange(minY,maxY,"Y");
   return maxY;
}

double cleverRange(TH1* h,TH1* h2, float fac=1.2, float minY=1.e-3)
{
  float maxY1 =  fac * h->GetBinContent(h->GetMaximumBin());
  float maxY2 =  fac * h2->GetBinContent(h2->GetMaximumBin());
  
  //   cout <<" range will be set as " << minY << " ~ " << maxY << endl;                                                                    
  h->SetAxisRange(minY,max(maxY1,maxY2),"Y");
  h2->SetAxisRange(minY,max(maxY1,maxY2),"Y");
  return max(maxY1,maxY2);
}

void cleverRangeLog(TH1* h,float fac=1.2, float theOrder=1.e-4)
{
  float maxY =  fac * h->GetBinContent(h->GetMaximumBin());
  //   cout <<" range will be set as " << minY << " ~ " << maxY << endl;                                               
  h->SetAxisRange(maxY * theOrder,maxY,"Y");
}



TF1* cleverGaus(TH1* h, char* title="h", float c = 2.5, bool quietMode=true)
{
   if ( h->GetEntries() == 0 )
      {
	 TF1 *fit0 = new TF1(title,"gaus",-1,1);
	 fit0->SetParameters(0,0,0);
	 return fit0;
      }
   
   int peakBin  = h->GetMaximumBin();
   double peak =  h->GetBinCenter(peakBin);
   double sigma = h->GetRMS();
  
   TF1 *fit1 = new TF1(title,"gaus",peak-c*sigma,peak+c*sigma);
   if (quietMode) h->Fit(fit1,"LL M O Q R");
   else    h->Fit(fit1,"LL M O Q R");
   return fit1;
}




void drawCMS(float px, float py, float nLumi) {
   TLatex *cms = new TLatex(px,py,"CMS Preliminary");
   cms->SetTextFont(63);
   cms->SetTextSize(15);
   cms->SetNDC();
   cms->Draw();
   TLatex *lumi = new TLatex(px+0.35,py,Form("#intL dt = %.1f #mub^{-1}",nLumi));
   lumi->SetTextFont(63);
   lumi->SetTextSize(13);
   lumi->SetNDC();
   lumi->Draw();
}

void drawCMSpp(float px, float py, float nLumi) {
  TLatex *cms = new TLatex(px,py,"CMS Preliminary");
  cms->SetTextFont(63);
  cms->SetTextSize(15);
  cms->SetNDC();
  cms->Draw();
  TLatex *lumi = new TLatex(px+0.35,py,Form("#intL dt = %.1f #nb^{-1}",nLumi));
  lumi->SetTextFont(63);
  lumi->SetTextSize(13);
  lumi->SetNDC();
  lumi->Draw();
}



void drawCMS2(float px, float py, float nLumi, int textSize=15) {
   TLatex *cms = new TLatex(px,py,"CMS Preliminary");
   cms->SetTextFont(63);
   cms->SetTextSize(textSize);
   cms->SetNDC();
   cms->Draw();
   TLatex *lumi = new TLatex(px,py-0.08,Form("#intL dt = %.1f #mub^{-1}",nLumi));
   lumi->SetTextFont(63);
   lumi->SetTextSize(textSize-2);
   lumi->SetNDC();
   lumi->Draw();
}
void drawCMS2011(float px, float py, float nLumi=3.8, int textSize=15) {
   TLatex *cms = new TLatex(px,py,"CMS Preliminary");
   cms->SetTextFont(63);
   cms->SetTextSize(textSize);
   cms->SetNDC();
   cms->Draw();
   TLatex *lumi = new TLatex(px,py-0.08,Form("L_{Int} dt = %.0f #mub^{-1}",nLumi));
   lumi->SetTextFont(63);
   lumi->SetTextSize(textSize-2);
   lumi->SetNDC();
   lumi->Draw();
}

void drawCMS3(float px, float py, float nLumi, int textSize=15) {
   TLatex *cms = new TLatex(px,py,"CMS");
   cms->SetTextFont(63);
   cms->SetTextSize(textSize);
   cms->SetNDC();
   cms->Draw();
   TLatex *lumi = new TLatex(px,py-0.08,Form("PbPb  #sqrt{s_{NN}}=2.76TeV  #intL dt = %.0f #mub^{-1}",nLumi));
   lumi->SetTextFont(63);
   lumi->SetTextSize(textSize-2);
   lumi->SetNDC();
   lumi->Draw();
}
void drawCMS4(float px, float py, float nLumi, int textSize=15) {
   TLatex *cms = new TLatex(px,py,"CMS Preliminary");
   cms->SetTextFont(63);
   cms->SetTextSize(textSize);
   cms->SetNDC();
   cms->Draw();
   
   TLatex *pbpb = new TLatex(px,py-0.08,"PbPb  #sqrt{s_{NN}}=2.76TeV");
   pbpb->SetTextFont(63);
   pbpb->SetTextSize(textSize-2);
   pbpb->SetNDC();
   pbpb->Draw();
   
   TLatex *lumi = new TLatex(px,py-0.16,Form("#intL dt = %.1f #mub^{-1}",nLumi));
   lumi->SetTextFont(63);
   lumi->SetTextSize(textSize-2);
   lumi->SetNDC();
   lumi->Draw();
   
   
}



void getNiceBins( TH1* h=0, int nDiv=4) {
   int nBins = h->GetNbinsX();
   double allInt = h->Integral(1,nBins);
   cout<< " All integral = " << allInt<< endl;

   TH1F* hacc = (TH1F*)h->Clone(Form("%s_accu",h->GetName()));
   hacc->Reset();
   double acc =0;
   

   int j=0;
   for ( int i=1 ; i<= nBins ; i++ ) {
      acc = acc + h->GetBinContent(i);
      hacc->SetBinContent( i , acc ) ;
       if ( ( hacc->GetBinContent(i) > j*allInt/nDiv ) && ( hacc->GetBinContent(i-1) <= j*allInt/nDiv)) {
	 j++;
	 cout << j << "th bin = " << i <<  "    value  = " << h->GetBinCenter(i) << endl;
       }
   }     
   cout << " acc = " << acc << endl;
   TCanvas* c1 = new TCanvas(Form("%s_c1Acc",h->GetName()),"",400,400);
   c1->Draw();
   handsomeTH1(hacc,1);
   handsomeTH1(h,2);
   hacc->DrawCopy();
   h->DrawCopy("same");
  
   
}

void stripErr(TH1* theHist=0) {
   for ( int ibin = 1 ; ibin <= theHist->GetNbinsX() ; ibin++)
      theHist->SetBinError(ibin,0);
}



#endif 
