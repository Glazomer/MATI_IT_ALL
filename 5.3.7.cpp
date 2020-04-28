#include <iostream>

#define endl '\n'

using namespace std;

int main(int argc, char **argv) {
	ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

  double matrix[5][2], val, result = 0;
  
  for (int x = 0; x < 5; ++x){
    for (int y = 0; y < 2; ++y){
      cout << "(" << x << ", " << y << "): ";
      cin >> val;
      matrix[x][y] = val;
      if (val < -0.8 || 1.1 < val){
        result += val;
      }
    }
  }

  cout << "Сумму элементов == " << result << endl;
  return 0;
}