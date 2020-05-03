#include <iostream>

struct Matrix{
  int matrix[10][10];
  Matrix operator+ (Matrix m)
  {
    Matrix r;
    for (int i = 0; i < 10; i++)
    {
      for (int j = 0; j < 10; j++)
      {
        r.matrix[i][j] = matrix[i][j] + m.matrix[i][j];
      }
    }
    return r;
  }
  Matrix operator- (Matrix m)
  {
    Matrix r;
    for (int i = 0; i < 10; i++)
    {
      for (int j = 0; j < 10; j++)
      {
        r.matrix[i][j] = matrix[i][j] - m.matrix[i][j];
      }
    }
    return r;
  }
};

int main(int argc, char *argv[]) {
  Matrix m1, m2, m3;
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      m1.matrix[i][j] = i * j - i;
      m2.matrix[j][i] = i * j - j;
    }
  }
  m3 = m1 + m2;
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      printf("%3i ", m3.matrix[i][j]);
    }
    std::cout << std::endl;
  }
  return 0;
}