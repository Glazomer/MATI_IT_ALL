#include <iostream>
#include <cmath>
using namespace std;

int main() {
  for (float i = -10; i <= 0; i += 0.1) {
    cout <<  (pow(i + 2, 2) / (i + 5) - 0.5) << endl;
  }
  return 0;
}
