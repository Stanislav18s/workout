
#include <stdio.h>
#include <iostream>
#include <time.h>
#include<string>
/*Задание 3: typedef для функции сравнения
Цель: Упростить код с помощью typedef.
Задача:

Объявите тип Comparator как указатель на функцию сравнения (возвращает int, принимает два const void*).

Перепишите задание 1 или 2, используя Comparator.*/
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

