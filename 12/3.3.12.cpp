#include <iostream>
#include <algorithm>

int main(int argc, char *argv[]) {

  double X, Y;
  std::cin >> X;
  std::cin >> Y;

  double result1, result2, result3;
  
  result1 = 1/(X*X + Y*Y + 4);
  result2 = (-X)/(Y-7);
  result3 = Y/(X-1);
  
  std::cout << std::min(std::min(result1, result2), result3) << std::endl;
  
  return 0;
}