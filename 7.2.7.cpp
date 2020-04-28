#include <iostream>

using namespace std;

#define endl '\n'

typedef struct {
  int* data;
  size_t size = 0;
  int operator[](size_t idx){return data[idx];};
  void push(int el){
    ++size;
    data = (int*) realloc(data, (size) * sizeof(int));
    data[size] = el; 
  };
} Array;

inline bool operator>(const Array &a, const Array &b){return a.size > b.size;}
inline bool operator<(const Array &a, const Array &b){return b > a;}
inline bool operator==(const Array &a, const Array &b){return a.size == b.size;}
inline bool operator!=(const Array &a, const Array &b){return !(a == b);}


int main(int argc, char **argv){
  ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

  Array arr1 = Array();
  Array arr2 = Array();

  arr1.push(53);
  arr1.push(11);
  arr2.push(-23);
  arr2.push(-4);
  arr2.push(36);

  printf("arr1.size == %zu, arr2.size == %zu\n", arr1.size, arr2.size);
  printf("(arr1 == arr2) == %s\n", arr1 == arr2 ? "true" : "false");
  printf("(arr1 != arr2) == %s\n", arr1 != arr2 ? "true" : "false");
  printf("(arr1 > arr2) == %s\n", arr1 > arr2 ? "true" : "false");
  printf("(arr1 < arr2) == %s\n", arr1 < arr2 ? "true" : "false");
  return 0;
}