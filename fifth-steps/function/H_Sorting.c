#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

     int i=0; 
     int j=n-1;
     while (j<i)
     {
        int temp = array[i];
        array[i]=array[j];
        array[j]=temp;
       i++;
       j--;
     }
     
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}