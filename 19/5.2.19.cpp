#include <iostream>

int main(){
  double m1[9], m2[9] = {0};
  int i1 = 0, i2 = 0;

  while (i1 < 9){
    std::cin >> m1[i1];
    if (-7.7 < m1[i1] && m1[i1] < 18.8){
      m2[i2++] = m1[i1];
    }
    i1++;
  }
  i1 = 0, i2 = 0;
  while (i1 < 9){
    std::cout  << m1[i1++] << ' ';
  }
  std::cout << '\n';
  while (i2 < 9){
    std::cout  << m2[i2++] << ' ';
  }
  return 0;
}