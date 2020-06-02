#include <iostream>
using namespace std;

int main() {
  cout << "size: ";
  int n;
  cin >> n;
  double *p = new double[n], sum = 0;
  for(int i = 0; i < n; i++){
    cin >> p[i];
    if (p[i] > 5.3 || p[i] < -5.3)
      sum += p[i];
  }
  cout << sum;
  delete[] p;
  return 0;
}