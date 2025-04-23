// вынесем сюда функции ( хлам) с основного файла
#include<iostream>
#include<stdio.h>

using namespace std;
float global = 12.12;

void char_messege(const char array[])// здесь нужна констанка иначе выдает ошибку 
{
    printf("%s\n", array);
}
float multiply(float x, float y) {
    float temp = x * y;
    return temp;
}
int recursiv(int i) {
    if (i < 10) return 1;// нужно что бы функция упала в первоначальное положение без этой функции 
    return i + recursiv(i / 2);



    return recursiv(i);

}// функция которая дает сумму всех натуральных чисел i 
void zamena(int x, int y)
{
    int temp;// временная var shi see только in функции дальше shi using not
    temp = x;
    x = y;
    y = temp;
    cout << x << "\t" << y << "\n" << endl;
}
inline void char_messege(const char)
{
}
// создадим функцию которая меняет местами аргументы int

