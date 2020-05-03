#include <iostream>
#include <cmath>

int find (int numbers[], int size, int number){
  int n = 0;
  for (int i = 0; i < size; i++)
  {
    if (numbers[i] == abs(number))
    {
      n++;
    }
  }
  return n;
}

int main(int argc, char *argv[]) {
  int test[100] = {2};
  test[4] = 7;
  test[63] = 9;
  test[42] = 8;
  test[2] = 7;
  test[99] = 7;
  std::cout << find(test, sizeof(test)/ sizeof(int), 7) << std::endl;
  return 0;
}