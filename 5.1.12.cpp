#include <iostream>

int main(int argc, char *argv[]) {
  char line[1000], *Longest;
  int size = 0, longest = 0;

  std::cin.getline(line, 1000);
	
  for (char *ptr = line, *word = ptr; *ptr != '\0'; ++ptr)
  {
    if (*ptr == ' '){
      size = 0;
      word = ptr + 1;
    }else{
      size++;
    }
    if (size > longest){
      longest = size;
      Longest = word;
    }
  }

  std::cout << "longest size: " << longest << std::endl << "longest word: ";
  for (char *ptr = Longest; *ptr != ' '; ++ptr){
    std::cout << *ptr;
  }
  std::cout << std::endl;

  return 0;
}