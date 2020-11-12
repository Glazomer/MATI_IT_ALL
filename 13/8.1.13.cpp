#include <iostream> 

class Logic { 
  private:
    bool *v;
    unsigned l;
  public:
    Logic operator&& (Logic &b){
      Logic c(l);
      unsigned len = l < b.l ? l : b.l;
      for (int i = 0; i < len; ++i){
        c.v[i] = v[i] && b.v[i];
      }
      return c;
    };
    Logic operator|| (Logic &b){
      Logic c(l);
      unsigned len = l < b.l ? l : b.l;
      for (int i = 0; i < len; ++i){
        c.v[i] = v[i] || b.v[i];
      }
      return c;
    };
    Logic operator! (){
      Logic c(l);
      for (int i = 0; i < l; ++i){
        c.v[i] = !v[i];
      }
      return c;
    };
    Logic(unsigned l) : l(l), v(new bool[l]){}
    Logic(unsigned l, bool v[]) : l(l), v(v){}
    bool* getV(){return v;}
    unsigned getL(){return l;}
}; 


int main(int argc, char **argv){ 
  Logic l1 = Logic(5, (bool[]){true, true, true, false, false}), 
    l2 = Logic(6, (bool[]){false, true, false, false, true, false}),
    l3 = l1 && l2,
    l4 = l1 || l2,
    l5 = !l1;
  std::cout << "l1 = ";
  for (int i = 0; i < l1.getL(); ++i){
    std::cout << l1.getV()[i] << ',';
  }
  std::cout << '\n';
  std::cout << "l2 = ";
  for (int i = 0; i < l2.getL(); ++i){
    std::cout << l2.getV()[i] << ',';
  }
  std::cout << '\n';
  std::cout << "l1 && l2 = ";
  for (int i = 0; i < l3.getL(); ++i){
    std::cout << l3.getV()[i] << ',';
  }
  std::cout << '\n';
  std::cout << "l1 || l2 = ";
  for (int i = 0; i < l4.getL(); ++i){
    std::cout << l4.getV()[i] << ',';
  }
  std::cout << '\n';
  std::cout << "!l1 = ";
  for (int i = 0; i < l5.getL(); ++i){
    std::cout << l5.getV()[i] << ',';
  }
  std::cout << '\n';
  l1.getV()[2] = false;
  std::cout << "l1 = ";
  for (int i = 0; i < l1.getL(); ++i){
    std::cout << l1.getV()[i] << ',';
  }
  std::cout << '\n';
  return 0;
} 

