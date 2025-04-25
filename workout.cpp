
#include <stdio.h>
#include <iostream>
#include <time.h>
#include<string>
using namespace std;
/*Задание 6: Универсальная сортировка
Цель: Написать аналог qsort с использованием typedef и колбэков.
Задача:

Создайте функцию generic_sort, которая принимает:

Массив void*,

Количество элементов,

Размер элемента,

Функцию сравнения через typedef.

Реализуйте сортировку пузырьком (для простоты).

Протестируйте на массиве int и Person.*/
typedef int sravni(const void* a, const void* b);
void generic_sort(void*p, size_t n,size_t* c, sravni) {
    int x = *(sravni);
    for (size_t i = 0;i < n;i++) {
        for (size_t j = 0;j < n;j++) {
            if (x > 0)

                
        }
    }
}
struct Person {
    char name[40];
  int age;
};
int compare_age(const void* a, const void* b) {
    const Person* p1 = *(const Person**)a;
    const Person* p2 = *(const Person**)b;
    return p1->age - p2->age;
}
int compare_name(const void* a, const void* b) {
    const Person* p1 = *(const Person**)a;
    const Person* p2 = *(const Person**)b;
    return strcmp(p1->name, p2->name);
}

int main()
{
    srand(time(NULL));
    struct Person *mas[] = { 
       new Person {"Silver",rand() % 50},
       new Person  { "Tom",rand() % 40 },
       new Person  {"Bob",rand() % 40},
       new Person  {"Alice",rand() % 40},
        new Person {"Sam",rand() % 40}
    };
    size_t n = sizeof(mas) / sizeof(mas[0]);
    qsort(mas, n, sizeof(*mas), compare_name);
    for (size_t i = 0;i < n;i++)
    {
        printf("name: %s age: %d \n", mas[i]->name, mas[i]->age);
    }
    cout << endl;
    qsort(mas, n, sizeof(*mas), compare_age);
    for (size_t i = 0;i < n;i++)
    {
        printf("name: %s age: %d \n", mas[i]->name, mas[i]->age);
    }
    for (auto i : mas)
        delete i;

      return 0;
}





