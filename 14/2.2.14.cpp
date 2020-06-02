#include <iostream>

int main(int argc, char **argv) {
  int N, M;
  std::cin >> N;

  // Если хотя бы одна из этих цифр входит в интервал выведется 1
  // в противном случае выведется 0
  std::cout << ((N > -15 && N < -10) || (N > -10 && N < 10) || (N > 10 && N < 15)) << "\nPress any key to continue";
  system("pause");
	return 0;
}