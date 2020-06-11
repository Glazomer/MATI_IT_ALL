#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{ 
  int arr[3][6];
  string out[3];

  for (unsigned i = 0; i < 6; ++i)
  {
    cin >> arr[0][i];
    out[0] += to_string(arr[0][i]) + ' ';
  }

  for (unsigned i = 0; i < 6; ++i)
  {
    cin >> arr[1][i];
    arr[2][i] = max(arr[0][i], arr[1][i]);
    out[1] += to_string(arr[1][i]) + ' ';
    out[2] += to_string(arr[2][i]) + ' ';
  }

  cout << out[0] << '\n' << out[1] << '\n' << out[2] << '\n';

  return 0;
}