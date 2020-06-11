#include <iostream>
#include <algorithm>

struct coordinate{
  double x;
  double y;
};

std::ostream& operator<< (std::ostream& os, coordinate c){
  os << "{" << c.x << ", " << c.y << "}";
  return os;
};

struct tops{
  coordinate rightTop;
  coordinate rightBot;
  coordinate leftBot;
  coordinate leftTop;
};

class rectangle{
  public:
    // Стороны прямоугольника
    double t; // top
    double r; // right
    double b; // bottom
    double l; // left

  rectangle move (double x, double y){
    t += y; r += x; b += y; l += x;
    return *this;
  };

  tops getTops(){
    return tops({{r, t}, {r, b}, {l, b}, {l, t}});
  };

  rectangle (unsigned width, unsigned height) : t(height/2.0), r(width/2.0), b(-(height/2.0)), l(-(width/2.0)){};
  rectangle ( double t, double r, double b, double l) : t(t), r(r), b(b), l(l){};
};

rectangle minContaining(rectangle r1, rectangle r2){
  return rectangle (
    std::max(r1.t, r2.t), 
    std::max(r1.r, r2.r), 
    std::min(r1.b, r2.b), 
    std::min(r1.l, r2.l)
  );
};
void printCoord(rectangle r){
  tops t = r.getTops();
  std::cout << t.leftTop << "  " << t.rightTop << "\n" << t.leftBot << "  " << t.rightBot << "\n\n";
};

int main(){
  rectangle r1(8, 16), r2(9, 2);
  printCoord(r1);
  printCoord(r2);
  r1.move(1, 1);
  r2.move(23, -17);
  printCoord(r1);
  printCoord(r2);
  r1.t += 0.5;
  printCoord(r1);
  printCoord(r2);
  printCoord(minContaining(r1, r2));
  return 0;
}