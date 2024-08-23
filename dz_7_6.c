//Домашнее задание №7
//Задача 6. Чаще других
//Дан массив из 10 элементов. Определить, какое число в массиве встречается
//чаще всего. Гарантируется, что такое число ровно 1.
//Данные на входе: 10 целых числе через пробел
//Данные на выходе: Одно число, которое встречается чаще других.
#include <stdio.h>
void arrprint(int arr[], int len)
{
    for (int i = 0; i < len; i++)
      {printf("%d", arr[i]);
       printf(" ");}
       printf("\n");
}
int popul(int *arr, int len)
{
int count[len];
 for(int i=0;i<len;i++)
 count[i]=0;
int max = 0, numberMax = 0;
 for(int i = 0; i < len; i++)
 for(int j = i + 1; j < len; j++)
 if(arr[i] == arr[j])
 count[i]++;
 for(int i = 0; i < len; i++)
 if(count[i] > max)
 {
 max = count[i];
 numberMax = i;
 }
 return arr[numberMax];
}
   
int main()
{
    const int arsize=10; 
    int a[arsize];
    for (int i = 0; i < arsize; i++)
    scanf("%d", &a[i]);
    int alen=sizeof(a)/sizeof(a[0]);
    arrprint(a, alen);
    printf("%d", popul(a,alen));
    return 0;
}

