#include <iostream>

double function(double limit){
  double otvet = 1;
  for (int i = 0; i < limit; i++)
  {
    otvet *= (1 + 1/(2+i)); 
  }

  return otvet;
}

int main(int argc, char *argv[]) {
  double otvet;
  double limit;
  std::cin >> limit;
  
  otvet = function(limit);

  std::cout << otvet;
  return 0;
}