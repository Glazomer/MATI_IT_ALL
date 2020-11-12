#include <iostream>

int main(int argc, char** argv) {
  int m[5][2], s = 0;

  for (int i = 0; i < 5; i++){
    for (int j = 0; j < 2; j++){
      std::cin >> m[i][j];
      if (m[i][j] > 0 && m[i][j] % 2 == 0)
        s += m[i][j];
    }
  }

  std::cout << s << '\n';
	return 0;
}