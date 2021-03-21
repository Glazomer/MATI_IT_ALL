#include <iostream>

void closest (int *result, int n){
  result[0] = n;
  result[1] = n + 1;
}

int main(int argc, char **argv) {
  int result[2];
  double n;
  std::cin >> n;
  closest(result, n);
  std::cout << result[0] << '\n' << result[1] << '\n';
  return 0;
}