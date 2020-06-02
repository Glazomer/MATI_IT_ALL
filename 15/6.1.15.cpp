#include <iostream>
#include <cmath>
using namespace std;

double Summa(double K, double k){
  int S = 0;
  for(double i = k; i <= K; i++){
    S += fabs(i - (k + K)/4);
  }
  return S;
}

int main() {
  cout << Summa(6, 4);
	return 0;
}