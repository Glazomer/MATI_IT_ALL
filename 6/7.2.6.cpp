#include <iostream> 

struct Massiv { 
  double* data; 
  int size; 
  Massiv(int size):size(size), data(new double[size]()){}
}; 

Massiv operator+=(const Massiv &m, double num){
  for (int i = 0; i < m.size; i++){
    m.data[i] += num;
  }
  return m;
} 
Massiv operator-=(const Massiv &m, double num){
  m += -num;
  return m;
} 
Massiv operator*=(const Massiv &m, double num){
  for (int i = 0; i < m.size; i++){
    m.data[i] *= num;
  }
  return m;
} 
Massiv operator/=(const Massiv &m, double num){
  for (int i = 0; i < m.size; i++){
    m.data[i] /= num;
  }
  return m;
} 


int main(int argc, char **argv){ 
  Massiv m1(10); 
  m1 += 4;
  for(int i = 0; i < m1.size; i++){
    std::cout << m1.data[i] << ", ";
  }
  std::cout << std::endl;
  m1 *= 3;
  m1 -= 1;
  for(int i = 0; i < m1.size; i++){
    std::cout << m1.data[i] << ", ";
  }

  delete[] m1.data;
  return 0; 
} 

