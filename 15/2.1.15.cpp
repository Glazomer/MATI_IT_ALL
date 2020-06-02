#include <iostream>

using namespace std;
int main() {
  int N, M;
  cin >> N >> M;
  cout << N * N + M * M - N * M + N + M;
	return 0;
}