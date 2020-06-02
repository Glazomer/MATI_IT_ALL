#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int matrix[5][3], sum = 0;
  for(int i = 0; i < 5; i++){
    for (int j = 0; j < 3; j++){
      cin >> matrix[i][j];
      sum +=  abs(matrix[i][j]);
    }
  }
  cout << sum;
	return 0;
}