

day=`date | awk '{print $3}'`

version=71

day=0$day

for run in 1
do
  infile=root://eoscms//eos/cms/store/caf/user/yjlee/pPb2013/promptReco/PA2013_HiForest_PromptRecofirstPR_forestv${version}.root
  outfile=ntuple_data_pPb_akPu3PF_forest${version}_201302${day}_01.root
  root -b -q analyzeForest.C+\(\"$infile\",\"$outfile\",0,0\)
  files="$files $outfile"
done

echo "hadd data.root $files"





day=`date | awk '{print $3}'`

version=71

day=0$day

for run in 1
do
  infile=root://eoscms//eos/cms/store/caf/user/yjlee/PbPHiForest2_PbPbPAHighPtJet80_cent50-100_pprereco.root
  outfile=ntuple_data_PbPb_akPu3PF_forest${version}_201302${day}_01.root
  root -b -q analyzeForest.C+\(\"$infile\",\"$outfile\",0,0\)
  files="$files $outfile"
done

echo "hadd data.root $files"




day=0`date | awk '{print $3}'`

files=""

version=68

for pthat in 15 30 50 80 120 170 220 280
  do

  mergeversion=01
  if [ ${pthat} -eq 15 ] || [ ${pthat} -eq 30 ] || [ ${pthat} -eq 50 ] || [ ${pthat} -eq 120 ]; then
      mergeversion=02
  fi

  infile=root://eoscms//eos/cms/store/group/phys_heavyions/dgulhan/pPb/HP03/prod12/Hijing_Pythia_pt${pthat}/HiForest_v68_merged${mergeversion}/pt${pthat}_prod12_v68merged_forest_0.root
  outfile=ntuple_mix_pt${pthat}_akPu3PF_forest${version}_d201302${day}_01.root
  root -b -q analyzeForest.C+\(\"$infile\",\"$outfile\",1,0\)
  files="$files $outfile"
done



echo "hadd mix.root $files"



