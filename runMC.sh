#!/bin/sh

for run in `seq 0 0` #9
  do
  for cent in `seq 0 0`
    do    
    for vtx in `seq 0 5`
      do
      for psi in `seq 0 0`
	do
	
	file=/mnt/hadoop/cms/store/user/dgulhan/HIMC/Jet80/Track8_Jet21_STARTHI53_LV1/merged/HiForest_Pythia_Hydjet_Jet80_Track8_Jet19_STARTHI53_LV1_merged_forest_${run}.root

#	root -b -q correlate.C+\(\"$file\",\"signal_vtx${vtx}_cent${cent}_psi${psi}_${run}.root\",\"\",$vtx,$psi,$cent,0,-1,1,0,0,0\)
#        root -b -q correlate.C+\(\"$file\",\"signal_genparticles_vtx${vtx}_cent${cent}_psi${psi}_${run}.root\",\"\",$vtx,$psi,$cent,0,-1,1,1,0,0\)
#        root -b -q correlate.C+\(\"$file\",\"signal_genjets_vtx${vtx}_cent${cent}_psi${psi}_${run}.root\",\"\",$vtx,$psi,$cent,0,-1,1,0,1,0\)
      done      
    done
    root -b -q correlate.C+\(\"$file\",\"signal_gengen_vtx0_cent${cent}_psi0_${run}.root\",\"\",0,0,$cent,0,-1,1,1,1,0\)

  done
done
