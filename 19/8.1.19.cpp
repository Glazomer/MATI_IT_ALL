#include <iostream>

class Polynom
{
  unsigned int quantity; 
  int *coef;
  public:
   // Конструтор
  Polynom(unsigned int size)
  {
    quantity = size; // Запоминаем размер
    coef = new int[quantity]; // Выделяем память
  }
  // Конструтор копирования
  Polynom(Polynom& m)
  {
    quantity = m.quantity;
    coef = new int[quantity];
    for(unsigned int i = 0; i < quantity; i++)
    {
      coef[i] = m.coef[i];
    }
  }
  // Деструктор
  ~Polynom()
  {
    delete[] coef;
  }

  bool operator== (const Polynom& p2)
  {
    if (quantity != p2.quantity)
    {
      return false;
    }
    for (int i = 0; i < quantity; i++)
    {
      if (coef[i] != p2.coef[i])
      {
        return false;
      }
    }
    return true;
  }
  bool operator!= (const Polynom& p2)
  {
    return !(*this == p2);
  }
  // Функция для заполнения 
  void Zapoln(int i, int z)
  {
    coef[i] = z;
  } 
  int Poluch(int i)
  {
    return coef[i];
  }
};


int main()
{
  int i = 0;
  Polynom p1(3), p2(3), p3(3), p4(2);

  p1.Zapoln(i, 7);
  p2.Zapoln(i, 3);
  p3.Zapoln(i, 7);
  p4.Zapoln(i++, 7);
  p1.Zapoln(i, 1);
  p2.Zapoln(i, 93);
  p3.Zapoln(i, 1);
  p4.Zapoln(i++, 1);
  p1.Zapoln(i, 36);
  p2.Zapoln(i, 70);
  p3.Zapoln(i, 36);

  std::cout << "p1 == p2: " << (p1 == p2) << '\n';
  std::cout << "p1 == p3: " << (p1 == p3) << '\n';
  std::cout << "p1 == p4: " << (p1 == p4) << '\n';

  std::cout << "p1 != p2: " << (p1 != p2) << '\n';
  std::cout << "p1 != p3: " << (p1 != p3) << '\n';
  std::cout << "p1 != p4: " << (p1 != p4) << '\n';

  std::cout << "p1[1] == 1: " << p1.Poluch(1) << '\n';
  std::cout << "p2[1] == 93: " << p2.Poluch(1) << '\n';
  std::cout << "p3[1] == 1: " << p3.Poluch(1) << '\n';
  std::cout << "p4[0] == 7: " << p4.Poluch(0) << '\n';

  return 0;
}