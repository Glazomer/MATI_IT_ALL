#include <iostream> 
#include <vector> 

using namespace std;

class Arr{
  vector<double> a;
  
  public:
  void add(double v){
    a.push_back(v);
  };
  vector<double>& content(){
    return a;
  };
  double operator+ (){
    double r = 0;
    for (int i = 0; i < a.size(); i++)
      r += a[i];

    return r;
  }
};


int main(int argc, char** argv) { 
  Arr a;
  a.add(9.5);
  a.add(-8);
  a.add(100);
  a.add(77);
  a.add(-1000);
  cout << +a << '\n';
  return 0; 
} 