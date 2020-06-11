#include <iostream>
#include <cstring>

struct String {
  char* s;
  unsigned n;
  String(char* str) : n(strlen(str)+1), s(str){};
  String(const char* str) : n(strlen(str)+1), s(new char[strlen(str)+1]){
    strcpy(s, str);
  }
};

String operator-(String& s, char c){
  char *str = new char[s.n];
  unsigned n = 0;
  for (unsigned i = 0; i < s.n; ++i)
    if (s.s[i] != c)
      str[n++] = s.s[i];
  return String(str);
}

String& operator-=(String& s, char c){
  char *d = s.s;
  s = s - c;
  delete[] d;
  return s;
}

int main() {
  String s("abcabbcccdefg");
  std::cout << s.s << '\n';
  std::cout << (s-'b').s << '\n';
  s -= 'c';
  std::cout << s.s << '\n';
  delete[] s.s;
}