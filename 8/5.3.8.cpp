#include <iostream>

using namespace std;

int main()
{
  int m[3][4], sum = 0;
  for (int j = 0; j < 3; j++){
    for (int i = 0; i < 4; i++){
      cin >> m[j][i];
      sum += m[j][i] % 24 ? 0 : m[j][i];
    }
  }
  cout << sum << '\n';
  return 0;
}