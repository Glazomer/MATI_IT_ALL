#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int m[2][4];
  int sum = 0;

  for (int i = 0; i < 2 * 4; ++i) {
    cin >> m[i / 4][i % 4];
    sum += max(m[i / 4][i % 4], 0);
  }
  cout << sum;
  return 0;
}
