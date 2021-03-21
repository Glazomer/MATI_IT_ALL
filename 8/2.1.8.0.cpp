#include <iostream>

int main(int argc, char **argv) {
  int N, M, K;
  std::cin >> N >> M >> K;
  std::cout << 5*(N + M)*(M + K)*(K + M) << std::endl;
  return 0;
}