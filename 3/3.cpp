#include <iostream>

using namespace std;

class List {
  private:
  unsigned radius;
  unsigned* list;
  unsigned v;
  
  public:
  unsigned& operator[](int i) {
    if ((int) -radius < i && i < (int) radius) {
      i += radius;
      if (list[i] < 0) { // Не может храниться меньше 0 элементов
        list[i] = 0;
      }
      return list[i];
    }
    
    return v;
  }
  List(unsigned radius):radius(radius), list(new unsigned[radius*2 + 1]()){};
  ~List(){delete[] list;};
};

int main () {
  List l(100);
  l[-10] += 10;
  l[73] += 2;
  l[32] += 7;
  l[-10]--;
  l[73]++;
  cout << "-10 stored : " << l[-10] << '\n';
  cout << "73 stored : " << l[73] << '\n';
  cout << "32 stored : " << l[32] << '\n';
  return 0;
}