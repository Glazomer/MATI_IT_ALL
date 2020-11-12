#include <iostream>
#include <algorithm>
#include <cmath>

int main(int argc, char** argv) {

  double X, Y;
  std::cin >> X >> Y;

  double result1, result2, result3;

  result1 =  X*Y + X + Y;

  if (X + 14== 0){
    if (X - Y < 0){
      result2 = -INFINITY;
    }else{
      result2 = INFINITY;
    }
  }else{
    result2 = (X - Y) / (X + 14);
  }

  if (Y - 15 == 0){
    if (5*X - 8 < 0){
      result3 = -INFINITY;
    }else {
      result3 = INFINITY;
    }
  }else{
    result3 = (5*X - 8) / (Y - 15);
  }
  
  std::cout << std::min({result1, result2, result3}) << std::endl;
  
  return 0;
}