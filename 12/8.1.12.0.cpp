#include <iostream>

class Matrix{
  int matrix[10][10];

  public:
  void random() {
    for (int i = 0; i < 100; ++i) {
      matrix[i / 10][i % 10] = rand() % 100;
    }
  }
  
  int (&ptr())[10][10] {
    return matrix;
  }

  Matrix operator+ (Matrix &m) {
    Matrix r;
    for (int i = 0; i < 100; ++i) {
      r.matrix[i / 10][i % 10] = matrix[i / 10][i % 10] + m.matrix[i / 10][i % 10];
    }
    return r;
  }

  Matrix operator- (Matrix &m) {
    Matrix r;
    for (int i = 0; i < 100; ++i) {
      r.matrix[i / 10][i % 10] = matrix[i / 10][i % 10] - m.matrix[i / 10][i % 10];
    }
    return r;
  }
};

int main(int argc, char *argv[]) {
  Matrix m1, m2;
  m1.ptr()[0][0] = 678;
  std::cout << m1.ptr()[0][0] << std::endl;
  m1.random();
  std::cout << m1.ptr()[0][0] << std::endl;

  for (int i = 0; i < 100; ++i) {
    std::cout << m1.ptr()[i / 10][i % 10] << ", ";
    if (i % 10 == 9) {
      std::cout << std::endl;
    }
  }

  return 0;
}