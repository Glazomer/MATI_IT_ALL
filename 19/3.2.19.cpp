#include <iostream>

int main(){
  double n;
  char s;
  std::cout << "number: ";
  std::cin >> n;
  std::cout << "symbol: ";
  std::cin >> s;
  switch (s){
    case 'x':
      std::cout << (n * 10) << '\n';
      break;
    case 'y':
      std::cout << (n * n) << '\n';
      break;
    case 'z':
      std::cout << (n / 50) << '\n';
      break;
    default:
      std::cout << "Unknown operation\n";
      break;
  }
  return 0;
}