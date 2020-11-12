#include <iostream>

int main(int argc, char** argv){
  int num;
  std::cin >> num;
  switch (num)
  {
  case 0:
  std::cout << "zero";
    break;
  case 1:
  std::cout << "one";
    break;
  case 2:
  std::cout << "two";
    break;
  case 3:
  std::cout << "three";
    break;
  case 4:
  std::cout << "four";
    break;
  case 5:
  std::cout << "five";
    break;
  case 6:
  std::cout << "six";
    break;
  case 7:
  std::cout << "seven";
    break;
  case 8:
  std::cout << "eight";
    break;
  case 9:
  std::cout << "nine";
    break;
  default:
  std::cout << "Unknown";
    break;
  }
  std::cout << '\n';
  return 0;
}