#include <iostream>

using namespace std;

int main()
{
  int N, M, K;
  cin >> N >> M >> K;
  cout << 5*(N + M)*(M + K)*(K + M) << '\n';
  return 0;
}