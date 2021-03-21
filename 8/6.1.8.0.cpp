#include <iostream>
#include <cmath>

bool isPrime (unsigned num) {
  for (unsigned n = sqrt(num) + 1; 1 < n; --n) {
    if (num % n == 0) return false;
  }
  return true;
}

int main(int argc, char **argv) {
  unsigned n;
  std::cin >> n;
  std::cout << isPrime(n);
  return 0;
}