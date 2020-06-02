#include <iostream>

int main(int argc, char **argv) {
  int x, y, z;
  std::cin >> x;
  std::cin >> y;

  if (x > 0 && y > 0){
    z = x + y;
  }else if (x < 0 && y < 0){
    z = x - y;
  }else if( x == 0 || y == 0){
    z = 100;
  }else{
    z = x * y;
  }

  std::cout << z;
  system("pause");
	return 0;
}