#include <iostream>
#define endl '\n'

using namespace std;

int main(int argc, char **argv) {
	ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int a, b, c;
  int map[10] = {0},
    answer = 0,
    result;

  cout << "Введите 3 цифры!" << endl;
  cin >> a >> b >> c;

  if (a < 0 || a > 9 || b < 0 || b > 9 || c < 0 || c > 9){
      cout << "Вы ввели не цифру а число!" << endl;
      return 1;
    }

  ++map[a];
  ++map[b];
  ++map[c];

  for (int i = 0; i < 10; ++i){
    answer += map[i] > 0;
  }

  switch (answer)
  {
  case(3):
    result = 27 - map[0] * 2; 
    break;

  case(2):
    result = 3 - map[0]; 
    break;

  case(1):
    result = 1 - (map[0] > 0); 
    break;

  default:
    return 1;
    break;
  }
  
  cout << "Из цифр " << a << ", " << b << ", " << c << " получается столько комбинаций: " << result << endl;
 
  return 0;
}