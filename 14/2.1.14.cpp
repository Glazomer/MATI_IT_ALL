#include <iostream>

int main(int argc, char **argv) {
  int N, M;
  std::cin >> N;
  std::cin >> M;

  std::cout <<  2 * N * N - 4 * N * M + 2 * M * M; 
  system("pause");
	return 0;
}