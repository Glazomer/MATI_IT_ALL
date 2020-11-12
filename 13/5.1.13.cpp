#include <iostream>

int main(int argc, char** argv) {
  char line[1000], *start, *end;

  std::cin.getline(line, 1000);
	
  for (char *ptr = line, *s = ptr, *e = ptr; *ptr != '\0'; ++ptr)
  {
    if (*ptr == ' '){
      e = s = ptr + 1;
    }else{
      ++e;
    }
    if (e - s  > end - start){
      start = s;
      end = e;
    }
  }

  std::cout << (end - start) << '\n';
  for (char *ptr = start; ptr < end; ++ptr){
    std::cout << *ptr;
  }
  std::cout << '\n';

  return 0;
}