#include <iostream>

double* p2p3p4(double n){
  double *r = new double[3];
  r[0] = n*n;
  r[1] = n*n*n;
  r[2] = n*n*n*n;
  return r;
}

int main(int argc, char **argv){
  double n, *r;
  std::cin >> n;
  r = p2p3p4(n);
  printf("p2: %g, p3: %g, p4: %g\n", r[0], r[1], r[2]);
  delete[] r;
  return 0;
}