#include <iostream>
using namespace std;

int main() {
  unsigned m;
  cin >> m;
	cout << (m & 0b11100 ? "No" : "Yes") << endl;
  return 0;
}
