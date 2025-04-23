
#include <stdio.h>
#include <iostream>
#include "my finction.h"// засунул функции в заголовочный файл
using namespace std;
// отрабатывем передачу параметров в функцию указатели 
void sum(int x,int y) {
    cout << x + y << "\n" << endl;

}




int main()
{
    int b = 12;
    int c = 13;
    sum(b, c);
    return 0;
}

