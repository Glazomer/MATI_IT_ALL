#include <iostream>
#include <cctype>
using namespace std;

int main() {
  char ch;
  cin >> ch;
	cout << ('A' <= toupper(ch) && toupper(ch) <= 'D' ? "Yes" : "No") << endl;
  return 0;
}
