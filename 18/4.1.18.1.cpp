#include <iostream>

using namespace std;

int main()
{ 
  unsigned N;
  std::cin >> N;

  unsigned  f1 = 1, f2 = 0, result = 0;
  while (f1 <= N)
  {
    result += f1; // Прибавляем число

    unsigned last = f1; // Сохраняем предыдущее 
    f1 += f2; // Увеличиваем
    f2 = last; // Записываем старое число
  }

  std::cout << result << '\n';
  return 0;
}