#include <iostream>
#define endl '\n'

using namespace std;

int main(int argc, char **argv) {
	ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  
  double n, m, result = 0, multiplication = 1;
  cin >> n >> m;
  for (double i = 1; i <= n; ++i){
    multiplication = 1;
    for (double k = 1; k <= m; ++k){
      multiplication *= (i - 10)/(2*i + 5);
    }
    result += multiplication;
  }
  cout << result << endl;
  return 0;
}