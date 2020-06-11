#include <iostream>

class Polynom
{
  double *a;
  int n; 
  public:

  void print(){
    for (int i = n - 1; i >= 0; --i)
      printf("%g(x^%i)%c", a[i], i, i == 0 ? '\n' : '+');
  }

  Polynom operator+ (const Polynom& pol)
  {
    Polynom big, small, pol3;
    if (n > pol.n)
    {
      big = *this;
      small = pol;
    }else
    {
      big = pol;
      small = *this;
    }
    pol3 = big;
    for (int i = 0; i < small.n; ++i)
      pol3.a[i] += small.a[i];
      
    return pol3;
  }

  Polynom operator- (const Polynom& pol)
  {
    Polynom big, small, pol3;
    if (n > pol.n)
    {
      big = *this;
      small = pol;
    }else
    {
      big = pol;
      small = *this;
    }
    
    pol3 = big;
    for (int i = 0; i < small.n; ++i)
      pol3.a[i] -= small.a[i];
      
    return pol3;
  }

  double& operator[] (int i){
    return a[i];
  }

  Polynom& operator= (const Polynom& pol){
    n = pol.n;
    delete[] a;
    a = new double[n];
    memcpy(a, pol.a, n * sizeof(a));
    return *this;
  }

  Polynom(int n) : n(n), a(new double[n]){};
  Polynom() : n(1), a(new double[1]){};
  ~Polynom(){delete[] a;};
};

int main()
{
  Polynom pol1(3), pol2(4), pol3(2), pol4;

  pol1[2] = 3; pol1[1] = 54; pol1[0] = 17;
  pol2[3] = 1; pol2[2] = 22; pol2[1] = 89; pol2[0] = 198;
  pol3[1] = 5; pol3[0] = 45; 

  pol4 = pol1 + pol2;
  pol4.print();

  pol4 = pol4 - pol3;
  pol4.print();

  return 0;
}