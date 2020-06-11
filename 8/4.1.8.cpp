#include <iostream>

using namespace std;

int main()
{
  unsigned N;
  double S = 0;
  cin >> N;
  for (double i = 1; i <= N; ++i)
    S += (N/i) + i + 1;
  cout << S << '\n';
  return 0;
}