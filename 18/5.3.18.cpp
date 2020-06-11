#include <iostream>
int main()
{ 
  int n, m;
  std::cin >> n >> m;
  double *a = new double[n * m];
  for (int i = 0; i < n; ++i)
    for (int j = 0; j < m; ++j){
      std::cin >> a[i*m + j];
      if (a[i*m + j] < 0)
        a[i*m + j] = -1;
      else if (a[i*m + j] > 0)
       a[i*m + j] = 1;
    }

  for (int i = 0; i < n; ++i)
    for (int j = 0; j < m; ++j)
      std::cout << a[i*m + j] << ' ';

  delete[] a;
  return 0;
}