#include <iostream>

int main(int argc, char **argv) {
  int m[3][4];
  int summa = 0;
  for (int i = 0; i < 12; ++i) {
    std::cin >> m[i / 4][i % 4];
    if (m[i / 4][i % 4] % 24 == 0) {
      summa += m[i / 4][i % 4];
    }
  }
  std::cout << summa << '\n';
  return 0;
}