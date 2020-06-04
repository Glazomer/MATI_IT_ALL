#include <iostream>

unsigned* f(unsigned a, unsigned b){
  unsigned *r = new unsigned[2];
  r[0] = a * b;
  r[1] = a * 2 + b * 2;
  return r;
}

int main(){
  unsigned a, b, *r;
  std::cout << "Enter a, b: ";
  std::cin >> a >> b;
  r = f(a, b);
  std::cout << r[0] << '\n';
  std::cout << r[1] << '\n';
  delete[] r;
  return 0;
}