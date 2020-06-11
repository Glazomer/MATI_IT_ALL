#include <iostream>
#include <cmath>

using namespace std;

void Tri (double a, double b, double c, double *result){
  double p = (a + b + c) / 2.0;
  result[0] = a + b + c,
  result[1] = sqrt(p * (p - a) * (p - b) * (p - c)); // Теорема Герона
}

int main()
{ 
  double result[2];
  double a, b, c;
  std::cin >> a >> b >> c;
  Tri(a, b, c, result);

  cout << result[0] << '\n' << result[1] << '\n';

  return 0;
}