#include <iostream>
#include <string.h>

class Str {
  char* str;
  unsigned size;

  public:
  char* ptr () {
    return str;
  }

  void addChar(char c) {
    char *oldStr = str;
    str = new char[++size + 1];
    strcpy(str, oldStr);
    delete[] oldStr;
    str[size - 1] = c;
    str[size] = '\0';
  }

  Str& operator- () {
    for (unsigned i = 0; i < size / 2; ++i) {
      char t = str[i];
      str[i] = str[size - (i + 1)];
      str[size - (i + 1)] = t;
    }
    return *this;
  }

  Str(const char* s) : size(strlen(s)) {
    str = new char[size];
    strcpy(str, s);
  };

  ~Str() {
    delete[] str; 
    size = 0;
  };
};

int main() {
  Str t("abcdefg");
  std::cout << t.ptr() << '\n';
  t.addChar('h');
  std::cout << (-t).ptr() << '\n';
  return 0;
}