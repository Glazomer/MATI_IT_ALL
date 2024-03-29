// Библиотека - заранее написанный код
#include <iostream> // Библиотека для ввода и вывода информации
#include <deque> 

using namespace std; // Используем стандартные функции из библиотек. Чтобы не писать std:: каждый раз

// Класс Massiv для хранения чисел
class Massiv{
  // private - приватное поле, можно использовать внутри самого объекта, снаружи не видно
  private:
  // deque – “очередь” с возможностью вставки и удаления элемента из конца и начала
  deque<int> data; // внутри <> написано что мы храним. В нашем случае целые числа (int)

  // public - публичное поле, можно изменять и использовать снаружи класса
  public:
  // Ниже создаем методы, а внутри пользуемся функциями объекта deque
  void push_back(int n){ data.push_back(n); };
  // void в этом случае обозначает что метод ничего не возвращает
  void push_front(int n){ data.push_front(n); };

  void pop_back(){ data.pop_back(); };
  void pop_front(){ data.pop_front(); };

  // Это оператор, т.е. когда мы пишем massiv[], то вызывается этот метод
  int operator[] (unsigned i){ return data[i]; };
  //  здесь метод возвращает unsigned, т.е. натуральное число, т.е. целое >0
  unsigned size(){ return data.size(); };
  void resize(unsigned n){ return data.resize(n); };

  void erase(unsigned i){ 
    // Удаляем только число, которое не больше всего нашего контейнера
    if (i < data.size()) {
      data.erase(data.begin() + i); 
    }
  };
  void insert(unsigned i, int n){ 
    // Удаляем только так, чтобы место вставки было не больше всего нашего контейнера
    if (i <= data.size()) {
      data.insert(data.begin() + i, n); 
    }
  }

  void clear(){ data.clear(); };
};

// & - знак амперсанта, это передача объекта по ссылке
void print(Massiv &m) {
  // Здемь мы просто идем по нашему массиву и выводим числа
  for (int i = 0; i < m.size(); ++i) {
  // << - оператор потокового выводо, т.е. просто выводим все, что справа от него
    cout << m[i] << ", ";
  }
  cout << endl;
}

int main(int argc, char **argv) { 
  Massiv m; // Создали массив m
  m.push_back(1); // Добавили элемент сзади
  m.push_front(2); // Потом спереди
  m.insert(1, 3); // Потом по середине (индекс 1)
  print(m); // Вывели содержимое масива

  m.insert(2, 4); // Вставили число 4 на место с индеком 4
  m.push_front(5); // Вставили в конец число 5
  m.erase(3); // Убрали число с индексом 3
  cout << m.size() << endl; // Вывели размер нашего массива
  cout << m[1] << endl; // Вывели элемент массива с индексом 1
  print(m); // Вывели содержимое массива

  m.resize(2); // Изменили размер массива до 2ух элементов
  print(m); // Вывели содержимое массива

  m.clear(); // Удалили все элементы в Массиве
  print(m); // Вывели содержимое массива

  return 0; 
} 