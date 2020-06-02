#include <iostream>

int main(int argc, char **argv) {
  int matrix[2][4];
  int summa = 0;

  for (int i1 = 0; i1 < 2; i1++)
    for (int i2 = 0; i2 < 4; i2++){
      std::cin >> matrix[i1][i2];
      if (matrix[i1][i2] % 5 == 0)
        summa += matrix[i1][i2];
    }

  std::cout << summa;
  system("pause");
	return 0;
}