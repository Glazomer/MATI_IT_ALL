#include <iostream>

int main(int argc, char **argv) {
  unsigned N;
  double summa = 0;
  std::cin >> N;
  for (double i = 1; i <= N; ++i) {
    summa += (N / i) + i + 1;
  }
  std::cout << summa << std::endl;
  return 0;
}