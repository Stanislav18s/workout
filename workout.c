
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Person {
    char* name;
    int age;
} Person;

int main() {
    srand(time(NULL)); // Инициализация генератора случайных чисел

    Person* mas[] = {
        &(Person) { "Silver", rand() % 50 },
        &(Person) {
"Tom",    rand() % 40
},
&(Person) {
"Bob",    rand() % 40
},
&(Person) {
"Alice",  rand() % 40
},
&(Person) {
"Sam",    rand() % 40
}
    };

    // Проверка
    for (int i = 0; i < 5; i++) {
        printf("%s: %d\n", mas[i]->name, mas[i]->age);
    }

    return 0;
}
