#include <iostream>
#include <string>
int main()
{ 
  int m[2][4], p = 0, n = 0, z = 0;
  for (int i1 = 0; i1 < 2; i1++)
  {
      for (int i2 = 0; i2 < 4; i2++)
      {
        std::cin >> m[i1][i2];
        if (m[i1][i2] > 0)
          p += m[i1][i2];
        else if (m[i1][i2] < 0)
          n += m[i1][i2];
        else
          z++;
    }
  }
 
  std::cout << "positive " << p << ", negative " << n << ", zeroes " << z << std::endl;
 
  return 0;
}
