#include <iostream>

int main(int argc, char** argv){
  int i, k, z;
  std::cin >> i >> k;
  if (k > 50){
    z = k - i;
  } else if (k < 25){
    z = k + i;
  } else if (i > 10){
    z = k * i;
  } else if (i < 0){
    z = k / i;   
  } else {
    z = i % k;
  }
  std::cout << z << '\n';
  return 0;
}