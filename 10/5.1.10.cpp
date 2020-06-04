#include <iostream>
int main()
{ 
  int c = 0;
  char a[100], *ptr = a, l = '\0';
  std::cin.getline(a, 100);

  while (*ptr != '\0')
  {
    if (l == '\0' && *ptr != ' ')
    {
      l = *ptr;
    }else if(*(ptr+1) == ' ' || *(ptr+1) == '\0')
    {
      if (*ptr == l)
      {
        c++;
      }
      l = '\0';
    }
    ptr++;
  }
  std::cout << c;
  return 0;
}
