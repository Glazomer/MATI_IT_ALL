#include <iostream>

using namespace std;

class Array
{
private:
    double *data; //указатель на массив
    int capacity; //вместимость массива (количество выделенной памяти)
    int size; //реальный размер массива
    bool sortedA; // массив отсортирован по возрастанию
public:
    Array(int size = 0); //конструктор
    ~Array(); //деструктор
    
    void sortA(); //упорядочить по возрастанию
    void sortD(); //упорядочить по убыванию
    void add(double x); //добавление числа
    int find(double x); //получение индекса элемента (поиск по значению)
    int findNext(double x, int i); //получение индекса элемента (поиск после индекса i - нужно, если элемент не один)
    double& operator[](int i); //доступ по индексу
    bool del(double x); //удаление элемента/ов по значению
    int getSize() { return size; } //получение размера массива
};

Array::Array(int size) //конструктор
{
    sortedA = true;
    capacity = size; //задаем вместимость массива
    this->size = 0; //размер пока равен нулю (элементов нет)
    if (capacity > 0)
    {
        data = new double[capacity]; //выделяем память, если нужно
    }
    else
    {
        data = NULL;
    }
}

Array::~Array() //декструктор
{
    delete [] data;
}

void Array::sortA() //упорядочить по возрастанию
{
    sortedA = true;
    //сортировка пузырьком
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (data[j] > data[j+1])
            {
                double t = data[j];
                data[j] = data[j+1];
                data[j+1] = t;
            }
        }
    }
}

void Array::sortD() //упорядочить по убыванию
{
    sortedA = false;
    //сортировка пузырьком
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (data[j] < data[j+1])
            {
                double t = data[j];
                data[j] = data[j+1];
                data[j+1] = t;
            }
        }
    }
}

void Array::add(double x) //добавление числа
{
    if (size == capacity) //если достигнута максимальная вместимость, выделяем больше памяти
    {
        capacity+=10;
        double *newData = new double[capacity]; //создаем новый массив
        for (int i = 0; i < size; i++) //копируем элементы
        {
            newData[i] = data[i];
        }
        delete [] data; //удаляем старый массив
        data = newData;
    }
    data[size++] = x; //добавляем новый элемент
    if (sortedA){
        sortA();
    }else{
        sortD();
    }
}

int Array::find(double x) //получение индекса элемента (поиск по значению)
{
    for (int i = 0; i < size; i++)
    {
        if (data[i] == x)
            return i;
    }
    return -1; //если элемент не найден, возвращаем -1
}

//получение индекса элемента (поиск после индекса i - нужно, если элемент не один)
int Array::findNext(double x, int i)
{
    for (int j = i+1; j < size; j++) //проходим по массиву, начиная с позиции i+1
    {
        if (data[j] == x)
            return j;
    }
    return -1; //если элемент не найден, возвращаем -1
}

double& Array::operator[](int i) //доступ по индексу
{
    if (i < 0 || i >= size) //выход за пределы массива
    {
        cout << "Некорректный индекс!" << endl;
        i = 0;
    }
    return data[i];
}

bool Array::del(double x) //удаление элемента/ов по значению
{
    int i = find(x); //находим позицию элемента
    if (i == -1) //если не найден, возвращаем false
        return false;
    else
    {
        //если найден, удаляем его и все последующие элементы с таким значением
        while (i!=-1)
        {
            for (int j = i; j < size-1; j++)
            {
                data[j] = data[j+1];
            }
            size--;
            i = findNext(x, i);
        }
        return true;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    
    Array arr;
    int menu;
    double x;
    int i;
    
    //меню для тестирования функций
    do {
        cout << "1 - Добавить элемент" << endl;
        cout << "2 - Удалить элемент(ы)" << endl;
        cout << "3 - Поиск элемента" << endl;
        cout << "4 - Вывод массива на экран" << endl;
        cout << "5 - Упорядочить по возрастанию" << endl;
        cout << "6 - Упорядочить по убыванию" << endl;
        cout << "7 - Получить значение по индексу" << endl;
        cout << "0 - Выход" << endl;
        cout << "> ";
        cin >> menu;
        switch (menu)
        {
            case 1: //добавление
                cout << "Введите значение: ";
                cin >> x;
                arr.add(x);
                break;
            case 2: //удаление
                cout << "Введите значение: ";
                cin >> x;
                if (arr.del(x))
                    cout << "Удалено" << endl;
                else
                    cout << "Такого элемента нет в массиве" << endl;
                break;
            case 3: //поиск
                cout << "Введите значение: ";
                cin >> x;
                i = arr.find(x);
                if (i == -1)
                {
                    cout << "Не найдено" << endl;
                }
                else
                {
                    cout << "Найдено на позициях: " << i;
                    while (i!=-1) //ищем все вхождения
                    {
                        i = arr.findNext(x, i);
                        if (i!=-1)
                            cout << ", " << i;
                    }
                    cout << endl;
                }
                break;
            case 4: //вывод
                for (i = 0; i < arr.getSize(); i++)
                {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;
            case 5: //сортировка по возрастанию
                arr.sortA();
                cout << "Массив упорядочен" << endl;
                break;
            case 6: //сортировка по убыванию
                arr.sortD();
                cout << "Массив упорядочен" << endl;
                break;
            case 7:
                cout << "Введите индекс: ";
                cin >> i;
                x = arr[i];
                cout << "Значение элемента: " << x << endl;
                break;
            default:
                break;
        }
    } while (menu!=0);
    
    return 0;
}
