#include <iostream>
#include <cmath>

double* Tri (double a, double b, double c){
  double *R = new double[2],
  P = (a + b + c) / 2.0;
  R[0] = a + b + c,
  R[1] = sqrt(P * (P - a) * (P - b) * (P - c));
  return R;
}

int main()
{ 
  double a, b, c, *R;
  std::cin >> a >> b >> c;
  R = Tri(a, b, c);
  printf("P = %f, S = %f\n", R[0], R[1]);
  delete[] R;
  return 0;
}