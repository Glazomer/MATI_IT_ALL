#include <iostream>
#include <cmath> 
#include <utility> 

#define endl '\n'

using namespace std;

pair<double,double>* SquareAndRoot (double num){
  pair<double,double> *result =new pair<double,double>;
  result->first = num * num;
  result->second = sqrt(num);
  return result;
}
 
int main(int argc, char **argv){
  ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

  double num;
  cin >> num;

  auto *result = SquareAndRoot(num);
  printf("%g^2 == %g\n%g^(1/2) == %g\n", num, result->first, num, result->second);
  return 0;
}