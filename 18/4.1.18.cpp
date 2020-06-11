#include <iostream>
int main()
{ 
  int f1 = 1, f2 = 0, sum = 0, N;
  std::cin >> N;
  while (f1 < N){
    sum += f1;
    f1 += f2;
    f2 = f1 - f2;
  }
  std::cout << sum << '\n';
  return 0;
}