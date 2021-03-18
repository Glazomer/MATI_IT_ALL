#include <iostream>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;
	cout << (abs(x) + abs(y) < 5 ? "Yes" : "No") << endl;
  return 0;
}
