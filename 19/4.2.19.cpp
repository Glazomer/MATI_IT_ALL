#include <iostream>

int main(){
  unsigned N, M;
  int m;
  std::cin >> N >> M;
  while (N > 0){
    m = M;
    while (m > 0){
      std::cout << ((int)N - m) << ' ';
      m--;
    }
    N--;
    std::cout << '\n';
  }
  return 0;
}