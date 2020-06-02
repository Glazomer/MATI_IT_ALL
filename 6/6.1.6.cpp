#include <iostream>

int NOK(int n1, int n2){
  int min = n1 > n2 ? n1 : n2;
  for (int i = min; i <= n1*n2; i++){
    if ((i % n1 ==0) && (i % n2 == 0)){
      return i;
    }
  }
  return 0;
}

int main(int argc, char* argv[]){
  printf("NOK(%i, %i) == %i (need: %i)\n", 6, 13, NOK(6,13), 78);
  printf("NOK(%i, %i) == %i (need: %i)\n", 128, 1024, NOK(128, 1024), 1024);
  printf("NOK(%i, %i) == %i (need: %i)\n", 22, 91, NOK(22, 91), 2002);
  printf("NOK(%i, %i) == %i (need: %i)\n", 7, 77, (NOK(7, 77)), 77);
  return 0;
}