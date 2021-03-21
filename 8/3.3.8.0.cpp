#include <iostream>
#include <algorithm>

int main(int argc, char **argv) {
  unsigned num;
  std::cin >> num;

  if (num < 100 || 1000 < num) {
    std::cout << "Wrong number" << std::endl;
    return 0;
  }

  int count[9] = {0};
  int biggest = 1;
  while (num) {
    ++count[num % 10];
    biggest = std::max(count[num % 10], biggest);
    num /= 10;
  }

  if (biggest == 3) {
    std::cout << 1 - !!count[0] << std::endl;
  } else if (biggest == 2) {
    std::cout << 3 - count[0] << std::endl;
  } else {
    std::cout << 6 - count[0] << std::endl;
  }
  
  return 0;
}