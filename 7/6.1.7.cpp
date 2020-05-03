#include <iostream>

#define endl '\n'

using namespace std;

// https://ru.wikibooks.org/wiki/%D0%A0%D0%B5%D0%B0%D0%BB%D0%B8%D0%B7%D0%B0%D1%86%D0%B8%D0%B8_%D0%B0%D0%BB%D0%B3%D0%BE%D1%80%D0%B8%D1%82%D0%BC%D0%BE%D0%B2/%D0%90%D0%BB%D0%B3%D0%BE%D1%80%D0%B8%D1%82%D0%BC_%D0%95%D0%B2%D0%BA%D0%BB%D0%B8%D0%B4%D0%B0
unsigned long EuclidianAlgorithm (unsigned long a, unsigned long b){
  while (b){
    b ^= a %= b;
		b ^= a ^= b;
  }
  return a;
}
 
int main(int argc, char **argv){
  ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
  unsigned long a, b;
  cin >> a >> b;
  cout << EuclidianAlgorithm(a, b) << endl;
  return 0;
}