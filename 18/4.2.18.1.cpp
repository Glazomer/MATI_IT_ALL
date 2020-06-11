#include <iostream>

using namespace std;

int main()
{ 
  double N;
  cin >> N;

  for (int i = 1; i <= N; i++)
    for (int j = 0; j < N; j++)
      printf("%.3f%c",(N - j)/i, (j == N - 1) ? '\n' : ' ');

  return 0;
}