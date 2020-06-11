#include <iostream>
#include <initializer_list> // Чтобы вставлять несколько чисел за раз конструкцие {}
#include <vector> // Для хранения чисел

using namespace std;

class List {
  private: // private - чтобы не иметь доступ все объекта (для безопасности)
    vector<double> store; // vector – используется для хранения чисел
    // <> – здесь указывается тип того, что мы храним
    // double – вещественное число (число с плавующей запятой)
    // store – название переменной (могли назвать как угодно)
  public: // public – можно пользоваться вне объекта
    // void – значит функция ничего не возвращает
    // initializer_list объект передать неколько значений через {}
    // unsigned – натуральное число
    void insert (unsigned i, initializer_list<double> v){
      // Вставляем в позицию начало + i, список чисел v
      // insert – функция вставить число
      // store.begin() – начало вектор, следовательно store.begin() + i это iтое место
      // v – список добавляеммых значений (initializer_list)
      // insert принимает место куда вставить и значение которое вставить (или список занчений)
      store.insert(store.begin() + i, v); // store – вектор в котором мы храним числа
    };
    // void – значит функция ничего не возвращает
    // unsigned – натуральное число
    void erase (unsigned i, unsigned amount){ // amount – количество стираеммых чисел
      // Удаляем в числа с позиции начело + i, до позиции начело + i + amount
      // erase принимает с какого места стереть и до какого
      // store.begin() – начало вектора, следовательно store.begin() + i это iтое место,
      // erase – начиная откуда стерать значения и до куда
      store.erase(store.begin() + i, store.begin() + i + amount); 
    };
    double& operator[](unsigned i){
      // Получаем элемент на позиции i которая храниться в нашем векторе store
      // & - значит возвращаем по ссылке. Чтобы можно было менять значение внутри объекта
      return store[i];
    }
    size_t size(){ // size_t – тип размер (натуральное число)
      // Получаем размер массива
      return store.size();
    }

    // List – конструктор, для того, чтобы сразу можно было установить значения
    // Вызываем конструктор vector (size – размер вектора)
    List(unsigned size) : store(vector<double>(size)){};
};

int main () {
  List test(3);
  test.insert(2, {6, 5, 4});
  test.erase(3, 3);
  test[0] = 4;
  test[1] = 5;
  test.insert(3, {7, 8, 9});
  for (int i = 0; i < test.size(); i++){
    cout << test[i] << ", ";
  }
  return 0;
}