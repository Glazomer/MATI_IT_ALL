#include <iostream>

using namespace std;

class Array{
  private:
  int* data;

  public:;
  int size = 0;
  int& operator[](int i){return data[i];};
  bool operator>(Array &b){return this->size > b.size;}
  bool operator<(Array &b){return  b > *this;}
  bool operator==(Array &b){return this->size == b.size;}
  bool operator!=(Array &b){return !(*this == b);}


  int push(int el){ 
    ++size;
    data = (int*) realloc(data, size * sizeof(int)); 
    if (data != NULL){ 
      data[size - 1] = el; 
    }else { 
      free (data); 
      size = 0;
    } 
    return size; 
  } 
  Array() : size(0), data((int*)calloc(0, sizeof(int))){};
  Array(int size) : size(size), data((int*)calloc(size, sizeof(int))){};
};


int main(int argc, char **argv){
  Array arr1;
  Array arr2;
  arr1.push(13);
  arr1.push(4);
  arr1.push(99);
  arr2.push(3);
  arr2.push(-39);
  
  printf("array1 size: %i, expected: 3\n", arr1.size);
  printf("array2 size: %i, expected: 2\n", arr2.size);
  printf("arr1 == arr2: %i, expected: 0\n", arr1 == arr2);
  printf("arr1 > arr2: %i, expected: 1\n", arr1 > arr2);
  return 0;

  return 0;
}