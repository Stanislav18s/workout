
#include <stdio.h>
#include <iostream>
#include <time.h>
 

using namespace std;


int compare_int(const void *a,const void *b) {
    int x = *(const int*)a;
    int y = *(const int*)b;
    return (x < y) - (x > y);// в функции qsort ( массив, размер массива, ширина массива в битах,
    //и вот эта функция которая должна возвращать + тога меняем местами или - тогда не трогаем.
       

}
int main()

{
    srand(time(NULL));// отвязываем ранд от времени запуска 
    int array[10];
    size_t n= sizeof(array) / sizeof(array[0]);// выясняем размер массива
    for (size_t x=0;x <n ;x++) array[x] = rand() % 130; //заполнил рандомными значенияма
    for (int i =0;i<n;i++)cout << array[i] << "\t" << endl;// выводим рандомный массив

    qsort(array, n, sizeof(int), compare_int);// применяем qsort к массиву
    for (size_t i = 0;i < n;i++) cout << array[i] << "\t" << endl;// выводим результат
  
    return 0;
}

