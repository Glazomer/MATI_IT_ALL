#include <iostream>

int main(int argc, char **argv) {
  int x;
  std::cin >> x;

  switch (x)
  {
  case 27:
    std::cout << x;
    break;
  case 72:
    std::cout << 9;
    break;
  case 22:
    std::cout << 22*22;
    break;
  case 77:
    std::cout << (char)77;
    break;
  default:
    std::cout << "schislo";
    break;
  }

  system("pause");
	return 0;
}