#include <iostream>
#include <string.h>

struct Zhurnal
{
  const char* name;
  unsigned num;
  unsigned month;
  unsigned year;
};

void PrintZhurnal (Zhurnal* z)
{
  printf("Name: %s, printed: %i/%i, num: %i\n", z->name, z->month, z->year, z->num);
};

void FindByName (Zhurnal** arr, unsigned size, const char* name)
{
  for (unsigned i = 0; i < size; ++i)
    if (strcmp(arr[i]->name, name) == 0)
      PrintZhurnal(arr[i]);
}
void FindByYear (Zhurnal** arr, unsigned size, unsigned year)
{
  for (unsigned i = 0; i < size; ++i)
    if (arr[i]->year == year)
      PrintZhurnal(arr[i]);
}

int main(){
  Zhurnal* arr[] = {
    new Zhurnal{"Tema", 200, 11, 2000},
    new Zhurnal{"Tema", 201, 12, 2000},
    new Zhurnal{"Tema", 202, 1, 2001},
    new Zhurnal{"Zhizn", 33, 05, 1999},
    new Zhurnal{"Zhizn", 35, 07, 1999},
    new Zhurnal{"Zhizn", 38, 10, 1999},
    new Zhurnal{"Zhizn", 41, 01, 2000},
  };
  unsigned size= sizeof(arr)/sizeof(Zhurnal*);

  FindByName(arr, size, "Tema");
  std::cout << "——————\n";
  FindByYear(arr, size, 1999);

  for (int i = 0; i < size; ++i){
    delete[] arr[i];
  }
  return 0;
}