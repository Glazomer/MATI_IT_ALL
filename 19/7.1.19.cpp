#include <iostream>

struct Vedomost
{
  char *dist;
  char *group;
  unsigned int quantity; 
  char **names;
  unsigned *marks;
};

// Функция для создания 
void CreateVedomost(Vedomost& v, unsigned int size, char* dist, char* group)
{
  v.dist = dist;
  v.group = group;
  v.quantity = size; // Запоминаем размер
  v.names = new char*[size]; // Выделяем память
  v.marks = new unsigned[size]; // Выделяем память
}

// Функция для удаления
void DeleteVedomost(Vedomost& v)
{
  delete[] v.names;
  delete[] v.marks;
}

// Функция для вывода элементов массива на экран
void Vivod(const Vedomost& v)
{
  for(unsigned int i = 0; i < v.quantity; i++)
  {
    if (v.marks[i] > 3)
    {
      std::cout << v.names[i] << "\t";
    }
  }
  std::cout<<"\n\n";
}

// Функция для заполнения 
void Zapoln(Vedomost& v, int i, char* name, unsigned mark)
{
  v.names[i] = name;
  v.marks[i] = mark;
}

int main()
{
  int i = 0;
  Vedomost v;
  CreateVedomost(v, 5, "Informatics", "T12O-100C-19");
  Zapoln(v, i++, "Kikirov A.I", 5);
  Zapoln(v, i++, "Kalinina D.V", 2);
  Zapoln(v, i++, "Nebelov K.N", 3);
  Zapoln(v, i++, "Ratitov V.I", 4);
  Zapoln(v, i++, "Ivanov E.A", 5);
  Vivod(v);
  DeleteVedomost(v);
  return 0;
}