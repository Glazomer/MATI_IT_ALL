#include <iostream>
#include <algorithm>
using namespace std;

int figure(unsigned int* arr, int size){
  unsigned sum = 0, big = 0;
  for (unsigned i = 0; i < size; i++){
    sum += arr[i];
    big = max(big, arr[i]);
  }
  if (sum - big > big && size > 3){
    return true;
  }
  return false;
}

int main() {
  unsigned int arr1[] = {2,2,3},
          arr2[] = {1,2,1},
          arr3[] = {1,1,1,1,1},
          arr4[] = {1,2},
          arr5[] = {1,2,6,1,1};
  cout << figure(arr1, sizeof(arr1)/4)  << endl;
  cout << figure(arr2, sizeof(arr2)/4)  << endl;
  cout << figure(arr3, sizeof(arr3)/4)  << endl;
  cout << figure(arr4, sizeof(arr4)/4)  << endl;
  cout << figure(arr5, sizeof(arr5)/4)  << endl;
	return 0;
}