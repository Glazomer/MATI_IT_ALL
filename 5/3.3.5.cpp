#include <iostream>
using namespace std;

int main() {
  int k, l, m, n;
  cin >> k >> l >> m >> n;
  if ((k < 1 || 8 < k) || (l < 1 || 8 < l) || (m < 1 || 8 < m) || (n < 1 || 8 < n)) {
    cout << "Wrong data!" << endl;
  } else {
    cout << (k == m || l == n || abs(k - m) == abs(l - n) ? "Yes" : "No") << endl;
  }
  return 0;
}
