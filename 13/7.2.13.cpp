#include <iostream> 

struct Logic { 
  bool *v;
  unsigned l;
  Logic(unsigned l) : l(l), v(new bool[l]){}
  Logic(unsigned l, bool v[]) : l(l), v(v){}
}; 

Logic operator&& (Logic &a, Logic &b){
  Logic c(a.l);
  unsigned l = a.l < b.l ? a.l : b.l;
  for (int i = 0; i < l; ++i){
    c.v[i] = a.v[i] && b.v[i];
  }
  return c;
}

Logic operator|| (Logic &a, Logic &b){
  Logic c(a.l);
  unsigned l = a.l < b.l ? a.l : b.l;
  for (int i = 0; i < l; ++i){
    c.v[i] = a.v[i] || b.v[i];
  }
  return c;
}

Logic operator! (Logic &a){
  Logic c(a.l);
  for (int i = 0; i < a.l; ++i){
    c.v[i] = !a.v[i];
  }
  return c;
}


int main(int argc, char **argv){ 
  Logic l1 = Logic(5, (bool[]){true, true, true, false, false}), 
    l2 = Logic(6, (bool[]){false, true, false, false, true, false}),
    l3 = l1 && l2,
    l4 = l1 || l2,
    l5 = !l1;
  std::cout << "l1 = ";
  for (int i = 0; i < l1.l; ++i){
    std::cout << l1.v[i] << ',';
  }
  std::cout << '\n';
  std::cout << "l2 = ";
  for (int i = 0; i < l2.l; ++i){
    std::cout << l2.v[i] << ',';
  }
  std::cout << '\n';
  std::cout << "l1 && l2 = ";
  for (int i = 0; i < l3.l; ++i){
    std::cout << l3.v[i] << ',';
  }
  std::cout << '\n';
  std::cout << "l1 || l2 = ";
  for (int i = 0; i < l4.l; ++i){
    std::cout << l4.v[i] << ',';
  }
  std::cout << '\n';
  std::cout << "!l1 = ";
  for (int i = 0; i < l5.l; ++i){
    std::cout << l5.v[i] << ',';
  }
  std::cout << '\n';
  return 0;
} 

