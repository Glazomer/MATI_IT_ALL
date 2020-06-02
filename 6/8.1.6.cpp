#include <iostream> 

class Massiv { 
  double* inside; 
  public:
  int size; 
  double* getInside(){return inside;};
  double& operator[](unsigned int i){return inside[i];};
  Massiv& operator+=(double num){
    for (int i = 0; i < size; i++){
      inside[i] += num;
    }
    return *this;
  } 
  Massiv& operator-=(double num){
    return (*this += -num);
  } 
  Massiv& operator*=(double num){
    for (int i = 0; i < size; i++){
      inside[i] *= num;
    }
    return *this;
  } 
  Massiv& operator/=(double num){
    for (int i = 0; i < size; i++){
      inside[i] /= num;
    }
    return *this;
  } 
  Massiv(int size):size(size), inside(new double[size]()){};
  ~Massiv(){delete[] inside;};
}; 



int main(int argc, char **argv){ 
  Massiv m1(10); 
  m1[5] = 7;
  m1 += 4;
  for(int i = 0; i < m1.size; i++){
    std::cout << m1[i] << ", ";
  }
  std::cout << std::endl;
  m1 *= 3;
  m1 -= 1;
  for(int i = 0; i < m1.size; i++){
    std::cout << m1[i] << ", ";
  }

  return 0; 
} 

