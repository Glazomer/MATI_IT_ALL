#include <iostream>
#include <algorithm>

using namespace std;

const int topCount = 4;

class Rect{
  public:
  struct сoord;

  private:
  сoord* tops;
  
  public:
  struct сoord{
    double x;
    double y;
    void operator+= (сoord move){
      x += move.x;
      y += move.y;
    }
  };
  void move (double x, double y){
    for (int i = 0; i < 4; ++i){
      tops[i] += {x, y};
    }
  };
  const сoord* getTops (){
    return tops;
  };
  Rect intersection (const Rect& r){
    Rect newRect;
    double right = min(tops[0].x, r.tops[0].x),
      bottom = max(tops[2].y, r.tops[2].y),
      left = max(tops[2].x, r.tops[2].x),
      top = min(tops[0].y, r.tops[0].y);

    double a = right - left,
      b = top - bottom;

    if (a < 0 || b < 0)
        return newRect;
    newRect = Rect(a, b);
    newRect.move(left + a/2, bottom + b/2);
    return newRect;
  };
  void printCoord (){
    printf("(%g, %g)(%g, %g)\n(%g, %g)(%g, %g)\n\n", 
      tops[3].x, tops[3].y, tops[0].x, tops[0].y, 
      tops[2].x, tops[2].y, tops[1].x, tops[1].y
    );
  };
  Rect& operator= (const Rect& copy) {
    for (int i = 0; i < topCount; i++){
      tops[i] = copy.tops[i];
    }
    return *this;
  }
  Rect () : tops(new сoord[topCount]()){};
  Rect (const Rect& copy) : tops(new сoord[topCount]()){
    for (int i = 0; i < topCount; i++)tops[i] = copy.tops[i];
  };
  Rect (double a, double b) : tops(new сoord[topCount]()){
    tops[0] = {a/2, b/2};
    tops[1] = {a/2, -b/2};
    tops[2] = {-a/2, -b/2};
    tops[3] = {-a/2, b/2};
  };
  ~Rect (){delete[] tops;};
};

int main(){
  Rect r1(10, 5), r2(4, 6);
  r1.printCoord();
  r2.printCoord();
  r1.move(5, 2.5);
  r1.printCoord();
  Rect r3(r2), r4;
  r3.move(1, 1);
  r2.printCoord();
  r3.printCoord();
  r4 = r3.intersection(r2);
  r4.printCoord();
  return 0;
}