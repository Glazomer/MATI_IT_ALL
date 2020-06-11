#include <iostream>
#include <cstring>

struct String {
  private:
  char* s;
  unsigned n;

  public:
  char* getS(){
    return s;
  };
  void replace(const char* str){
    delete[] this->s;
    this->n = strlen(str) + 1;
    this->s = new char[this->n];
    strcpy(this->s, str);
  };
  String operator-(char c){
    char *str = new char[n];
    unsigned m = 0;
    for (unsigned i = 0; i < n; ++i)
      if (s[i] != c){
        str[m++] = s[i];
      }
    return String(str);
  };
  String& operator-=(char c){
    String s = (*this - c);
    strcpy(this->s, s.s);
    this->n = s.n;
    return *this;
  };

  String(char* str) : n(strlen(str)+1), s(str){};
  String(const char* str) : n(strlen(str)+1), s(new char[strlen(str)+1]){
    strcpy(s, str);
  }
  ~String(){delete[] s;};
};

int main() {
  String s("abcabbcccdefg");
  std::cout << s.getS() << '\n';
  std::cout << (s-'b').getS() << '\n';
  s -= 'c';
  std::cout << s.getS() << '\n';
  s.replace("12233478939");
  std::cout << s.getS() << '\n';
  std::cout << (s-'3').getS() << '\n';
  s -= '9';
  std::cout << s.getS() << '\n';
}