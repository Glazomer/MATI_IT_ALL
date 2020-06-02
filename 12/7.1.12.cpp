#include <iostream>
#include <cstring>

struct sotrudnik
{
  const char* FIO;
  const char* dolzhnost;
  int  vozrast;
  int stazh;
};

void printDolzhnost(sotrudnik* arr[], int size, const char* dolzhnost)
{
  for (int i = 0; i < size; i++)
  {
    if(strcmp(arr[i]->dolzhnost, dolzhnost) == 0){
      std::cout << arr[i]->FIO << std::endl;
    }
  }
}

void printStazh(sotrudnik* arr[], int size, int stazh)
{
  for (int i = 0; i < size; i++)
  {
    if(arr[i]->stazh >= stazh){
      std::cout << arr[i]->FIO << std::endl;
    }
  }
}

int main(int argc, char *argv[]) {
  sotrudnik* arr[5];
  arr[0] = new sotrudnik;arr[0]->FIO = "Andrenko I.O";arr[0]->vozrast = 35;arr[0]->stazh = 10;arr[0]->dolzhnost = "Engineer";
  arr[1] = new sotrudnik;arr[1]->FIO = "Eveleeva U.L";arr[1]->vozrast = 29;arr[1]->stazh = 6;arr[1]->dolzhnost = "Manager";
  arr[2] = new sotrudnik;arr[2]->FIO = "Ponomarenko N.K";arr[2]->vozrast = 55;arr[2]->stazh = 19;arr[2]->dolzhnost = "Engineer";
  arr[3] = new sotrudnik;arr[3]->FIO = "Kovalenko I.O";arr[3]->vozrast = 19;arr[3]->stazh = 1;arr[3]->dolzhnost = "Konsultant";
  arr[4] = new sotrudnik;arr[4]->FIO = "Gerovin I.O";arr[4]->vozrast = 41;arr[4]->stazh = 3;arr[4]->dolzhnost = "Engineer";
  printDolzhnost(arr, sizeof(arr)/sizeof(arr[0]), "Engineer");
  printStazh(arr, sizeof(arr)/sizeof(arr[0]), 5);

  return 0;
}