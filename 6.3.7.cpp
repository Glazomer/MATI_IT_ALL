#include <iostream>
#include <time.h>

using namespace std;

#define endl '\n'


void fillRand(double* array, size_t size, double lowerBound, double upperBound){
  srand(time(NULL));

  double diff = upperBound - lowerBound;

  for (int i = 0; i < size; ++i){
    double randResult = ((double)rand() / (double)RAND_MAX) *  diff + lowerBound;
    array[i] = randResult;
  }
}
 
int main(int argc, char **argv){
  ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

  double array[10];
  int size = sizeof(array)/sizeof(array[0]);
  
  fillRand(array, size, 10.5, 50.9);

  for (int i = 0; i < size; ++i){
    cout << array[i] << endl;
  }
  return 0;
}