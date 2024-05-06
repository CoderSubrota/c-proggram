#include <stdio.h>
#define RESET "\033[0m"
#define GREEN "\033[32m"
#define YELLOW "\033[36m"
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    // dsending order
        printf("\n Dscending => \n");
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] < array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf(GREEN "%d ",  array[i], "", RESET);
    }

    // asending order
    // 4-1  3-1  2-1 last of
    for (int k = 0; k < n - 1; k++)
    {
        for (int j = k + 1; j < n; j++)
        {
            if (array[k] > array[j])
            {
                int temp = array[k];
                array[k] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("\n Asending => \n");
    for (int m = 0; m < n; m++)
    {
        printf(YELLOW "%d ",  array[m] , "", RESET);
    }
    return 0;
}