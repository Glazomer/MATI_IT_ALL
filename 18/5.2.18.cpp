#include <iostream>
int main()
{ 
  double matrix[3][6];
  for (int i = 0; i < 6; ++i)
    for (int j = 0; j < 6; ++j)
      switch (i)
      {
      case 0: case 1:
        std::cin >> matrix[i][j];
      break;
      case 2:
        matrix[i][j] = matrix[0][j] > matrix[1][j] ? matrix[0][j] : matrix[1][j];
        break;
      default:
        std::cout << matrix[i % 3][j] << ' ';
        if (j == 5)
          std::cout << '\n';
        break;
      }
  return 0;
}