#include <iostream>

int main(int argc, char *argv[]) {

  unsigned int N, sum;
  std::cin >> N;

  for (int digit = N % 10; N != 0; N/= 10, digit = N % 10){
    sum += digit;
  }

  std::cout << sum << std::endl;
  return 0;
}