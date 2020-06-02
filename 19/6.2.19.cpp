#include <iostream>

unsigned f(unsigned a, unsigned b, unsigned ploshad){
  if (ploshad == 1){
    return a * b;
  }else{
    return a * 2 + b * 2;
  }
}

int main(){
  unsigned a, b;
  std::cout << "Enter a, b: ";
  std::cin >> a >> b;
  std::cout << f(a, b, 0) << '\n';
  std::cout << f(a, b, 1) << '\n';
  return 0;
}