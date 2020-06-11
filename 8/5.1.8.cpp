#include <iostream>

using namespace std;

int main()
{
  char str[101];
  cin.getline(str, 101);
  char *p = str;
  unsigned word = 1, words = 0;
  while (*p != '\0')
  {
    word = word || (*p == ' ');
    if ((*p == 't' && *(p+1) == 's') || (*p == 's' && *(p+1) == 't'))
    {
      words += word;
      word = 0;
    }
    p++;
  }
  cout << words << '\n';
  return 0;
}