#include <iostream>

using namespace std;

int main()
{
  unsigned x;
  cin >> x;
  cout << ((x % 2 == x %16 > 7) ? "YES" : "NO") << '\n';
  return 0;
}