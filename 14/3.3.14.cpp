#include <iostream>
#include <cmath>

int main(int argc, char **argv) {
  float x, y;
  std::cin >> x;
  std::cin >> y;
  
  float values[6]={x+y, x-y, y-x, x*y, -INFINITY, -INFINITY};

  if (y == 0){
    if (x > 0){
      values[4] = INFINITY;
    }
  }else{
    values[4] = x/y;
  }

  if (x == 0){
    if (y > 0){
      values[5] = INFINITY;
    }
  }else{
    values[5] = y/x;
  }

  float big = -INFINITY;
  for (int i = 0; i < 6; ++i){
    if (values[i] > big)
      big = values[i];
  }

  std::cout << "big value: " << big;

  system("pause");
	return 0;
}