//Домашнее задание №7
  //Задача 3. Циклический сдвиг массива вправо на 4
//Считать массив из 12 элементов и выполнить циклический сдвиг ВПРАВО на 4 элемента.
//Данные на входе: 12 целых чисел через пробел
//Данные на выходе: 12 целых чисел через пробел
#include <stdio.h>
const int inputsize=12;
const int steps=4;
void arrprint(int arr[], int len)
{
    printf("\n");
    for (int i=0 ; i<len; i++)
    {printf("%d", arr[i]);
    printf(" ");}
    printf("\n");
}
int rightsteps(int ar[],int len, int step)
{
    
    for (int j=1; j<=step; j++)
    {
        int temp1,temp=0;
        temp=ar[len-1];
    for (int i=len-1; i>=0; i--)
        {
        temp1=ar[i]; 
        ar[i]=ar[i-1];
        }
    ar[0]=temp;
    }
}

int main()
{
    int a[inputsize];
    for (int i = 0; i < inputsize; i++)
        { scanf("%d", &a[i]);  }
   arrprint(a, inputsize);
   rightsteps(a,inputsize, steps);
   arrprint(a, inputsize);
   return 0;
}
