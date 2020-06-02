#include <iostream>

int main(int argc, char **argv) {

  for (int i1 = 0; i1 < 20; i1++){
    for (int i2 = 0; i2 < 10; i2++){
      std::cout << (i1 + i2) << " ";
    }
    std::cout << '\n';
  }

  system("pause");
	return 0;
}