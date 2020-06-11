#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{ 
  string word;
  getline(cin, word);
  stringstream ss(word);

  unsigned r = 0;
  while (ss >> word)
    r += word.back() == 'E' || word.back() == 'e';

  cout << r << '\n';
  return 0;
}