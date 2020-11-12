#include <iostream>

int main(int argc, char** argv) {

  for (int i = 1; i <= 10; ++i){
    for (int j = 1; j <= 10; ++j){
      int num = 0;
      if (i == 1 || j == 10){
        num = 1;
      } else if (i == 11 - j){
        num = j;
      }
      printf("%2i ", num);
    }
    std::cout << '\n';
  }

	return 0;
}