#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char **argv) {
  int n= 0; // Сколько таких слов
  string line, str; // Line – для хранения строки, str – для вытаскивания слов

  getline(cin, line); // Получаем строчку из cin (стандартного ввода) и храним в line
  istringstream stream(line); // Делаем из строки поток, который будет вытаскивать слова
  
  while (stream >> str){  // Пока поток не закончится вытаскиваем слова в str (если слов нет, то он вернет 0 и цикл завершится)
    if (str.find('q') != str.npos && str.find('p') == str.npos ){ // Смотрим где находится 'q', 
    // если не вне слова (т.е. в слове), то еще проверяем где находится 'p', если вне слова, то все ок,
    // str.npos это -1, т.к. позиция у буквы >0, то -1 значит что буквы нет
      ++n; // Слово подходит, приавляем
    }
  }

  cout << n << endl; // выводим
  return 0;
}