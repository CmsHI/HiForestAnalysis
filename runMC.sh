#!/bin/sh

for run in `seq 1 1`
do
file=/mnt/hadoop/cms/store/user/dgulhan/HIMC/Jet80/Track8_Jet21_STARTHI53_LV1/merged/HiForest_Pythia_Hydjet_Jet80_Track8_Jet19_STARTHI53_LV1_merged_forest_${run}.root
root -b -q correlate.C+\(\"$file\",\"signal_${run}.root\"\)
done

