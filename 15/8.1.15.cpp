#include <iostream>
using namespace std;

class Vector3D{
  double x; double y; double z;
public:
  Vector3D(double x, double y, double z): x(x), y(y), z(z){}
  // для задания его значения нужно вызвать метод:
  void setx(double val){x = val;}
  void sety(double val){y = val;}
  void setz(double val){z = val;}
  // для получения его значения нужно вызвать метод:
  double getx(){return x;}
  double gety(){return y;}
  double getz(){return z;}
  Vector3D operator*= (const double &number){
    this->x *= number;
    this->y *= number;
    this->z *= number;
    return *this;
  }
  Vector3D operator/= (const double &number){
    this->x /= number;
    this->y /= number;
    this->z /= number;
    return *this;
  }
};

int main(){
  Vector3D A(1,2,3);
  cout << A.getx() << endl;
  A.setx(7);
  cout << A.getx() << endl;
  A *= 3;
  cout << A.getx() << ", " << A.gety() << ", " << A.getz()  << endl;
  A /= 2;
  cout << A.getx() << ", " << A.gety() << ", " << A.getz()  << endl;
  return 0;
}