#include <iostream> 

struct Massiv { 
  int* store; 
  int size = 0; 
  Massiv(){}
  Massiv(int size) : size(size), store(new int[size]){}
}; 

Massiv operator- (Massiv a){
  Massiv b(a.size);
  for (int i = 0; i < a.size; i++){
    b.store[i] = -a.store[i];
  }
  return b;
}


int main(int argc, char **argv){ 
  Massiv m1 = Massiv(10); 
  Massiv m2;
  for (int i = 0; i < m1.size; i++){
    m1.store[i] = i;
  }
  m2 = -m1;
  for (int i = 0; i < m1.size; i++){
    std::cout << m2.store[i] << ", ";
  }
  std::cout << std::endl;

  delete [] m1.store;
  delete [] m2.store;
  return 0; 
} 

