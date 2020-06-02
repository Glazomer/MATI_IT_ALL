#include <iostream>

// Функция для выбора большей из двух целых величин
int max(int A, int B){
 return A > B ? A : B;
}
int min(int A, int B){
 return A < B ? A : B;
}

unsigned f(unsigned a, unsigned b, unsigned c, unsigned d){
  unsigned x, y;
  x = max(a, c) - min(a, c);
  y = max(b, d) - min(b, d);
  return max(x, y);
}

int main(){
  unsigned a, b, c, d;
  std::cout << "Enter a, b, c, d: ";
  std::cin >> a >> b >> c >> d;
  std::cout << f(a, b, c, d);
  return 0;
}