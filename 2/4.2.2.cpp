#include <iostream>

int main(int argc, char **argv){
  unsigned N, S = 0, i = 1, k;
  std::cin >> N;
  while (i <= N){
    k = 0;
    while (k <= i){
      S += (i + k)*(i + k);
      ++k;
    }
    ++i;
  }
  std::cout << S << '\n';
  return 0;
}