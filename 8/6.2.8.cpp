#include <iostream>
#include <cmath>

using namespace std;

int* closest (double n){
  int *r = new int[2];
  r[0] = n;
  r[1] = n + 1;
  return r;
}

int main()
{
  double n;
  cin >> n;
  int *r = closest(n);
  cout << r[0] << '\n' << r[1] << '\n';
  delete[] r;
  return 0;
}