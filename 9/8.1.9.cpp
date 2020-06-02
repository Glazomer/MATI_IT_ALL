#include <iostream> 

class Massiv { 
  int *store; 
  int size = 0; 

  public:
  Massiv& operator- (){
    for (int i = 0; i < size; i++){
      store[i] *= -1;
    }
    return *this;
  }

  int *getPointer(){
    return store;
  }
  int getSize(){
    return size;
  }

  Massiv(){}
  Massiv(std::initializer_list<int> il) : size(il.size()), store(new int[il.size()]){
    auto it = il.begin();
    for (int i = 0; i < size; i++){
      store[i] = *(it++);
    }
  }
  Massiv(int size) : size(size), store(new int[size]){}
  
  ~Massiv(){
    delete[] store;
    }
}; 


int main(int argc, char **argv){ 
  Massiv m({1,2,3,4,5,6}); 

  int* ptr = m.getPointer();
  for (int i = 0; i < m.getSize(); i++){
    std::cout << ptr[i] << ", ";
  }
  std::cout << std::endl;
  -m;
  for (int i = 0; i < m.getSize(); i++){
    std::cout << ptr[i] << ", ";
  }
  std::cout << std::endl;

  return 0; 
} 

