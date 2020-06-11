#include <iostream>
#include <cmath>

using namespace std;

double Dist(double xDiff, double yDiff)
{
  return pow(pow(xDiff, 2) + pow(yDiff, 2), 0.5);
}

int main()
{ 
  double x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  cout << Dist(x2 - x1, y2- y1);
  return 0;
}