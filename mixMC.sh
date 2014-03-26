#!/bin/sh

for run in `seq 0 9`
do
file=/mnt/hadoop/cms/store/user/dgulhan/HIMC/MB/Track8_Jet21_STARTHI53_LV1/merged/HiForest_HYDJET_Track8_Jet21_STARTHI53_LV1_merged_forest_0.root
Nevents=20000
firstEvent=$(($run * $Nevents))
lastEvent=$(($firstEvent + $Nevents))
root -b -q correlate.C+\(\"${file}\",\"mixed_${run}.root\",\"signal.root\",$firstEvent,$lastEvent\)
done
