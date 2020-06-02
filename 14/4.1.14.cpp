#include <iostream>

int main(int argc, char **argv) {
  unsigned int N;
  float f;
  float P = 1;
  std::cin >> N;
  std::cin >> f;

  for (int k = 1; k <= N; k += 1)
  {
    P *= 1 - f*f/(2*k+1);
  }
  
  std::cout << P;

  system("pause");
	return 0;
}