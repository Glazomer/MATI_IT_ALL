#include <iostream>
void fill(double* arr, int size){
arr[0] = 1.0;
for (int i = 1; i < size; ++i)
  arr[i] = arr[i - 1] + 1.0/(i+1);
}
int main()
{ double arr[10];
  fill(arr, 10);
  for (int i = 0; i < 10; i++)
    std::cout<<arr[i]<<' ';
  return 0;
}
