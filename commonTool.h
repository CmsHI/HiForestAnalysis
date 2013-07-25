double angularRangeReduce(double x)
{
  const double cody_waite_x_max = 1608.4954386379741381;
  const double two_pi_0 = 6.2831853071795649157;
  const double two_pi_1 = 2.1561211432631314669e-14;
  const double two_pi_2 = 1.1615423895917441336e-27;
  double ret = 0;

  if(x >= -cody_waite_x_max && x <= cody_waite_x_max) {
    const double inverse_two_pi =
      0.15915494309189534197;
    const double k = rint(x * inverse_two_pi);
    ret = ((x - (k * two_pi_0)) - k * two_pi_1) -
      k * two_pi_2;
  }

  return ret;
}

double deltaPhi(double phi1, double phi2) {
  return angularRangeReduce(phi1 - phi2);
}
 
double deltaR2(double eta1, double phi1, double eta2, double phi2) {
    double deta = eta1-eta2;
    double dphi = deltaPhi(phi1,phi2);
    return (deta*deta+dphi*dphi);
}

double deltaR(double eta1, double phi1, double eta2, double phi2) {
    double r2 = (deltaR2(eta1,phi1,eta2,phi2));
    return sqrt(r2);
}
