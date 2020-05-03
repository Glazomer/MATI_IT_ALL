#include <iostream>
#include <string>
#include <sstream>

#define endl '\n'

using namespace std;

int main(int argc, char **argv) {
	ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  int map[256] = {0};
  map['a'] = 1;
  map['e'] = 1;
  map['i'] = 1;
  map['o'] = 1;
  map['u'] = 1;

  int counter= 0;
  string temp;

  getline(cin, temp);
  istringstream stream(temp);
  
  while (stream >> temp){ counter += map[temp[0]]; }

  cout << counter << endl;
  return 0;
}