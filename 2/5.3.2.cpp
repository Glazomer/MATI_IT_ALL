#include <iostream>
#include <cmath>
#include <algorithm>

int main(int argc, char **argv){
  unsigned n, m;
  std::cin >> n >> m;
  double sum, sumRow, mostRow, most = -INFINITY, *matrix = new double[n*m];
  for (int i = 0; i < n; ++i){
    sumRow = 0;
    mostRow = -INFINITY;
    for (int j = 0; j < m; ++j){
      std::cin >> matrix[i*m + j];
      sumRow += matrix[i*m + j];
      mostRow = std::max(most, matrix[i*m + j]);
    }
    if (mostRow > most){
      most = mostRow;
      sum = sumRow;
    }
  }
  std::cout << sum << '\n';
  delete[] matrix;
  return 0;
}