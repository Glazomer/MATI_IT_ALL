#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;

  switch (N)
  {
  case 1: case 11: case 111:
    cout << N;
    break;
  case 10: case 20: case 30:
    cout << 0;
    break;
  case 100:
    cout << "sto";
    break;
  case 200:
    cout << "dvesti";
    break;
  default:
    cout << "schislo";
    break;
  }

  return 0;
}