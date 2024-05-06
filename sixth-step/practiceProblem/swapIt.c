#include <stdio.h>
int swap_it(int *array, int n);
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int array[2] = {a, b};
    swap_it(array, 2);
    return 0;
}

int swap_it(int *array, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        { // i+1 means 2+1 2+2 2+3 2+4 => 4 length
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
        printf("%d", array[i]);
        if (i != n)
        {
            printf(" ");
        }
    }
}

// min= max
// max = min
//  i < min = max 10 < 20
//  i > max = min  20 > 10