#include <iostream>
#include <string>

#define S_IN_M 60 // Секунд в минте
#define S_IN_H (60*S_IN_M) // Секунд в часе
#define S_IN_D (24*S_IN_H) // Секунд в сутках

class Time{
  private:
  unsigned sec; // Храним все в секундах

  public:
  Time& set(unsigned h, unsigned m, unsigned s){
    *this = Time(h, m, s); //Создаем новый объект и присваиваем
    return *this;
  };
  // Делим секунды на количество секунд в часах, получаем часы
  unsigned h(){return sec/S_IN_H;}; 
  // Делим секунды котораые остались после предыдещего деления
  // на количество минут в часах, получаем минуты
  unsigned m(){return (sec%S_IN_H)/S_IN_M;}; 
  // Возвращаем оставшиеся секунды
  unsigned s(){return sec%60;};

  // Возвращаем строку означающую время
  std::string toString(){
    // Выделяем 9 символов под 6 цифр (2 под часы, 2 под минуты, 2 под секунды), 2 под ':'
    char str[9];
    // Записываем форматированную строку 
    sprintf(str, "%02u.%02u.%02u", h(), m(), s());
    // Возвращаем строку
    return std::string(str);
  };

  Time operator+ (const Time& t){
    // Складываем секунды и создаем новый объект
    return Time(sec + t.sec);
  }
  Time operator- (const Time& t){
    // Вычитаем секунды и создаем новый объект
    return Time(sec - t.sec);
  }

  // Конструктор принимающий часы, минуты, секунды и переводящий все в секунды
  Time(unsigned h, unsigned m, unsigned s) : sec((S_IN_H*h+S_IN_M*m+s)%S_IN_D){};
  // Конструктор устанавливающий секунды с проверкой перехода на следующий/предыдущий день
  Time(int s) : sec((s + S_IN_D) % S_IN_D){};
};

int main(){
  Time t1(5, 25, 30), t2(1, 5, 45);
  std::cout << t1.toString() << " == 05.25.30\n";
  std::cout << t2.toString() << " == 01.05.45\n";
  std::cout << (t1+t2).toString() << " == 06.31.15\n";
  std::cout << (t1-t2).toString() << " == 04.19.45\n";
  std::cout << (t2-t1).toString() << " == 19.40.15\n";
  return 0;
}