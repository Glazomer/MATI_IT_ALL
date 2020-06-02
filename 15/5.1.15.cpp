#include <iostream>
using namespace std;

int main() {
  char str[101];
  unsigned int quantity = 0; // Для подсчёта слов в строке
  bool z = true;
  char *pointer = str;
  cin.getline(str, 101);

  while (*pointer != '\0'){
    if (*pointer == 'Z' || *pointer == 'z'){
      z = false;
    }else if ((*pointer == ' ' && *(pointer + 1) != ' ') || *(pointer + 1) == '\0'){
      if (z)
        quantity++;
      z = true;
    }
    pointer++;
  }
  cout << quantity;
	return 0;
}