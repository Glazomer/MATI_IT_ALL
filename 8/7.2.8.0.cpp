#include <iostream> 
#include <vector> 

struct Array{
  std::vector<int> v;
};

double operator+ (Array &a){
  int result = 0;
  for (int i = 0; i < a.v.size(); ++i) {
    result += a.v[i];
  }
  return result;
}

int main(int argc, char** argv) { 
  Array a;
  a.v.push_back(6);
  a.v.push_back(98);
  a.v.push_back(46);
  std::cout << +a << std::endl;
  return 0; 
} 