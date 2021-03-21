#include <iostream>

int main(int argc, char **argv) {
  unsigned n;
  std::cin >> n;
  int *m = new int[n];
  int n1 = INT_MIN;
  int n2 = INT_MIN;
  while (--n) {
    std::cin >> m[n];
    if (m[n] > n1){
      n2 = n1;
      n1 = m[n];
    }else {
      n2 = std::max(m[n], n2);
    }
  }
  std::cout << "n1 == " << n1 << ", n2 == " << n2 << std::endl;
  return 0;
}