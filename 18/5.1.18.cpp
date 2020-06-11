#include <iostream>
int main()
{ 
  char str[101], *p = str; // pointer
  int q = 0; // quantity
  std::cin.getline(str, 101);
  while (*(p++) != '\0'){
    if ((*p == ' ' || *p == '\0') && (*(p - 1) == 'E' || *(p - 1) == 'e'))
      ++q;
  }
  std::cout << q << '\n';
  return 0;
}