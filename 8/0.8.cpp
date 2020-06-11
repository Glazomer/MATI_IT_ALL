#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector

using namespace std;

struct dot{
  double x;
  double y;
  double z;
};

bool xAsc (dot d1,dot d2) { return (d1.x > d2.x); };
bool xDes (dot d1,dot d2) { return (d1.x < d2.x); };
bool yAsc (dot d1,dot d2) { return (d1.y > d2.y); };
bool yDes (dot d1,dot d2) { return (d1.y < d2.y); };
bool zAsc (dot d1,dot d2) { return (d1.z > d2.z); };
bool zDes (dot d1,dot d2) { return (d1.z < d2.z); };



class dots{
  private:
  vector<dot> d;

  public:
  void push(dot t){ d.push_back(t); };
  dot& operator[] (unsigned i){ return d[i]; };

  unsigned size(){ return d.size(); };

  void del(unsigned i){ if (i < d.size()) d.erase(d.begin() + i); };

  void clear(){ d.clear(); };

  void sortAscX(){ sort(d.begin(), d.end(), xAsc); };
  void sortAscY(){ sort(d.begin(), d.end(), yAsc); };
  void sortAscZ(){ sort(d.begin(), d.end(), zAsc); };
  void sortDesX(){ sort(d.begin(), d.end(), xDes); };
  void sortDesY(){ sort(d.begin(), d.end(), yDes); };
  void sortDesZ(){ sort(d.begin(), d.end(), zDes); };

  void printDots(){ for (int i = 0; i < size(); i++) printf("%sx: %g, y:%g, z:%g\n", i == 0 ? "\n" : "", d[i].x, d[i].y, d[i].z); };
};

int main(int argc, char** argv) { 
  dots d;
  d.push({1, 5, 0.9});
  d.push({-7, 4.5, 12});
  d.push({3.1, 6, 13});
  d.printDots();

  d.sortAscX();
  d.printDots();

  d.del(1);
  d.push({10, 10, 54});
  d.sortAscZ();
  d.printDots();

  d.clear();
  d.sortAscX();
  d.printDots();

  return 0; 
} 