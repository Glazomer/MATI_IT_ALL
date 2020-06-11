#include <iostream>

using namespace std;


int main()
{
  unsigned num, zero;
  cin >> num;
  if (99 < num && num < 1000){
    zero = (int)(num % 10 == 0) + (int)(num / 10 % 10 == 0);

    num = (int)(num % 10 != (num / 10) % 10) + 
    (int)((num / 10) % 10 != (num / 100) % 10) + 
    (int)(num % 10 != (num / 100) % 10);
    // num ==     0, 2, 3
    // zero == 0  1  3  6
    // zero == 1   x  2  5 
    // zero == 2   x  1  x
    cout << (2*(num == 3) + num + 1 - zero) << '\n';
  }else{
    std::cout << "Enter number from 100 to 999!!!\n";
  }
  return 0;
}