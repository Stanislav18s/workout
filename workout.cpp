
#include <stdio.h>
#include <iostream>
#include <time.h>
#include<string>
/*Задание 2: Сортировка строк (char*)
Цель: Работа с массивами строк и qsort.
Задача:

Создайте массив строк: char *names[] = {"Alice", "Bob", "Charlie", "David"};

Отсортируйте его по алфавиту.

Напишите функцию сравнения compare_strings.

Подсказка: Используйте strcmp из <string.h>.*/
using namespace std;

int compare_string(const void* a, const void* b)
{

      return strcmp(*(const char**)b, *(const char**)a);
}



int main()

{
   const char *names[] = {"Alisa","Bob","Charli","David"};
   size_t n = sizeof(names) / sizeof(names[0]);
   qsort(names, n, sizeof(const char*), compare_string);
   for (size_t i = 0;i < n;i++) {
       printf("%s\n", names[i]);
   }
      return 0;
}

