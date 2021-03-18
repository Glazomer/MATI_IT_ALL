#include <iostream>
using namespace std;

int main() {
  unsigned len;
  cin >> len;
  int *arr = new int[len];
  for (int i = 0; i < len; ++ i) {
    arr[i] = i % 2 ? 30 + 3 * (i / 2) : 90 - 3 * (i / 2);
    cout << arr[i] << ", ";
  }
  delete[] arr;
  return 0;
}
