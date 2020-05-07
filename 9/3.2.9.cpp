#include <iostream>
using namespace std;

int main(){
  int m, result = 4;
  cout << "vvedite chislo: ";
	cin >> m;

  switch (m % 25)
  {
  case 5:
  case 10:
  case 20:
    result = 1;  
  break;

  case 2:
  case 12:
  case 22:
    result = 2;  
  break;

  case 13:
  case 15:
  case 17:
    result = 3;  
  break;
  
  default:
    result = 4;
  break;
  }

  cout << result << endl;

  return 0;
}