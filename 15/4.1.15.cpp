#include <iostream>
using namespace std;

int main() {
	int  N;
	double f, P = 0;
  cin >> N >> f;
	for (double k = 1; k <= N; k++){
    P += 1 + (f*f + 10) / k;
	}
	cout << P;
	return 0;
}