#include <iostream>
using namespace std;

int main(int argc, char **argv) {
  double matrix[4][3], total = 0;
  
  for (int x = 0, lx = sizeof(matrix)/sizeof(matrix[0]); x < lx; ++x){
    for (int y = 0, ly = sizeof(matrix[0])/sizeof(matrix[0][0]); y < ly; ++y){
      cin >> matrix[x][y];
      if (matrix[x][y] < 12 && matrix[x][y] > -12){
        total += matrix[x][y];
      }
    }
  }

  cout << total << endl;
  return 0;
}