#include <iostream>

struct Vector{
  int x;
  int y;
  int z;
};

Vector operator+(const Vector &A, const Vector &B){
  Vector C;
  C.x = A.x + B.x;
  C.y = A.y + B.y;
  C.z = A.z + B.z;
  return C;
}
Vector operator-(const Vector &A, const Vector &B){
  Vector C;
  C.x = A.x - B.x;
  C.y = A.y - B.y;
  C.z = A.z - B.z;
  return C;
}


int main(){
  Vector A = {1,2,3};
  Vector B = {7,1,4};
  Vector C = A + B;

  printf("x %i\ny %i\nz %i\n" ,C.x, C.y, C.z);
  system("pause");
  return 0;
}