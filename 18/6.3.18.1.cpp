#include <iostream>
#include <string>

using namespace std;

void convert (string& str)
{
  for (unsigned i = 0; i < str.size(); ++i)
    if ('A' <= str[i] && str[i] <= 'Z')
      str[i] += 'a' - 'A';
    else if ('a' <= str[i] && str[i] <= 'z')
      str[i] += 'A' - 'a';
}

int main()
{ 
  string str;
  getline(cin, str);
  convert(str);
  std::cout << str;
  return 0;
}