#include <iostream>

int main(int argc, char** argv){
  int N, M;
  std::cin >> N >> M;
  std::cout << ((N + M) * (N + M)) / (N * N + M * M + 1) << '\n';
  return 0;
}