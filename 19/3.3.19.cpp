#include <iostream>

int main(){
  int a, b, c;
  std::cin >> a >> b >> c;
  if (a+b <= c || a+c <= b || b+c <= a){
    std::cout << "Invalid\n";
    return 0;
  }else if(a == b || b == c || a == c){
    if (a == b && b == c){
      std::cout << "All equal\n";
    }else{
      std::cout << "Two equal\n";
    }
  }
  printf("P = %i\n", a + b + c);
  return 0;
}