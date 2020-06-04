#include <iostream>
#include <cstring>

using namespace std;

class String {
  char* str;
  int size;
  public:
  String& operator << (unsigned move) {
    char *copy = new char[move];
    memcpy(copy, str, move);
    memcpy(str, str + move, size - move);
    memcpy(str + size - move, copy, move);
    return *this;
  }
  String & operator >> (unsigned move) {
    char *copy = new char[move];
    memcpy(copy, str + size - move, move);
    memcpy(str + move, str, size - move);
    memcpy(str, copy, move);
    return *this;
  }
  friend ostream & operator << (ostream & s, const String & obj);
  String(char * _str) {
    size = strlen(_str);
    str = new char[size];
    strcpy(str, _str);
  }
  ~String(){
    size = 0;
    delete[] str;
  }
};
ostream & operator << (ostream & os, const String & obj) {
  os << obj.str;
  return os;
}
int main() {
  String s((char *)"1234567");
  cout << "Shift on 2 items left: ";
  s << 2;
  cout << s << endl;
  cout << "Shift on 2 items right: ";
  s >> 3;
  cout << s;
}