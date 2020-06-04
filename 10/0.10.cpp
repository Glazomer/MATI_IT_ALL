// BigInteger1.cpp: определяет точку входа для консольного приложения.
//
/* Вариант 10. Создать тип данных для хранения целого числа большой длины.
Для этого типа данных обеспечить возможность занесения и получения числа
произвольной длины. Обеспечить возможность сложения и вычитания
данных такого типа.
*/
// #include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
// максимальная длина числа
#define max_size 100
// тип длинного числа
struct BigInteger{
int len; // длина числа
char num[max_size]; // цифры числа (в num[0] находится цифра младшего разряда числа)
int sign; // знак числа ("-1" - отрицательный; "0" - ноль; "+1" - положительный)
};
/* Занесение числа в тип данных.
Входные данные:
a - тип данных длинного числа;
numStr - число в 10-ой с/с в строковом представлении.
Выходные данные:
Результат:
true-удалось занести в тип данных число,
false-не удалось занести, строка не является числом.
*/
bool BigIntegerSetNumber(BigInteger *a, char *NumStr)
{
int len1 = 0; // длина строки в общем
int len2 = 0; // длина числа без знака
// вычисление длины строки
while( NumStr[len1++] );
len1--;
// анализ на ошибку
if( len1 == 0 )
{
a->len = 0;
return false;
}
// анализ и установка знака числа
a->sign = +1;
len2 = len1;
if( NumStr[0] == '+' )
{
len2--;
}
else
if( NumStr[0] == '-' )
{
a->sign = -1;
len2--;
}
// копирование и преобразование кодов символов в бинарное число
for(int i=0; i<len2; i++)
{
char ch = NumStr[len1-i-1];
if( (ch < '0') || (ch > '9') )
return false; // возвратить результат - не успех
a->num[i] = ch - '0';
}
// остальную часть массива заполняем нулями
for(int i=len2; i<max_size; i++)
a->num[i] = 0;
// установка длины числа
a->len = len2;
// возвратить результат - успех
return true;
}
/* Получение числа из типа данных.
Входные данные:
a - тип данных длинного числа;
Выходные данные:
число в 10-ой с/с в строковом представлении.
*/
char* BigIntegerGetNumber(BigInteger *a)
{
int len = a->len;
char *NumStr;
// выделение памяти для строки
if( len == 0 )
NumStr = (char*)malloc(len+3);
else
NumStr = (char*)malloc(len+2);
// знак
if( a->sign < 0 )
NumStr[0] = '-';
else
NumStr[0] = '+';
// число
if( len == 0 )
{
NumStr[1] = '0';
NumStr[2] = 0;
}
else
{
for(int i=0; i<len; i++)
NumStr[len-i] = a->num[i] + '0';
NumStr[len+1] = 0;
}
// возвратить результат
return NumStr;
}
/* Сравнение чисел по модулю.
Входные данные:
a,b - сравниваемые числа;
Выходные данные:
-1 - a < b;
0 - a = b;
+1 - a > b.
*/
int BigIntegerCompareModule(BigInteger *a, BigInteger *b)
{
// первичный анализ по длинам чисел
if( a->len < b->len ) return -1;
if( a->len > b->len ) return +1;
// если по длине разницы не обнаружилось, то ищем разницу по цифрам
for(int i=(a->len-1); i>=0; i--)
{
char aa = a->num[i], bb = a->num[i];
if( aa < bb ) return -1;
if( aa > bb ) return +1;
}
// если ни каких отличий не нашлось, то числа по модулю равны
return 0;
}
/* Сложение двух длинных чисел.
Входные данные:
a,b - слагаемые;
Выходные данные:
rez - сумма.
*/
void BigIntegerAdd(BigInteger *a, BigInteger *b, BigInteger *rez)
{
// если оба числа положительные или отрицательные
if( a->sign == b->sign )
{
// то сложить модули и установить тот же знак
// сложение
rez->len = a->len; // длина результата
if( b->len > rez->len ) rez->len = b->len;
char C = 0; // перенос
for(int i=0; i<rez->len; i++)
{
// вычисление результата
char sum = a->num[i] + b->num[i] + C;
// корректировка
if( sum > 9 )
{
sum -= 10;
C = 1;
}
else
C = 0;
// сохранение результата
rez->num[i] = sum;
}
// сохранение переноса и установка длины числа результата
if( C > 0 )
{
rez->num[rez->len] = C;
rez->len++;
}
// установка знака
rez->sign = a->sign;
}
else
{
// иначе из большего вычесть меньшее и установить знак большего числа
BigInteger
*aa, // большее число
*bb; // меньшее число
// выяснение, какое число больше
if( BigIntegerCompareModule(a, b) > 0 )
{
aa = a;
bb = b;
}
else
{
aa = b;
bb = a;
}
// вычитание
int C = 0; // заём
for(int i=0; i<aa->len; i++)
{
// вычисление результата
int sub = aa->num[i] - bb->num[i] - C;
// корректировка
if( sub < 0 )
{
sub = 10 + sub;
C = 1;
}
else
C = 0;
// сохранение результата
rez->num[i] = sub;
}
// установка длины результата
int len = aa->len-1;
for(; len>=0; len--)
if( rez->num[len] != 0 )
break;
rez->len = len+1;
// установка знака
rez->sign = aa->sign;
}
}
/* Разность двух длинных чисел.
Входные данные:
a,b - длинные числа;
Выходные данные:
rez - разность.
*/
void BigIntegerSub(BigInteger *a, BigInteger *b, BigInteger *rez)
{
// меняем знак второго аргумента на противоположный
b->sign *= -1;
// вычисление
BigIntegerAdd(a, b, rez);
// меняем обратно знак
b->sign *= -1;
}
int _tmain(int argc, _TCHAR* argv[])
{
BigInteger a,b,rez;
char num1[max_size], num2[max_size];
char* RezStr;
// ввод данных
printf("Number string #1:\n");
scanf("%s", num1);
printf("Number string #2:\n");
scanf("%s", num2);
// если преобразования прошли успешно
if( !BigIntegerSetNumber(&a, num1) )
printf("Error Number №1.\n");
else
if( !BigIntegerSetNumber(&b, num2) )
printf("Error Number №2.\n");
else
{
// то выполнить задания
// сложение
BigIntegerAdd(&a, &b, &rez);
RezStr = BigIntegerGetNumber(&rez);
printf("\nResult Add:\n%s\n\n", RezStr);
// вычитание
BigIntegerSub(&a, &b, &rez);
RezStr = BigIntegerGetNumber(&rez);
printf("\nResult Sub:\n%s\n\n", RezStr);
}
system("pause");
return 0;
}