
for mc in hydjet
do
  if [ ${mc} == "hijing" ]; then
#      hadd -f mix_${mc}.root ntuple_mix_*_d20130204_01.root
      hadd -f mix_${mc}.root ntuple_mix_pt30_akPu3PF_forest68_d20130204_01.root ntuple_mix_pt50_akPu3PF_forest68_d20130204_01.root ntuple_mix_pt80_akPu3PF_forest68_d20130204_01.root ntuple_mix_pt120_akPu3PF_forest68_d20130204_01.root
      root -b -q weightMix.C+\(0\)
  else
      hadd -f mix_${mc}.root ntuple_mix_*_d20130204_01.root
      root -b -q weightMix.C+\(1\)
  fi  
  hadd -f ${mc}.root mix_${mc}.root weights_${mc}_i*.root
done


