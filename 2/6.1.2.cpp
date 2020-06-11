#include <iostream>
#include <cmath>

double height(unsigned A, unsigned B, unsigned C){
  double p = (A+B+C)/2.0;
  if (A * B * C != 0)
    return 2*sqrt(p*(p-A)*(p-B)*(p-C))/A;
  else
    return 0;
}

int main(int argc, char **argv){
  unsigned A, B, C;
  std::cin >> A >> B >> C;
  std::cout << height(A, B, C) << '\n';
  return 0;
}