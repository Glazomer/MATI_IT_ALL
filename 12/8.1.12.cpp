#include <iostream>

class Matrix{
  int** matrix;
  public:
  Matrix(){
    matrix = new int*[10];
    for (int i = 0; i < 10; i++)
    {
      matrix[i] = new int[10];
    }
  }
  ~Matrix(){
    for (int i = 0; i < 10; i++)
    {
      delete[] matrix[i];
    }
    delete[] matrix;
  }
  void random(){
    for (int i = 0; i < 10; i++)
    {
      for (int j = 0; j < 10; j++)
      {
        matrix[i][j] = rand();
      }
    }
  }
  int**& ukazatel(){
    return matrix;
  }
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
  Matrix m1, m2;
  m1.ukazatel()[0][0] = 777;
  std::cout << m1.ukazatel()[0][0] << std::endl;
  m1.random();
  std::cout << m1.ukazatel()[0][0] << std::endl;

  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      std::cout << m1.ukazatel()[i][j] << ", ";
    }
    std::cout << std::endl;
  }

  return 0;
}