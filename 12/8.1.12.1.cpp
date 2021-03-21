#include <iostream>

class Arr {
  int arr[10];
  public:
  void random() {
    for (int i = 0; i < 10; ++i) {
      arr[i] = rand() % 100;
    }
  }

  int *ptr() {
    return arr;
  }
};

int main(int argc, char *argv[]) {
  Arr a;
  a.random();
  std::cout << a.ptr()[0] << std::endl;
  return 0;
}