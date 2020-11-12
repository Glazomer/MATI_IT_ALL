#include <iostream> 

struct Logic { 
  unsigned l;
  bool *v;
  Logic(unsigned l) : l(l), v(new bool[l]){}
  Logic(unsigned l, bool v[]) : l(l), v(v){}
}; 

Logic operator&& (Logic &a, Logic &b){
  Logic c(a.l);
  unsigned l = a.l < b.l ? a.l : b.l;
  for (unsigned i = 0; i < l; ++i){
    c.v[i] = a.v[i] && b.v[i];
  }
  return c;
}

Logic operator|| (Logic &a, Logic &b){
  Logic c(a.l);
  unsigned l = a.l < b.l ? a.l : b.l;
  for (unsigned i = 0; i < l; ++i){
    c.v[i] = a.v[i] || b.v[i];
  }
  return c;
}

Logic operator! (Logic &a){
  Logic c(a.l);
  for (unsigned i = 0; i < a.l; ++i){
    c.v[i] = !a.v[i];
  }
  return c;
}


int main(int argc, char **argv){ 
  bool v1[] = {true, true, true, false, false},
    v2[] = {true, true, true, false, false};
  Logic l1 = Logic(5, v1), 
    l2 = Logic(6, v2),
    l3 = l1 && l2,
    l4 = l1 || l2,
    l5 = !l1;
  std::cout << "l1 = ";
  for (unsigned i = 0, l = l1.l; i < l; ++i){
    std::cout << l1.v[i] << ',';
  }
  std::cout << '\n';
  std::cout << "l2 = ";
  for (unsigned i = 0, l = l2.l; i < l; ++i){
    std::cout << l2.v[i] << ',';
  }
  std::cout << '\n';
  std::cout << "l1 && l2 = ";
  for (unsigned i = 0, l = l3.l; i < l; ++i){
    std::cout << l3.v[i] << ',';
  }
  std::cout << '\n';
  std::cout << "l1 || l2 = ";
  for (unsigned i = 0, l = l4.l; i < l; ++i){
    std::cout << l4.v[i] << ',';
  }
  std::cout << '\n';
  std::cout << "!l1 = ";
  for (unsigned i = 0, l = l5.l; i < l; ++i){
    std::cout << l5.v[i] << ',';
  }
  std::cout << '\n';
  return 0;
} 

