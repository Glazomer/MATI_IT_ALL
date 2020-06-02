#include <iostream>

int main(){
  unsigned N;
  int M;
  double P;
  bool has = false;
  
  std::cout << "Enter N, M, P: ";
  std::cin >> N >> M >> P;
  while (N--){
    P *= 10;
    if ((int)P % 10 == M){
      has = true;
    }
  }
  std::cout << has << "\n"; 
  return 0;
}