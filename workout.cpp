
#include <stdio.h>
#include <iostream>
#include "my finction.h"// засунул функции в заголовочный файл
using namespace std;
// отрабатывем передачу параметров в функцию указатели 

// массивы в функциях 
void aray(size_t x, int arr[]) {
    for (size_t i = 0; i < x; i++) {
        arr[i] += 5;
   }
}




int main()
{
    int ar[] = { 1,2,3,4,5,6 };
    size_t x = sizeof(ar) / sizeof(ar[0]);
    aray(x, ar);
    for (size_t i=0;i < x;i++)
    {
        cout << ar[i] << "\n" << endl;
    }
    return 0;
}

