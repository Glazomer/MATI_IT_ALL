#include <iostream>

using namespace std;


class Array{
  private:
  int* data;
  size_t _size = 0;

  public:
  size_t size(){return _size;};
  int operator[](size_t i){return data[i];};
  bool operator>(Array &b){return this->size() > b.size();}
  bool operator<(Array &b){return  b > *this;}
  bool operator==(Array &b){return this->size() == b.size();}
  bool operator!=(Array &b){return !(*this == b);}


  size_t push(int el){
    ++_size;
    data = (int*) realloc(data, _size * sizeof(int));
    data[_size - 1] = el;
    return _size;
  }
};


int main(int argc, char **argv){
  Array arr1;
  Array arr2;
  arr1.push(7);
  arr1.push(8);
  arr1.push(-9);
  arr2.push(-13);
  arr2.push(93);
  
  printf("arr1.size == %zu, arr2.size == %zu\n", arr1.size(), arr2.size());
  printf("(arr1 == arr2) == %s\n", arr1 == arr2 ? "true" : "false");
  printf("(arr1 != arr2) == %s\n", arr1 != arr2 ? "true" : "false");
  printf("(arr1 > arr2) == %s\n", arr1 > arr2 ? "true" : "false");
  printf("(arr1 < arr2) == %s\n", arr1 < arr2 ? "true" : "false");
  return 0;

  return 0;
}