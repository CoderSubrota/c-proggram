#include <stdio.h>
#include<limits.h>
void minMax(int *array, int n);
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    minMax(array, n);
    return 0;
}

void minMax(int *array, int n)
{
    int min =INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (array[i] < min)//10<20=min
        { 
            min = array[i];
        }
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    printf("%d %d", min, max);
}