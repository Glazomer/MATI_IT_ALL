#include <iostream>
using namespace std;

int main() {
  int x,y,z, divided = 0;
  cin >> x >> y >> z;
  
  try{
    if (x == 0 || y == 0 || z == 0){
      throw 1;
    }
    if (x % y == 0 || y % x == 0)
      divided++;
    if (y % z == 0 || z % y == 0)
      divided++;
    if (z % x == 0 || x % z == 0)
      divided++;
  }catch(int error){
    cout <<"nelza proverit delenie na 0";
    return 0;
  }
  
  if (divided > 1){
    cout <<"Yes";
  }else{
    cout <<"No";
  }
	return 0;
}