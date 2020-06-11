#include <iostream>
#include <queue> 
#include <vector> 
#include <initializer_list> 

class FIFO {
  std::queue<int> queue; 
  public:
  void push (int v){
    queue.push(v); 
  };
  void push (std::initializer_list<int> v){
    for (int n : v)
      queue.push(n); 
  };

  int pop (){
    int result = queue.front();
    queue.pop();
    return result;
  }
  std::vector<int> pop (unsigned n){
    std::vector<int> result(n);
    for(unsigned i = 0; i < n; ++i){
      result[i] = queue.front();
      queue.pop();
    }
    return result;
  };

  void clear(){
    std::queue<int> empty;
    std::swap(queue, empty);
  };
};

int main () {
  FIFO f;
  f.push(4);
  f.push({1, 2, 3});
  std::vector<int> v = f.pop(2);
  for (int n : v)
    std::cout << n << ", ";
  std::cout << f.pop() << ", ";
  f.clear();
  f.push({9, 7, 5});
  v = f.pop(3);
  for (int n : v)
    std::cout << n << ", ";
  return 0;
}