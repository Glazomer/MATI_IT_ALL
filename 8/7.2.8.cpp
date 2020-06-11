#include <iostream> 

using namespace std;

struct Arr{
  double *a;
  unsigned n;
};

double operator+ (Arr a){
  double r = 0;
  for (int i = 0; i < a.n; i++)
    r += a.a[i];

  return r;
}

int main(int argc, char** argv) { 
  Arr a({new double[10], 10});
  a.a[1] = 9.5;
  a.a[2] = -1.5;
  a.a[3] = 7.1;
  a.a[4] = 11;
  a.a[7] = 100;
  a.a[9] = 22000;
  cout << +a << '\n';
  return 0; 
} 