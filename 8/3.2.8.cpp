#include <iostream>

using namespace std;

int main()
{
  unsigned x;
  cin >> x;
  switch(x%10){
    case 2: case 4: case 6:
      cout << "abc\n";
    break;
    case 1: case 3: case 5:
      cout << "def\n";
    break;
    case 8: case 9:
      cout << "ghi\n";
    break;
    default:
      cout << "jkl\n";
    break;
  }
  return 0;
}