
#include <stdio.h>
#include <iostream>
using namespace std;
// тренируюсь создовать новые методы
void char_messege(const char array[])// здесь нужна констанка иначе выдает ошибку 
{
    printf("%s\n", array);
}
// создал функцию умножения
float multiply(float x, float y) {
    float temp = x * y;
    return temp;// Без равно можно написать выражение return x*2;
}
// рекурсивная функция( матрешка)
int recursiv(int i) {
    if (i<10) return 1;// нужно что бы функция упала в первоначальное положение без этой функции 
    return i + recursiv(i/2);

   
   
    return recursiv(i);

    }// функция которая дает сумму всех натуральных чисел i 
  
void zamena(int x, int y)
    {
        int temp;// временная var shi see только in функции дальше shi using not
        temp = x;
        x = y;
        y = temp;
        cout << x << "\t" << y << "\n" << endl;
    }// создадим функцию которая меняет местами аргументы int
// создавать функции внутри функции нельзя на си
// создам глобальные переренные кторые видни всем 
bool c;
int global = 999;
static float d;// var statik init 1 раз и не сбрасываетсья  после того как ей попользуються 


int main()
{ register int b; // выделяет this is var  место в памяти ( быстродействие )
   
    int global = 2222;// in var hide global
    if (c) {
        int global =1; // hide in function main in cod in if;
    }
  
    d += 5;
    cout << d << " \n" << endl;
    zamena(88, 99);
    return 0;
}

