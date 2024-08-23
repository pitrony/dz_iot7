//Домашнее задание №7
//  Задача 5. Вторая с конца ноль
//Считать массив из 10 элементов и отобрать в другой массив все числа, у
//которых вторая с конца цифра (число десятков) – ноль.
//Данные на входе: 10 целых чисел через пробел.
//Данные на выходе: Целые числа через пробел, у которых вторая с конца цифра - ноль
#include <stdio.h>
int out[]={0};

void arrprint(int arr[], int len)
{
    for (int i = 0; i < len; i++)
      {printf("%d", arr[i]);
       printf(" ");}
       printf("\n");
}
int mixarrz(int *arr, int len)
{
   
    int pos_out=0;
 for(int i = 0; i < len; i++)
 {
    if (arr[i]/10%10 == 0)
    {
    out[pos_out] = arr[i];
    pos_out++;
    }
 }
 return pos_out;
}
   
int main()
{
    const int arsize=10; 
    int a[arsize];
    for (int i = 0; i < arsize; i++)
    scanf("%d", &a[i]);
    int alen=sizeof(a)/sizeof(a[0]);
    arrprint(a, alen);
    int alen2=mixarrz(a, alen);
    arrprint(out, alen2);
    return 0;
}
