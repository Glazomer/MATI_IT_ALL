#include <iostream>

struct Polynom
{
  double *a;
  int n; 
};

void CreatePolynom(Polynom& pol, int n)
{
  pol.n = n; 
  pol.a = new double[n]; 
}

void DeletePolynom(Polynom& pol)
{
  delete[] pol.a;
}

void PrintPolynom(Polynom& pol)
{
  for (int i = pol.n - 1; i >= 0; --i)
    printf("%g(x^%i)%c", pol.a[i], i, i == 0 ? '\n' : '+');
}

Polynom operator+ (const Polynom& pol1, const Polynom& pol2)
{
  Polynom pol3, big, small;
  if (pol1.n > pol2.n)
  {
    big = pol1;
    small = pol2;
  }else
  {
    big = pol2;
    small = pol1;
  }
  
  CreatePolynom(pol3, big.n);
  memcpy(pol3.a, big.a, big.n * sizeof(big.a));
  for (int i = 0; i < small.n; ++i)
    pol3.a[i] -= small.a[i];
    
  return pol3;
}

Polynom operator- (const Polynom& pol1, const Polynom& pol2)
{  
  Polynom pol3, big, small;
  if (pol1.n > pol2.n)
  {
    big = pol1;
    small = pol2;
  }else
  {
    big = pol2;
    small = pol1;
  }
  
  CreatePolynom(pol3, big.n);
  memcpy(pol3.a, big.a, big.n * sizeof(big.a));
  for (int i = 0; i < small.n; ++i)
    pol3.a[i] -= small.a[i];

  return pol3;
}

int main()
{
  Polynom pol[4];
  CreatePolynom(pol[0], 3);
  CreatePolynom(pol[1], 4);
  CreatePolynom(pol[2], 2);

  pol[0].a[2] = 3; pol[0].a[1] = 54; pol[0].a[0] = 17;
  pol[1].a[3] = 1; pol[1].a[2] = 22; pol[1].a[1] = 89; pol[1].a[0] = 198;
  pol[2].a[1] = 5; pol[2].a[0] = 45; 

  pol[3] = pol[0] + pol[1];
  PrintPolynom(pol[3]);

  pol[3] = pol[3] - pol[2];
  PrintPolynom(pol[3]);

  for (int i = 0; i < 4; i++)
    DeletePolynom(pol[i]);
  return 0;
}