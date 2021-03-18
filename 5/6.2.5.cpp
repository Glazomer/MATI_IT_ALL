#include <cmath>
#include <iostream>

using namespace std;

void SinCosTg (double rad, double result[]) {
  result[0] = sin(rad);
  result[1] = cos(rad);
  result[2] = result[0] / result[1];
}

int main() {
  double result[3];
  SinCosTg(0, result);
  cout << result[0] << ", " << result[1] << ", " << result[2] << endl;
  return 0;
}