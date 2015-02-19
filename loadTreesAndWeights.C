

{

  string filelist[] = {
    "/Users/yetkinyilmaz/analysis/data/mc/pthat30/HiForest_103_1_1Kh.root",
    "/Users/yetkinyilmaz/analysis/data/mc/pthat30/HiForest_104_1_HZZ.root",
    "/Users/yetkinyilmaz/analysis/data/mc/pthat30/HiForest_105_1_UAy.root",
    "/Users/yetkinyilmaz/analysis/data/mc/pthat30/HiForest_106_1_auT.root",
    "/Users/yetkinyilmaz/analysis/data/mc/pthat30/HiForest_10_1_MBR.root",
    "/Users/yetkinyilmaz/analysis/data/mc/pthat50/HiForest_100_1_SOu.root",
    "/Users/yetkinyilmaz/analysis/data/mc/pthat50/HiForest_101_1_W2S.root",
    "/Users/yetkinyilmaz/analysis/data/mc/pthat50/HiForest_102_1_thH.root",
    "/Users/yetkinyilmaz/analysis/data/mc/pthat50/HiForest_104_1_vVK.root",
    "/Users/yetkinyilmaz/analysis/data/mc/pthat50/HiForest_105_1_DZB.root",
    "/Users/yetkinyilmaz/analysis/data/mc/pthat50/HiForest_10_1_S9B.root",
    "/Users/yetkinyilmaz/analysis/data/mc/pthat80/hiForest_DijetpT370_Hydjet1p8_STARTHI53_LV1_v15_100_1_rEg.root",
    "/Users/yetkinyilmaz/analysis/data/mc/pthat80/hiForest_DijetpT370_Hydjet1p8_STARTHI53_LV1_v15_101_1_WDk.root",
    "/Users/yetkinyilmaz/analysis/data/mc/pthat80/hiForest_DijetpT370_Hydjet1p8_STARTHI53_LV1_v15_102_1_GIg.root",
    "/Users/yetkinyilmaz/analysis/data/mc/pthat80/hiForest_DijetpT370_Hydjet1p8_STARTHI53_LV1_v15_103_1_ZXv.root",
    "/Users/yetkinyilmaz/analysis/data/mc/pthat80/hiForest_DijetpT370_Hydjet1p8_STARTHI53_LV1_v15_104_1_0Jr.root",
    "/Users/yetkinyilmaz/analysis/data/mc/pthat80/hiForest_DijetpT370_Hydjet1p8_STARTHI53_LV1_v15_10_1_bxy.root",
    "/Users/yetkinyilmaz/analysis/data/mc/pthat120/hiForest_DijetpT370_Hydjet1p8_STARTHI53_LV1_v15_101_1_Jvo.root",
    "/Users/yetkinyilmaz/analysis/data/mc/pthat120/hiForest_DijetpT370_Hydjet1p8_STARTHI53_LV1_v15_103_1_Jnf.root",
    "/Users/yetkinyilmaz/analysis/data/mc/pthat120/hiForest_DijetpT370_Hydjet1p8_STARTHI53_LV1_v15_10_1_Ull.root",
    "/Users/yetkinyilmaz/analysis/data/mc/pthat170/HiForest_211_1_tWC.root",
    "/Users/yetkinyilmaz/analysis/data/mc/pthat170/HiForest_32_1_8L1.root",
    "/Users/yetkinyilmaz/analysis/data/mc/pthat170/HiForest_331_1_EFf.root",
    "/Users/yetkinyilmaz/analysis/data/mc/pthat170/HiForest_336_1_Los.root",
    "/Users/yetkinyilmaz/analysis/data/mc/pthat170/HiForest_343_1_BfL.root",
    "/Users/yetkinyilmaz/analysis/data/mc/pthat220/HiForest_100_1_R7V.root",
    "/Users/yetkinyilmaz/analysis/data/mc/pthat220/HiForest_101_1_su9.root",
    "/Users/yetkinyilmaz/analysis/data/mc/pthat220/HiForest_102_1_cMj.root",
    "/Users/yetkinyilmaz/analysis/data/mc/pthat220/HiForest_10_1_JKD.root"
  }

  int Nfiles = 29;

  TChain* t = new TChain("akPu3PFJetAnalyzer/t");
  TChain* t1 = new TChain("hiEvtAnalyzer/HiTree");
  TChain* t2 = new TChain("skimanalysis/HltTree");
  TChain* t3 = new TChain("hltanalysis/HltTree");

  TChain* tw = new TChain("weights");
  tw->Add("weights.root");

  for(int i = 0; i < Nfiles; ++i){
    t->Add(filelist[i].data());
    t1->Add(filelist[i].data());
    t2->Add(filelist[i].data());
    t3->Add(filelist[i].data());
  }

  t->AddFriend(t1);
  t->AddFriend(t2);
  t->AddFriend(t3);
  t->AddFriend(tw);


  t->Draw("pthat","weight");


}

