#include <iostream>

int main(int argc, char **argv) {
  char line[100], symb;
  int inRow = 1, max = 0;
  
  std::cin.getline(line, 100);
  char  *l = line;
  while (*l++ != '\0'){
    if (*(l-1) == *l){
      inRow++;
    }else{
      if (inRow > max){
        max = inRow;
        symb = *(l-1);
      }
      inRow = 1;
    }
  }

  std::cout << symb << std::endl << max << std::endl;

  system("pause");
	return 0;
}