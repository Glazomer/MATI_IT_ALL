#include <iostream> 
 
using namespace std; 

typedef struct { 
  int* data; 
  size_t size = 0; 
  int operator[](size_t idx){return data[idx];}; 
} Array; 

bool operator>(const Array &a, const Array &b){return a.size > b.size;} 
bool operator<(const Array &a, const Array &b){return a.size < b.size;} 
bool operator==(const Array &a, const Array &b){return a.size == b.size;} 
bool operator!=(const Array &a, const Array &b){return a.size != b.size;} 

size_t push(Array &a, int el){ 
  ++a.size; 
  a.data = (int*) realloc(a.data, (a.size) * sizeof(int)); 
  if (a.data != NULL){ 
    a.data[a.size - 1] = el; 
  }else { 
    free (a.data); 
    puts ("Error (re)allocating memory"); 
    exit (1); 
  } 
  return a.size; 
} 

int main(int argc, char **argv){ 
  Array arr1 = Array(); 
  Array arr2 = Array(); 
  push(arr1, 5); 
  push(arr1, 8); 
  push(arr1, -3); 
  push(arr2, 93); 
  printf("%i\n", arr1 != arr2); 

  free (arr1.data); 
  free (arr2.data); 
  return 0; 
} 

