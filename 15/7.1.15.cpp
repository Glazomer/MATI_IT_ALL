#include <iostream>

using namespace std;

struct Student {
  const char* FIO;
  int vozrast;
  const char* gruppa;
  int course;
};

int Course (Student** arr, int size, int course){
  for (int i = 0; i < size; i++)
  {
    if (arr[i]->course == course)
      cout << arr[i]->gruppa << endl;
  }
  return 0;
}
int Gruppa (Student** arr, int size, const char* gruppa){
  for (int i = 0; i < size; i++)
  {
    if (arr[i]->gruppa == gruppa)
      cout << arr[i]->FIO << endl;
  }
  return 0;
}


int main(){

  Student* arr[2] = {new Student(), new Student()};  
  arr[0]->FIO = "Smirnov Ivan Aleksandrovich";
  arr[0]->vozrast = 19;
  arr[0]->gruppa = "T12O-102C-19";
  arr[0]->course = 1;

  arr[1]->FIO = "Ivleev Nikolaj Andreevich";
  arr[1]->vozrast = 20;
  arr[1]->gruppa = "T12O-202C-18";
  arr[1]->course = 2;

  Course(arr, sizeof(arr)/sizeof(arr[0]), 1);
  Gruppa(arr, sizeof(arr)/sizeof(arr[0]), "T12O-202C-18");

  return 0;
}