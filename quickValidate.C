

TH1* plot(
	  const char* infile = "/mnt/hadoop/cms/store/user/velicanu/14Mar2014ReReco_forest_merged/0.root"
	  ){


   TFile * inf = new TFile(infile);
   
   TTree* t = (TTree*)inf->Get("akVs3PFJetAnalyzer/t");
   TTree* t1 = (TTree*)inf->Get("hltanalysis/HltTree");
   TTree* t2 = (TTree*)inf->Get("skimanalysis/HltTree");
   t->AddFriend(t1);
   t->AddFriend(t2);


   TH1D* h = new TH1D("h","",100,0,200);

   t->Draw("jtpt>>h","abs(jteta) < 2 && HLT_HIJet55_v1 && pcollisionEventSelection","");

   h->Scale(1./t->GetEntries("HLT_HIJet55_v1 && pcollisionEventSelection"));

   return h;

}



void quickValidate(){

   TH1::SetDefaultSumw2();

   const char* infile0 = "/mnt/hadoop/cms/store/user/velicanu/hiForest_Jet55or65_GR_R_53_LV6_25Mar2014_0200CET_Track8_Jet26/0.root";
   const char* infile1 = "/mnt/hadoop/cms/store/user/velicanu/14Mar2014ReReco_forest_merged/0.root";
   // /mnt/hadoop/cms/store/user/velicanu/hiForest_Jet80or95_GR_R_53_LV6_03Mar2014_1600CET_CMSSW_5_3_16_merged/0.root
   TH1* h0 = plot(infile0);
   TH1* h1 = plot(infile1);

   TCanvas* c1 = new TCanvas("c1","",600,600);
   c1->Setlogy();

   h0->Draw("hist");
   h1->Draw("same");


}
