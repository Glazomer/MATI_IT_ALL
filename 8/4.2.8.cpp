#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  unsigned N;
  double S = 0;
  cin >> N;
  for (double i = 1; i <= N; ++i)
    S += pow(1.08, i - 1);
  cout << S << '\n';
  return 0;
}