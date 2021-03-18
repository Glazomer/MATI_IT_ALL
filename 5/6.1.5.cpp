#include <cmath>
#include <iostream>

using namespace std;

double Sochitania (int n, int k) {
  return tgamma(n + 1) / (tgamma(k + 1) * tgamma(n - k + 1));
}

int main() {
  int n, k;
  cin >> n >> k;
  cout << Sochitania(n, k) << endl;
  return 0;
}