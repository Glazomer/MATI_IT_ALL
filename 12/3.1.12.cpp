#include <iostream>

int main(int argc, char *argv[]) {

  int i, k, z;
  std::cin >> i >> k;

  if (i == 0){
    z = k;
  } else if (k == 0){
    z = i;
  } else if (k % i == 0){
    z = i - k;
  } else if (i % k == 0){
    z = k - i;
  } else {
    z = i + k;
  }

  std::cout << z << std::endl;
  return 0;
}