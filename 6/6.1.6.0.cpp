#include <iostream>

int NOD(int n1, int n2){
  while (n2){
		n2 ^= n1 ^= n2 ^= n1 %= n2;
  }
  return n1;
}

int NOK(int n1, int n2){
  return (n1 * n2)/NOD(n1, n2);
}

int main(int argc, char* argv[]){
  printf("NOK(%i, %i) == %i (need: %i)\n", 6, 13, NOK(6,13), 78);
  printf("NOK(%i, %i) == %i (need: %i)\n", 128, 1024, NOK(128, 1024), 1024);
  printf("NOK(%i, %i) == %i (need: %i)\n", 22, 91, NOK(22, 91), 2002);
  printf("NOK(%i, %i) == %i (need: %i)\n", 7, 77, (NOK(7, 77)), 77);
  return 0;
}