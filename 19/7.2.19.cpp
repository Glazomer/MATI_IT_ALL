#include <iostream>

struct Polynom
{
  unsigned int quantity; 
  int *coef;
};

// Функция для создания 
void CreatePolynom(Polynom& p, unsigned int size)
{
  p.quantity = size; // Запоминаем размер
  p.coef = new int[size]; // Выделяем память
}

// Функция для удаления
void DeletePolynom(Polynom& p)
{
  delete[] p.coef;
}

// Функция для заполнения 
void Zapoln(Polynom& p, int i, int z)
{
  if (i < p.quantity)
    p.coef[i] = z;
  else
    p.coef[p.quantity - 1] = z;
}

bool operator== (const Polynom& p1, const Polynom& p2)
{
  if (p1.quantity != p2.quantity)
  {
    return false;
  }
  for (int i = 0; i < p1.quantity; i++)
  {
    if (p1.coef[i] != p2.coef[i])
    {
      return false;
    }
  }
  return true;
}
bool operator!= (const Polynom& p1, const Polynom& p2)
{
  return !(p1 == p2);
}

int main()
{
  int i = 0;
  Polynom p1, p2, p3, p4;
  CreatePolynom(p1, 3);
  CreatePolynom(p2, 3);
  CreatePolynom(p3, 3);
  CreatePolynom(p4, 2);

  Zapoln(p1, i, 7);
  Zapoln(p2, i, 3);
  Zapoln(p3, i, 7);
  Zapoln(p4, i++, 7);
  Zapoln(p1, i, 1);
  Zapoln(p2, i, 93);
  Zapoln(p3, i, 1);
  Zapoln(p4, i++, 1);
  Zapoln(p1, i, 36);
  Zapoln(p2, i, 70);
  Zapoln(p3, i, 36);

  std::cout << "p1 == p2: " << (p1 == p2) << '\n';
  std::cout << "p1 == p3: " << (p1 == p3) << '\n';
  std::cout << "p1 == p4: " << (p1 == p4) << '\n';

  std::cout << "p1 != p2: " << (p1 != p2) << '\n';
  std::cout << "p1 != p3: " << (p1 != p3) << '\n';
  std::cout << "p1 != p4: " << (p1 != p4) << '\n';

  DeletePolynom(p1);
  DeletePolynom(p2);
  DeletePolynom(p3);
  DeletePolynom(p4);
  return 0;
}