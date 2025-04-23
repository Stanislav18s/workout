
#include <stdio.h>
#include <iostream>
#include "my finction.h"// засунул функции в заголовочный файл
using namespace std;
// отрабатывем передачу параметров в функцию указатели 

// переработал функцию заменны на ссылки сама функция не может изменить значение переменной а ссылка может





int main()
{
    int b = 12;
    int c = 30;
    zamena(&b, &c);
    cout << b<<"\t"<< c << "\n" << endl;
    return 0;
}

