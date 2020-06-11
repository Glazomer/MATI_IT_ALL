#include <iostream>

int main(int argc, char **argv){
  char x;
  std::cin >> x;
  if (48 <= x && x <= 57){
    if (x % 2){
      std::cout << "Yes, Odd\n";
    }else{
      std::cout << "Yes, Even\n";
    }
  }else{
    std::cout << "No\n";
  }
  return 0;
}