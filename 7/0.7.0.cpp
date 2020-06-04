#include <iostream>
#include <algorithm>

using namespace std;

class cNum{ // Complex number
  public:
    double r; // real
    double i; // imaginary
    friend ostream& operator<<(ostream& os, const cNum& c);
};

ostream& operator<<(ostream& os, const cNum& c){
  os << c.r << " + " << c.i << "i";
  return os;
};

class Complex{
  private:
    cNum *store;
    unsigned _size;
    unsigned iLast;
  public:
    cNum& operator[](unsigned i){
      iLast = max(iLast, i);
      return store[i];
    }
    unsigned size(){
      return _size;
    }
    bool remove(unsigned i){
      if (i <= iLast){
        copy(store + i + 1, store + _size, store + i);
        store[iLast--] = {0, 0};
        return true;
      }else{
        return false;
      }
    }
    void clear(){
      delete[] store;
      store = new cNum[_size]();
      iLast = 0;
    }
    void print(){
      for (int i = 0; i < _size; ++i){
        cout << store[i] << endl;
      }
    }
    Complex(unsigned size) : _size(size), iLast(0), store(new cNum[size]()){};
};

int main(int argc, char** argv){
  Complex test(5);
  test[0] = {2,2};
  test[1] = {1,5};
  test[2] = {6,7};
  test[3] = {0,1};
  test[4] = {1,0};
  test.print();
  cout << endl;
  test.remove(1);
  test.print();
  cout << endl;
  test.clear();
  test.print();
  return 0;
}