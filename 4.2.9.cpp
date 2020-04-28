#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  
  int N, M, K, result = 0; // int (целые числа), т.к. в алогоритме нет нецелых чисел
  cin >> N >> M >> K; // Получаем данные цифры
  for (int i = 0; i <= N; ++i){
    for (int m = 1; m <= M; ++m){
      for (int k = 0; k <= K; ++k){
        result += 2*i + 3*m + 5*k; // Получаем сумму и прибавляем к результату
      }
    }
  }
  cout << result << endl; // Выводим результат
  return 0;
}