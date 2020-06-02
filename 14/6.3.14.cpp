#include <iostream>

bool biggest(int* result, int size)
{
  for (int i = 0; i < size - 1; i++){
    if (result[i] > result[i + 1]){
      return false;
    }
  }
  return true;
}

int main(int argc, char **argv) {

  int result[3] = {5, 7, 12};
  std::cout << biggest(result, 3) << std::endl;
  result[1] = 14;
  std::cout << biggest(result, 3) << std::endl;

  system("pause");
  return 0;
}