#include <iostream>

void randM(int **m, int height, int width, int left, int right) {
  for (int i = 0, area = height * width; i < area; ++i){
    m[i / width][i % width] = (rand() + left) % (right + 1);
  }
}

int main(int argc, char **argv) {
  srand(3134754883);
  int height, width;
  std::cin >> height >> width;
  int **m = new int* [height];
  for (int i = 0; i < height; ++i) {
    m[i] = new int [width];
  }
  randM((int **)m, height, width, 67, 102);

  for (int i = 0, area = height * width; i < area; ++i){
    std::cout << m[i / width][i % width] << ", ";
    if (i % width == width - 1) std::cout << std::endl;
  }
  return 0;
}