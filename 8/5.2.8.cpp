#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
  unsigned n;
  cin >> n;
  int *m = new int[n], big1 = INT_MIN, big2 = INT_MIN;
  while (n--)
  {
    cin >> m[n];
    if (m[n] > big1){
      big2 = big1;
      big1 = m[n];
    }else if (m[n] > big2){
      big2 = m[n];
    }
  }
  cout << "big1 == " << big1 << ", big2 == " << big2 << '\n';
  return 0;
}