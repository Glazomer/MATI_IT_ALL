#include <iostream>

int main(int argc, char *argv[]) {

  int k, hours, minutes;
  std::cin >> k;
  minutes = k / 60;
  hours = minutes / 60; 

  std::cout << "hours: " << hours << ", minutes: " << minutes << std::endl;
  return 0;
}