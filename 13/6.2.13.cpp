#include <iostream>
#include <cmath>

void equation (double a, double b, double c, double* result){
  double D = b*b - 4 * a * c;
  result[0] = D < 0 ? INFINITY : (-b + sqrt(D)) / (2*a);
  result[1] = D < 0 ? -INFINITY : (-b - sqrt(D)) / (2*a);
}

int main(int argc, char *argv[]) {
  double a, b, c, r[2];
  std::cin >> a >> b >> c;
  equation(a, b, c, r);
  if (r[0] == INFINITY){
    std::cout << "Wrong!\n";
  }else{
    std::cout << "x == " << r[1] << " or " << r[0] << '\n';
  }
  return 0;
}