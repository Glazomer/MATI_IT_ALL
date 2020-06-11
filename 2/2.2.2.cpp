#include <iostream>

int main(int argc, char **argv){
  unsigned N, M, K;
  std::cin >> N >> M >> K;
  std::cout << (double)K*2*N/(N+M) << " " << (double)K*2*M/(N+M);
  return 0;
}