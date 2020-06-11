#include <iostream>
#include <string.h>
#include <cctype>

double sum(const char* str){
  unsigned inRow = 1;
  double sum = 0;

  for (int i = strlen(str); i >= 0; i--){
    if (isnumber(*(str+i))){
      sum += (*(str+i) - '0') * inRow;
      inRow *= 10;
    }else{
      inRow = 1;
    }
  }
  return sum;
}

int main(int argc, char **argv){
  const char* s1 = "tt2jk47l901k";
  std::cout << sum(s1) << '\n';
  const char* s2 = "k1098j1k";
  std::cout << sum(s2) << '\n';
  return 0;
}