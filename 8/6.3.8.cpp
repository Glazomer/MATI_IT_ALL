#include <iostream>
#include <time.h>

using namespace std;

void randM(int **m, int s1, int s2, int from, int to){
  int range = to - from;
  for (int i = 0; i < s1; ++i){
    for (int j = 0; j < s2; ++j){
      m[i][j] = ((double)rand() / RAND_MAX)*range + from;
    }
  }
}
 
int main(){
  srand(time(NULL));

  const int s1 = 10, s2 = 8;
  int **m = new int*[s1];
  for (int i = 0; i < s1; i++)
    m[i] = new int[s2];
  
  randM(m, s1, s2, 67, 102);

  for (int i = 0; i < s1; ++i){
    for (int j = 0; j < s2; ++j){
      cout << m[i][j] << ' ';
    }
    cout << '\n';
    delete[] m[i];
  }
  delete[] m;
  return 0;
}