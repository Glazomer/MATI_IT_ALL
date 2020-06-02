#include <iostream>

using namespace std;
int main() {
  int N;
  cin >> N;
  if ((N >= -14 && N < -8) ||(N > -8 && N < 2) || (N > 4 && N <= 14)){
    cout << "Da";
  }else{
    cout << "Net";
  }
	return 0;
}