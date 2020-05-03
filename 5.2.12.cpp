#include <iostream>

int main(int argc, char *argv[]) {
  int n;
  std::cin >> n;
  int  *nums = new int[n];
  for (int i = 0; i < n; i++)
  {
    std::cin >> nums[i];
  }
  int sum = 0;
  for (int i = 0; i < n; i ++)
  {
    if (nums[i] % 12 == 0)
    {
      sum += nums[i];
    }
  }

  std::cout << "sum: " << sum << std::endl;

  return 0;
}