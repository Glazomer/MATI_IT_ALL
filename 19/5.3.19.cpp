#include <iostream>

// Функция для выбора большей из двух целых величин
int max(int A, int B){
 return A > B ? A : B;
}
int min(int A, int B){
 return A < B ? A : B;
}

int main(){
  unsigned n, m;
  int big = INT_MIN, small = INT_MAX;
  std::cin >> n >> m;
  int *a = new int[n*m];
  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      std::cin >> a[i*n + j];
      big = max(big, a[i*n + j]);
      small = min(small, a[i*n + j]);
    }
  }
  printf("big: %i, small: %i\n", big, small);
  delete[] a;
  return 0;
}