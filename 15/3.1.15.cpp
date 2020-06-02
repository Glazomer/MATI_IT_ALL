#include <iostream>

using namespace std;

int main() {
  double x, y, z;
  cin >> x >> y; 
  if (-1 < x && x < 1 && -1 < y && y < 1){
    z = x*x*x + y*y*y;
  }else if (-1 < x && x < 1 && (y == -1 || y == 1)){
    z = x*x + y*y;
  }else if (-1 < y && y < 1 && (x == -1 || x == 1)){
    z = x + y;
  }else{
    z = 2;
  }
  cout << z;
	return 0;
}