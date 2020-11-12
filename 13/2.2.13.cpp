#include <iostream>

int main(int argc, char** argv){
  int num;
  std::cin >> num;
  std::cout << (num < - 35 || (-10 <= num && num <= 41) || num > 64) << '\n';
  return 0;
}