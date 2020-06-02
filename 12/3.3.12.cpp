#include <iostream>
#include <algorithm>
#include <cmath>

int main(int argc, char *argv[]) {

  double X, Y;
  std::cin >> X;
  std::cin >> Y;

  double result1, result2, result3;

  result1 = 1/(X*X + Y*Y + 4);
  if (Y-7 == 0){
    if (-X < 0){
      result2 = -INFINITY;
    }else{
      result2 = INFINITY;
    }
  }else{
    result2 = (-X)/(Y-7);
  }

  if (X-1 == 0){
    if (Y < 0){
      result3 = -INFINITY;
    }else{
      result3 = INFINITY;
    }
  }else{
    result3 = Y/(X-1);
  }
  
  std::cout << std::min({result1, result2, result3}) << std::endl;
  
  return 0;
}