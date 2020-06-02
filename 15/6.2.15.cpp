#include <iostream>
using namespace std;

struct coord{
  double x;
  double y;
};

coord Koord(coord c1, coord c2){
  coord c3 =  {(c1.x + c2.x)/2, (c1.y + c2.y)/2};
  return c3;
}

int main() {
  coord c1 = {1, 5}, c2 = {5,-7}, c3;
  c3 = Koord(c1, c2);
  printf("x: %f; y: %f\n", c3.x, c3.y);
	return 0;
}