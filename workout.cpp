
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
    return temp;
}

int main()
{
    char_messege("kak dela?");
}

