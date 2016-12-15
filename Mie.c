#include<stdio.h>
#include<stdlib.h>
#include<cmath.h>


double M_of_Lam(double lambda, double N_sphere, double N_med);
int main() {

  double m, x, lam, N_sphere, N_med;
  
  // lambda = 500 nm
  lam = 500e-9;
  // Refractive index of sphere is 2.6, like TiO2
  N_sphere = 2.6;
  // Refractive index of surrounding medium is 1.0, like air
  N_med = 1.0;
  
  // evaluate m(lambda)
  m = M_of_Lam( lam, N_sphere, N_med);
  
  printf("  m of lambda is %f\n",m);


  //anything
return 0;
}

double M_of_Lam(double lambda, double N_sphere, double N_med) {
  double m;
  // m is just defined as the refrative index of the sphere divided by the 
  // refractive index of the surrounding medium.  We will assume
  // the refractive index of each does not change with wavelength, so 
  // the result will be the same regardless of the value of lambda

  m = N_sphere / N_med;
  return m;

}
