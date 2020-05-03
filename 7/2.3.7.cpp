#include <iostream>
#define endl '\n'

using namespace std;

int main(int argc, char **argv) {
	ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int temp;
  cin >> temp;
  cout << ((temp % 4 ==  0) || (temp % 4 == 3) ? "Yes" : "No") << endl;
  return 0;
}