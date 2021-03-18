#include <iostream>
#include <string>
using namespace std;

int main() {
  string str;
  cin >> str;
  for (int i = 0; i < str.size(); ++i) {
    if ('k' <= str[i] && str[i] <= 'm') {
      putchar(str[i] - 32);
    } else {
      putchar(str[i]);
    }
  }
  return 0;
}
