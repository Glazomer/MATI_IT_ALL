#include <iostream> 
#include <vector> 

class Array {
  std::vector<int> v;
  
  public:
  void push(int val){
    v.push_back(val);
  };

  std::vector<int>& content() {
    return v;
  };

  int operator+ () {
    int r = 0;
    for (int i = 0; i < v.size(); ++i) {
      r += v[i];
    }
    return r;
  }
};


int main(int argc, char** argv) { 
  Array a;
  a.push(887);
  a.push(-94);
  a.push(7);
  std::cout << a.content()[1] << std::endl;
  std::cout << +a << std::endl;
  return 0; 
} 