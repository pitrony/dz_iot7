//Домашнее задание №7
//Задача 2. Найти минимум
//Ввести с клавиатуры массив из 5 элементов, найти минимальный из них.
//Данные на входе: 5 целых чисел через пробел
//Данные на выходе: Одно единственное целое число
#include <stdio.h>
const int inputsize=5;
int main()
{
    int a[inputsize];
    for (int i = 0; i < inputsize; i++)
        { scanf("%d", &a[i]); }
   int min=a[0];     
    for (int i = 1; i < inputsize; i++)
        { if (a[i]<min)
           min=a[i]; }
   
    printf("min= %d" , min);

    return 0;
}
