#include <iostream>

int main(){
  double a, b, c, d;
  std::cin >> a >> b >> c >> d;
  std::cout << (a < b && b < c && c < d) << "\n"; 
  return 0;
}