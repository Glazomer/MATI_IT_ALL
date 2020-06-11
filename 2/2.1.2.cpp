#include <iostream>

int main(int argc, char **argv){
  double N;
  std::cin >> N;
  std::cout << 10*N*N - 5*N - 10 - 5/N + 10/(N*N);
  return 0;
}