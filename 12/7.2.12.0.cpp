#include <iostream>

struct Matrix{
  int matrix[10][10];
};

Matrix operator+ (const Matrix &m1, const Matrix &m2) {
  Matrix r;
  for (int i = 0; i < 100; ++i) {
    r.matrix[i / 10][i % 10] = m1.matrix[i / 10][i % 10] + m2.matrix[i / 10][i % 10];
  }
  return r;
}

Matrix operator- (const Matrix &m1, const Matrix &m2) {
  Matrix r;
  for (int i = 0; i < 10; ++i) {
    r.matrix[i / 10][i % 10] = m1.matrix[i / 10][i % 10] - m2.matrix[i / 10][i % 10];
  }
  return r;
}

int main(int argc, char *argv[]) {
  Matrix m1, m2, m3;
  for (int i = 0; i < 100; ++i) {
    m1.matrix[i / 10][i % 10] = 10 * (i / 10) + i % 10;
    m2.matrix[i / 10][i % 10] = 10 * (i / 10) + i % 10;
  }
  m3 = m1 + m2;
  for (int i = 0; i < 100; ++i) {
    printf("%3i ", m3.matrix[i / 10][i % 10]);
    if (i % 10 == 9) {
      std::cout << std::endl;
    }
  }
  return 0;
}