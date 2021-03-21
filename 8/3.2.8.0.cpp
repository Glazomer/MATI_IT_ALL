#include <iostream>

int main(int argc, char **argv) {
  unsigned x;
  std::cin >> x;
  x %= 10;
  if (x == 2 || x == 4 || x == 6) {
    std::cout << "abc\n";
  } else if (x == 1 || x == 3 || x == 5) {
    std::cout << "def\n";
  } else if (x == 8 || x == 9) {
    std::cout << "ghi\n";
  } else {
    std::cout << "jkl\n";
  }
  return 0;
}