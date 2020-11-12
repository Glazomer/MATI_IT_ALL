#include <iostream>
#include <cmath>

double sum(double n){
  double sum = n > 0 ? 1 : 0;
  for (int i = 2; i <= n; ++i){
    sum += pow(-1, i % 2)/i;
  }
  return sum;
}

int main(int argc, char** argv) {
  double n;
  std::cin >> n;

  std::cout << sum(n);
  return 0;
}