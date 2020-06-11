#include <iostream>
#include <cmath>

using namespace std;

bool isPrime (unsigned n){
  for (int i = sqrt(n) + 1; i > 1; --i)
    if (n % i == 0)
      return false;
  return true;
}

int main()
{
  unsigned n;
  cin >> n;
  cout << isPrime(n);
  return 0;
}