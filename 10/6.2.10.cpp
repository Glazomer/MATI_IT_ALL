#include <iostream>
int* count(int x, int y)
{
  int *mn = new int[2];
  if (x+y < 25)
    mn[0] = x;
  else if (x + y <= 50)
    mn[0] = 2 * x;
  else 
    mn[0] = 3 * x;
  if (x+y < -10)
    mn[1] = y;
  else if (x + y <= 10)
    mn[1] = 2 * y;
  else 
    mn[1] = 3 * y;
  return mn;
}
int main()
{ int* mn;
  int x, y;
  std::cin>>x>>y;
  mn = count(x,y);
  std::cout<<mn[0]<<' '<<mn[1];
  return 0;
}
