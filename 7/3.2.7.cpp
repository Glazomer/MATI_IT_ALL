#include <iostream>
#define endl '\n'

using namespace std;

int main(int argc, char **argv) {
	ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int num;
  char outChar = '&';
  cin >> num;
  
  switch (num % 10){
    case 5:
    case 0:
      outChar = '@';
    break;
  
    case 1:
    case 9:
      outChar = '%';
    break;
  
    case 2:
    case 8:
      outChar =  '^';
    break;
  
    default: 
      outChar =  '&';
    break;
  }

  cout << outChar << endl;
  return 0;
}