#include <iostream>

int main(int argc, char **argv){
  double x, y;
  std::cin >> x >> y;
  std::cout << (y > 2 || (y >= 0 && y*y/4 >= x*x));
  return 0;
}