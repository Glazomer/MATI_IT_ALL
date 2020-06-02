#include <iostream>

int main(int argc, char **argv) {
  int n, summa = 0;
  std::cin >> n;
  int* arr = new int[n];

  for (int i = 0; i < n; i++){
    std::cin >> arr[i];
    if (arr[i] < 0 && arr[i] % 2 == 0)
      summa += arr[i];
  }

  std::cout << summa;
  delete[] arr;
  system("pause");
	return 0;
}