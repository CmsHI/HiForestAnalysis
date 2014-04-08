#!/bin/sh

for run in `seq 0 9`
  do
  for vtx in `seq 0 5`
    do
    for psi in `seq 0 0`
      do
      for cent in `seq 0 0`
	do
      	file=/mnt/hadoop/cms/store/user/dgulhan/HIMC/MB/Track8_Jet21_STARTHI53_LV1/merged/HiForest_HYDJET_Track8_Jet21_STARTHI53_LV1_merged_forest_0.root
	Nevents=20000
	firstEvent=$(($run * $Nevents))
	lastEvent=$(($firstEvent + $Nevents))
	root -b -q correlate.C+\(\"${file}\",\"mixed_vtx${vtx}_cent${cent}_psi${psi}_${run}.root\",\"signal_vtx${vtx}_cent${cent}_psi${psi}.root\",$vtx,$psi,$cent,$firstEvent,$lastEvent\)
      done
    done
  done
done
