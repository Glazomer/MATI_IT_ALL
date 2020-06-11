#include <iostream>

int main(int argc, char **argv){
  unsigned k, l, min;
  std::cin >> k >> l;
  if (k > 8 || l > 8 || k * l == 0){
    std::cout << "Wrong numbers!\n";
  }else{
    k = k > 4 ? 9 - k : k;
    l = l > 4 ? 9 - l : l;
    min = l < k ? l : k;
    std::cout << 5 + min * 2 << '\n';
  }
  return 0;
}