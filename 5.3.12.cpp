#include <iostream>

int main(int argc, char *argv[]) {
  int matrix1[3][3], matrix2[3][3];
  for (int i = 0; i < 3; i++)
  {
    for (int k = 0; k < 3; k++)
    {
      int num;
      std::cin >> num;
      matrix1[i][k]  = num;
      matrix2[k][i] = num;
    }
  }

  for (int i = 0; i < 3; i++)
  {
    for (int k = 0; k < 3; k++)
    {
      printf("%3i ", matrix1[i][k]);
    }
    std::cout << std::endl;
  }

  std::cout << std::endl;

  for (int i = 0; i < 3; i++)
  {
    for (int k = 0; k < 3; k++)
    {
      printf("%3i ", matrix2[i][k]);
    }
    std::cout << std::endl;
  }


  return 0;
}