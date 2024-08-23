//Домашнее задание №7
//Задача 4. Отсортировать по последней цифре
//Считать массив из 10 элементов и отсортировать его по последней цифре.
//Данные на входе: 10 целых чисел через пробел
//Этот же массив отсортированный по последней цифре
#include <stdio.h>
void arrprint(int arr[], int len)
{
    for (int i = 0; i < len; i++)
      {printf("%d", arr[i]);
       printf(" ");}
       printf("\n");
}
int mixarr(int* arr, int len)
{
 for(int i = 0; i < len; ++i)
    {
    for(int j = i; j < len; ++j)
        {
        if(arr[i]%10 > arr[j]%10)
            {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            }
        }
    }
}
    
int main()
{
    const int arsize=10; 
    int a[arsize];
    for (int i = 0; i < arsize; i++)
    scanf("%d", &a[i]);
    int alen=sizeof(a)/sizeof(a[0]);
    arrprint(a, alen);
    mixarr(a, alen);
    arrprint(a, alen);
    return 0;
}
