#include <iostream>

int main(int argc, char *argv[]) {

  int N, sum;
  std::cin >> N;

  if (N < 0){
    std::cout << "Not int!" << std::endl;
    return 0;
  }

  for (int digit = N % 10; N != 0; N/= 10, digit = N % 10){
    sum += digit;
  }

  std::cout << sum << std::endl;
  return 0;
}