#include <iostream>
#define endl '\n'

using namespace std;

int main(int argc, char **argv) {
	ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  
  double N, M, K;
  cin >> N >> M >> K;
  cout << ((2*N - M)*(2*M - K)*(2*K - M)) / 3 << endl;

	return 0;
}