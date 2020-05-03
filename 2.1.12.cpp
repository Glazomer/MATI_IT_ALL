#include <iostream>
#include <cmath> // pow - возведение в степень


int main(int argc, char *argv[]) {
  double N, result;
  std::cin >> N;
  result = 2 * pow(N, 3) - 4 * pow(N+4, 2) + 5 * pow(N+5, -2); 
  std::cout << result << std::endl;

	return 0;
}