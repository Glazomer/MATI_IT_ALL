#include <iostream>
int main()
{ 
  int N, M, K;
  std::cin >> N >> M >> K;
  std::cout << (M % 10 == N % 10 && N % 10 == K % 10);
  return 0;
}