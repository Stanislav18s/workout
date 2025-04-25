
#include <stdio.h>
#include <iostream>
#include <time.h>
#include<string>
using namespace std;
/*Задание 4: Сортировка структур
Цель: Работа с структурами и qsort.
Задача:

Создайте структуру Person с полями name (строка) и age (int).

Создайте массив из 5 экземпляров Person.

Отсортируйте массив по возрасту (по возрастанию), затем по имени (в алфавитном порядке).*/
struct Person {
    char name[40];
  int age;
};
int compare_age(const void* a, const void* b) {
    const Person* p1 = (const Person*)a;
    const Person* p2 = (const Person*)b;
    return p1->age - p2->age;
}
int compare_name(const void* a, const void* b) {
    const Person* p1 = (const Person*)a;
    const Person* p2 = (const Person*)b;
    return strcmp(p1->name, p2->name);
}

int main()
{
    srand(time(NULL));
    struct Person mas[] = { {"Silver",rand() % 50}, { "Tom",rand() % 40 }, {"Bob",rand() % 40}, {"Alice",rand() % 40}, {"Sam",rand() % 40} };
    size_t n = sizeof(mas) / sizeof(mas[0]);
    qsort(mas, n, sizeof(*mas), compare_name);
    for (size_t i = 0;i < n;i++)
    {
        printf("name: %s age: %d \n", mas[i].name, mas[i].age);
    }
    cout << endl;
    qsort(mas, n, sizeof(*mas), compare_age);
    for (size_t i = 0;i < n;i++)
    {
        printf("name: %s age: %d \n", mas[i].name, mas[i].age);
    }


      return 0;
}





