#include <iostream>

int main(int argc, char *argv[]) {
  int sum = 0, i = 0, n;
  std::cin >> n;
  int  *nums = new int[n];

  while (i < n){
    std::cin >> nums[i];
    if (nums[i] % 12 == 0){
      sum += nums[i];
    }
    i++;
  }

  std::cout << "sum: " << sum << std::endl;
  delete[] nums;
  return 0;
}