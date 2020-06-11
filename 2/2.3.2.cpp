#include <iostream>

int main(int argc, char **argv){
  unsigned N;
  std::cin >> N;
  std::cout << (N%16 != 0);
  return 0;
}