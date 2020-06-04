// #include <conio.h>
#include <iostream>
int main()
{
   float x, y, m, n;
   std::cout<<"vvedite x, y";
   std::cin>> x;
   std::cin>> y;
   
   if (x > 0)
      m = y;
   else
   if (x == 0)
      m = 0;
   else
      m = -y;
   if (y > 0)
      n = x;
   else
   if (y == 0)
      n = 0;
   else
      n = -x;
   
   std::cout << m+n;
   // _getch();
   return 0;
}
