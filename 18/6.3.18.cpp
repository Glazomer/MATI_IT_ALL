#include <iostream>
#include <cctype>

void Up (char *str)
{
  while (*str != '\0')
  {
    if (isupper(*str))
      *str = tolower(*str);
    else
      *str = toupper(*str);
    ++str;
  }
}

int main()
{ 
  char str[101];
  std::cin.getline(str, 101);
  Up(str);
  std::cout << str;
  return 0;
}