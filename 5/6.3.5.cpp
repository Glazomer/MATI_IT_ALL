#include <iostream>
#include <vector>

using namespace std;

vector<unsigned> most(vector<int> test){
  unsigned count[10] = {0}, most = 0;
  for (int i = 0; i < test.size(); ++i) {
    for (int n = test[i]; n; n /= 10) {
      ++count[n % 10];
      if (count[n % 10] > count[most]) {
        most = n % 10;
      }
    }
  }
  unsigned arr[] = {most, count[most]};
  return vector<unsigned>(arr, arr + sizeof(arr) / sizeof(arr[0]));
}

int main() {
  int arr[] = {1, 2, 5, 7, 4, 5, 2, 11, 2, 16, 1, 1, 1,5, 2, 7, 2};
  vector<int> test(arr, arr + sizeof(arr) / sizeof(arr[0]));
  vector<unsigned> result = most(test);
  for (int i = 0; i < test.size(); ++i) {
    std::cout << test[i] << ", ";
  }

  printf("\nMost %u (%u times)\n", result[0], result[1]);
  return 0;
}