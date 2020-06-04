#include <iostream>
#include <cstring>

using namespace std;
class String {
  char * str;
  int size;
  public:
  void update(const char * _str) {
    size = strlen(_str);
    delete str;
    str = new char[size];
    strcpy(str, _str);
  }
  char * get() {
    return str;
  }
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
  friend ostream& operator<< (ostream & os, const String &obj);
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


ostream& operator<< (ostream &os, const String &obj) {
  cout << obj.str;
  return os;
}

int main() {
  String s((char*)"1234567");
  cout << "Shift on 2 items left: ";
  s << 2;
  cout << s << endl;
  cout << "Shift on 2 items right: ";
  s >> 2;
  cout << s;
  cout << "\nTest of function get()\n";
  cout << s.get();
  cout << "\nTest of function update(). Updating string with string \"qwert\": ";
  char * q = new char[5];
  q[0] = 'q';
  q[1] = 'w';
  q[2] = 'e';
  q[3] = 'r';
  q[4] = 't';
  s.update(q);
  cout << s.get();
}