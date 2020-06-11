#include <iostream>

using namespace std;

int main()
{ 
  int h, plus, minus;
  cin >> h;

  if (h < 0 || h > 23){
    cout << "Enter from 0 to 23!\n";
    return 0;
  }

  plus = h + 10;
  minus = h - 10;

  cout << (minus < 0 ? "Yesterday: " : "");
  cout << h << " - 10 == " << (minus + 24)%24 << '\n';
  cout << (plus > 23 ? "Tomorrow: " : "");
  cout << h << " + 10 == " << (plus + 24)%24 << '\n';

  return 0;
}