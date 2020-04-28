#include <iostream>
#define endl '\n'

using namespace std;

int main(int argc, char **argv) {
	ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

  float x, y;
  cin >> x >> y;
  
  if ((x < -15 ||  24 < x) && (y < -11 || 16 < y)){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
}