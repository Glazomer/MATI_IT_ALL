#include <iostream>

int main(){
  char line[100], *ch = line;
  int n = 0;
  std::cin.getline(line, 100);
  while (*ch != '\0'){
    switch (*ch){
    case '&':
    case '|':
    case '*':
    case '^':
      n++;
    default:
      ch++;
      break;
    }
  }
  std::cout << n << std::endl;
  return 0;
}