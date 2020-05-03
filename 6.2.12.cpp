#include <iostream>

int* function (int a, int b, int c, int d){
  // (ax + b)*(cx +d) = (ac)x^2 + (ad + bc)x + bd
  int coef[3] = {0};
  coef[2] = a*c;
  coef[1] = a*d + b*c;
  coef[2] = b * d;
  return coef;
}

int main(int argc, char *argv[]) {
  int a, b, c, d;
  std::cin >> a >> b >> c >> d;
  int* coef = function(a, b, c, d);
  std::cout << coef[2] << " " << coef[1] << " " << coef[0] << std::endl;
  return 0;
}