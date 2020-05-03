#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char **argv) {
  
  int maxVal = 0, minVal = 0, n; // В maxVal будет хранится самое большое значение, minVal самое меньшее
  cin >> n; // Получаем размер массива

  vector<int> arr(n); // Используем vector, т.к. на windows нельзя создать массив длиною числа полученного из cin


  for (int i = 0; i < n; ++i){ // Итерируем
    cin >> arr[i]; // Получаем из консоли число

    maxVal = max(maxVal, arr[i]); // max вернет наибольшее значение, 
      // если новое значение больше старого, то maxVal станет новым занченим
    minVal = min(minVal, arr[i]); // min вернет наименьшее значение, 
      // если новое значение меньше старого, то minVal станет новым занченим
  }

  
  cout << "Min: " << minVal << ", Max: " << maxVal << endl; // Выводим

  return 0;
}