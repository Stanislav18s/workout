
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
    if (i == 1) return 1;
    return i + recursiv(i-1);// нужно что бы функция упала в первоначальное положение без этой функции 

   
   
    return recursiv(i);

    }// функция которая дает сумму всех натуральных чисел i 
  



int main()
{
  int i = 4;
  recursiv(i);

  printf("%d\n", recursiv(i));
    char_messege("kak dela?");
    return 0;
}

