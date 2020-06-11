#include <iostream>

int main(int argc, char **argv){
  unsigned n;
  std::cin >> n;
  if (n != 0){
    double *arr = new double[n];
    for (int i = 0; i < n; ++i){
      if (i % 2 == 0){
        arr[i] = (i/2+1)/(double)n;
      }else{
        arr[i] = (double)n/(i/2+1);
      }
      std::cout << arr[i] << ' ';
    }
    delete[] arr;
  }else{
    std::cout << "Can not do with 0!\n";
  }
  return 0;
}