#include <iostream>
int main()
{ 
  int n1, n2, n;
  std::cin >> n1 >> n2 >> n;
  switch (n)
  {
  case 1:
    std::cout << n1 + n2;
    break;
  case 2:
    std::cout << n1 - n2;
    break;
  case 3:
    std::cout << n2 - n1;
    break;
  default:
    std::cout << "Unknown operation";
    break;
  }
  return 0;
}