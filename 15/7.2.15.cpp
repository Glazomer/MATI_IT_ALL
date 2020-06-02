#include <iostream>
using namespace std;

struct Vector3D{
  double x;
  double y;
  double z;
};

Vector3D operator*=(Vector3D &A, const double &number){
  A.x *= number;
  A.y *= number;
  A.z *= number;
  return A;
}
Vector3D operator/=(Vector3D &A, const double &number){
  A.x /= number;
  A.y /= number;
  A.z /= number;
  return A;
}


int main(){
  Vector3D A = {1,2,3};
  A *= 3;
  cout << A.x << ", " << A.y << ", " << A.z  << endl;
  A /= 2;
  cout << A.x << ", " << A.y << ", " << A.z  << endl;
  return 0;
}