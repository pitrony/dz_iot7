//Домашнее задание №7
//Задача 1. Среднее арифметическое чисел
//Ввести с клавиатуры массив из 5 элементов, найти среднее арифметическое
//всех элементов массива.
//Данные на входе: 5 целых ненулевых чисел через пробел
//Данные на выходе: Одно число в формате "%.3f"
#include <stdio.h>
const int inputsize=5;
int main()
{
    int a[inputsize];
    int sum=0;
    for (int i = 0; i < inputsize; i++)
        { scanf("%d", &a[i]); }
        
    for (int i = 0; i < inputsize; i++)
        { sum=a[i]+sum; }
   
    printf("%.3f", (float)sum /(sizeof(a)/sizeof(a[0])));

    return 0;
}
