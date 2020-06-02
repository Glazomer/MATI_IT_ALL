#include <iostream>
#include <cmath>

float* Log(int n){
  float *logs = new float[2];
  logs[0] = log10(n);
  logs[1] = log(n);
  return logs;
}

int main(int argc, char* argv[]){
  float *result = Log(100);
  std::cout << result[0] << ", " << result[1] << std::endl;
  delete[] result;
  return 0;
}