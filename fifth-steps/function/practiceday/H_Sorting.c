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

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n ; j++)
        {
            if (array[i] > array[j])//i small 1 2 3 4 j gratter than 4 3 2 1
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}