#include <iostream>

double function(double N, double n){
  double S = 0;
  for (int i = n; i <= N; i++){
    S += (1.5 * i) / (i + 50);
  }
  return S;
}

int main(int argc, char **argv) {
  double N, n, S;
  std::cin >> N;
  std::cin >> n;

  S = function(N, n);

  std::cout << S;

  system("pause");
	return 0;
}