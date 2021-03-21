#include <iostream>

int main(int argc, char **argv) {
  unsigned x;
  std::cin >> x;
  std::cout << ((x & 1) == ((x >> 3) & 1) ? "YES" : "NO") << std::endl;
  return 0;
}