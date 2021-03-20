// Библиотека - заранее написанный код
#include <iostream> // Библиотека для ввода и вывода информации
#include <cmath> // Библиотека для математических операций
using namespace std; // Используем стандартные функции из библиотек. Чтобы не писать std:: каждый раз
// Число Фи, т.е. золотое сечение, используется для формулы ниже
const double PHI = (1 + sqrt(5)) / 2;
//https://ru.wikipedia.org/wiki/Числа_Фибоначчи#Формула_Бине
// Объект, который хранит число фиьоначи
class Fib {
    unsigned n; // unsigned - целое положительное число
    public: // public - пуюличное поле, можно изменять и использовать снаружи класса
    // private - приватное поле, можно использовать внутри самого объекта, снаруди не видно
    // Возвращаем какое по счету наше Число фибоначи
    unsigned num() {
        return n;
    };
    // Фомула нахождения Nого числа фибоначи
    // double - число с плавующей запятой
    double fib () {
        // pow - возводит число в указанную степень
        return (pow(PHI, n) - (1 / pow(-PHI, n))) / (2 * PHI - 1);
    };
    // Если метод начинается с operator, то мы переопределяем оператор (можем сделать так, чтобы сложение вело у нас по другому, например, умножало числа)
    // Переопределяем оператор инкремента (увелечения на один)
    Fib& operator++ () {
        ++n;
        // this - указатель на текущий объект
        // * - возвращает то, что находится в указателе
        return *this;
    };
    // Переопределяем оператор декремента (уменьшения на один)
    Fib& operator-- () {
        --n;
        // this - указатель на текущий объект
        // * - возвращает то, что находится в указателе
        return *this;
    };
    // Когда Функция называется так же как и класс - это конструктор. Конструкторы нудны, чтобы сразу при создании назначать какието значения. Ниже конструкторы.
    Fib () : n(0) {};
    Fib (unsigned n) : n(n) {};
};

int main(int argc, char** argv) {
    Fib f(0);
    while (f.num() < 10) {
        ++f;
        cout << f.fib() << '\n';
    }
    return 0;
}