#include <iostream>

unsigned* most(unsigned *arr, unsigned size)
{
  unsigned max = 0, i = 0, *result = new unsigned[2];
  while (i < size)
  {
    if (arr[i] > max)
      max = arr[i];
    ++i;
  }

  unsigned *count = new unsigned[max + 1]();
  i = 0, max = 0;
  while (i < size)
  {
    if (++count[arr[i]] > max)
    {
      max = count[arr[i]];
      result[0] = arr[i];
      result[1] = max;
    }
    ++i;
  }

  delete[] count;
  return result;
}

int main(){
  unsigned *result, arr[] = {1, 2, 5, 7, 4, 5, 2, 11, 2, 16, 1, 1, 1,5, 2, 7, 2};
  result = most(arr, sizeof(arr)/4);
  for (int i = 0; i < sizeof(arr) / 4; ++i)
    std::cout << arr[i] << ' ';

  printf("\nMost %u (%u times)\n", result[0], result[1]);
  delete[] result;
  return 0;
}