#include <iostream>

int main(int argc, char** argv) {
  int n, sum = 0;
  std::cin >> n;
  int  *nums = new int[n];

  for (int i = 0; i < n; ++i){
    std::cin >> nums[i];
    if (nums[i] % 10== 7)
      sum += nums[i];
  }

  std::cout << sum << '\n';

  delete[] nums;
  return 0;
}