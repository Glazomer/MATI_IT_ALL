#include <iostream>
#include <ctype.h> // isalnum

void prorezka(char str[]){
  int i = 0, l = 0;
  while(str[i] != '\0'){
    if (isalnum(str[i])){
      str[l++] = str[i];
    }
    i++;
  }
  str[l] = '\0';
}

int main(){
  char str[] = "q1!w2@e3#r4$";
  std::cout << str << '\n';
  prorezka(str);
  std::cout << str << '\n';
  return 0;
}