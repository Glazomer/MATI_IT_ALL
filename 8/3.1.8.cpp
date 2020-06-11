#include <iostream>

using namespace std;

int main()
{
  unsigned x, y;
  cin >> x >> y;
  cout << (((0.25 <= x*x && x*x <= 1 && 0 <= y*y && y*y <= 0.25) || 
  (0.25 <= y*y && y*y <= 1 && 0 <= x*x && x*x <= 0.25)) ? "YES" : "NO") << '\n';
  return 0;
}