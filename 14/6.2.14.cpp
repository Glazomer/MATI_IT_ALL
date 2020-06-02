#include <iostream>

int* fib(int n, int* result)
{
    int a = 0, b = 1;
    while (n-- > 1) {
        b += a;
        a = b - a;
    }
    
    result[0] = a;
    result[1] = b;
    result[2] = b + a;
    return result;
}

int main(int argc, char **argv) {

  int n;
  std::cin >> n;
  int* result = new int[3];
  
  result = fib(n, result);

  for (int i = 0; i < 3; i++)
  {
    std::cout << result[i] << ' ';
  }
  delete[] result;

  system("pause");
	return 0;
}