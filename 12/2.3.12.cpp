#include <iostream>

int main(int argc, char *argv[]) {

  unsigned int number;
  std::cin >> number; 

  std::cout << (number << 6 >> 6) << std::endl;
  return 0;
}