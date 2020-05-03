#include <iostream>
#include <math.h>
#define endl '\n'

using namespace std;

int main(int argc, char **argv) {
	ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

  double N, M;
  cin >> N >> M;
  cout << "Площадь ромба: " << (N * M)/2 << endl 
      << "Площадь эллипса: " << (N * M) * M_PI << endl;
  return 0;
}