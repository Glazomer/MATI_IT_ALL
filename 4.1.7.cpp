#include <iostream>
#define endl '\n'

using namespace std;

int main(int argc, char **argv) {
	ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  
  double n, result = 0;
  cin >> n;
  for (double i = 1; i <= n; ++i){
    result += (i + 6)/(n + i);
  }
  cout << result << endl;
  return 0;
}