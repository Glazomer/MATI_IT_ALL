#include <iostream>
#include <algorithm>

int main(int argc, char *argv[]) {

  for (int i1 = 1; i1 < 16; i1++)
  {
    for (int i2 = 1; i2 < 16; i2++)
    {
      printf("%2i ", std::min(i1, i2));
    }
    std::cout << std::endl;
  }
  

  return 0;
}