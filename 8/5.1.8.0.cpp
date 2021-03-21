#include <iostream>
#include <string>

int main(int argc, char **argv) {
  int count = 0;
  std::string str;
  while (std::cin >> str) {
    count += str.find("st") != std::string::npos || str.find("ts") != std::string::npos;
  }
  std::cout << count << std::endl;
  return 0;
}