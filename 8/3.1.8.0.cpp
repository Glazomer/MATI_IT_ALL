#include <iostream>
#include <cmath>

int main(int argc, char **argv) {
  double x, y;
  std::cin >> x >> y;
  x = abs(x);
  y = abs(y);
  std::cout << ((0 <= x && x <= 0.5 && 0.5 <= y && y <= 1) || 
    (0.5 <= x && x <= 1 && 0 <= y && y <= 0.5) ? "YES" : "NO") << std::endl;
  return 0;
}