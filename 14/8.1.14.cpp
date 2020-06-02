#include <iostream>

class Vector{
  int x;
  int y;
  int z;

  public:
  Vector operator+(const Vector &B){
    return Vector(x + B.x,  y + B.y, z + B.z);
  }

  Vector operator-(const Vector &B){
    return Vector(x - B.x,  y - B.y, z - B.z);
  }

  void setvalue(char v, int val)
  {
    switch (v)
    {
    case 'x':
      x = val;
      break;
    case 'y':
      y = val;
      break;
    case 'z':
      z = val;
      break;
    default:
      break;
    }
  }

  int getvalue(char v)
  {
    int val;
    switch (v)
    {
    case 'x':
      val = x;
      break;
    case 'y':
      val = y;
      break;
    case 'z':
      val = z;
      break;
    default:
      val = 0;
      break;
    }
    return val;
  }

  Vector(int x, int y, int z) : x(x), y(y), z(z){};
};


int main(){
  Vector A = {1,2,3};
  Vector B = {7,1,4};
  Vector C = A + B;
  C.setvalue('x', -2);
  printf("x %i\ny %i\nz %i\n" ,C.getvalue('x'), C.getvalue('y'), C.getvalue('z'));
  system("pause");
  return 0;
}