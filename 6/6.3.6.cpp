#include <iostream>
#include <cmath>

void shift(int *array, int size){
  for (int i = size - 1; i > 0; i--){
    int next = (i - 1) % size;
    int temp = array[next];
    array[next] = array[i];
    array[i] = temp;
  }
}

int main(int argc, char* argv[]){
  int size = 10, *array = new int[size];
  for (int i = 0; i < size; i++){
    array[i] = i;
    std::cout << array[i] << ", ";
  }
  std::cout << std::endl;

  shift(array, size);
  shift(array, size);

  for (int i = 0; i < size; i++){
    std::cout << array[i] << ", ";
  }

  delete[] array;
  return 0;
}