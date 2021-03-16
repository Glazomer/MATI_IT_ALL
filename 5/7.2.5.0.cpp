#include <iostream>
#include <string.h>

struct Str
{
  char* str;
  unsigned size;
  Str(const char* s) : size(strlen(s)){
    str = new char[size + 1];
    strcpy(str, s);
  };
};

Str operator- (Str s)
{
  for (unsigned i = 0; i < s.size / 2; ++i)
  {
    char t = s.str[i];
    s.str[i] = s.str[s.size - (i + 1)];
    s.str[s.size - (i + 1)] = t;
  }
  return s;
}

int main()
{
  Str t("abcdefg");
  std::cout << t.str << '\n';
  std::cout << (-t).str << '\n';
  delete[] t.str;
  return 0;
}