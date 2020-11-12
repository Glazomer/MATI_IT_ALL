#include <iostream>

int main(int argc, char** argv) {
  unsigned int N;
  std::cin >> N;

  for (int mod = N; mod > 0; --mod){
    if (N % mod == 0){
      std::cout << mod << '\n';
    }
  }
  return 0;
}