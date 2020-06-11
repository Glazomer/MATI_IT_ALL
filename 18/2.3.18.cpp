#include <iostream>
int main()
{ 
  unsigned N;
  std::cin >> N;
  std::cout << !(N % 4 > 1) << !(N % 2);
  return 0;
}