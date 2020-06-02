#include <iostream>

int main(){
  int N;
  std::cin >> N;
  std::cout << (N % 4 + N % 8 + N % 16) << "\n"; 
  return 0;
}