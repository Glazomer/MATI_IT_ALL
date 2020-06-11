#include <iostream>
int main()
{ 
  int x, y, v;
  std::cin >> x >> y >> v;
  if (x > y)
    std::cout << v;
  else if (y > v)
    std::cout << x;
  else if (v > x)
    std::cout << y;
  else
    std::cout << "Nothing!";
  return 0;
}