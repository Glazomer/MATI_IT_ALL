#include <iostream>

#include <cstdlib>

using namespace std;

void fill(int * arr, int n, int l, int a) {
  for (int i = 0; i < n; ++i) {
    arr[i] = rand() % l + a;
  }
}

int main() {
  int n;
  cout << "Enter length\n";
  cin >> n;
  int * arr = new int[n];
  int a;
  int b;
  cout << "Enter two numbers - borders of interval of random numbers\n";
  cin >> a >> b;
  int length = b - a;
  fill(arr, n, length, a);
  for (int j = 0; j < n; ++j) {
    cout << arr[j] << " ";
  }
  delete[] arr;
  return 0;
}