#include <iostream>

int main(){
  char s;
  std::cin >> s;
  if (isalpha(s)){
    if (isupper(s)){
      std::cout <<  "YES\n";
    }else{
      std::cout <<  "yes\n";
    }
  }else{
    std::cout <<  "no\n";
  }
  return 0;
}