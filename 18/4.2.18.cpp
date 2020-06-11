#include <iostream>
int main()
{ 
  double N, n, i = 0;
  std::cin >> N;
  while (++i <= N){
    n = N;
    while (n > 0){
      printf("%f ",n--/i);
    }
    printf("\n");
  }
  return 0;
}