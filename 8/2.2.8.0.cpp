#include <iostream>

int main(int argc, char **argv) {
  double k, l, n, m;
  std::cin >> k >> l >> n >> m;
  std::cout << (l - m) / (k - n) << std::endl;
  return 0;
}