#include <iostream>

int main(int argc, char **argv){
  for (int x = -7; x <= 23; ++x){
    std::cout << 0.7*x*x - 3*x + 10 << ", ";
  }
  return 0;
}