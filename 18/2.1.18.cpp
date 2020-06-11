#include <iostream>
int main()
{ 
  unsigned N, M, K;
  std::cin >> N >> M >> K;
  std::cout << M % N + N % K + K % M;
  return 0;
}