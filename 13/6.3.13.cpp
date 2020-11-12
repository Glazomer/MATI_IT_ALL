#include <iostream>
#include <cmath>

int find (int n[], int j){
  int r = 0, result = 0;
  for (int i = 0; i < j; i++){
    if (n[i] < 0){
      r = 0;
    }else{
      ++r;
      result = r > result ? r : result;
    }
  }
  return result;
}

int main(int argc, char** argv){
  int test[] = {2, 53,-2,0,0,0,-77};
  std::cout << find(test, 7) << '\n';
  return 0;
}