#include <iostream>

int main(int argc, char **argv){
  char str[101], *ptr = str;
  std::cin.getline(str, 101);
  while (*ptr != '\0'){
    if (*ptr == '!'){
      *ptr = '?';
    }else if(*ptr == '?'){
      *ptr = '!';
    }
    std::cout << *ptr++;
  }
  return 0;
}