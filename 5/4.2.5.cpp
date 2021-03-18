#include <iostream>
#include <cmath>
using namespace std;

int main() {
  unsigned N;
  double S = 0;
  cin >> N;
  for (int k = 1; k < N; ++k) {
    S += pow(-0.9, k) / (4.5 - k);
  }
  cout << S << endl;
  return 0;
}
