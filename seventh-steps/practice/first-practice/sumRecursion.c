#include <stdio.h>
int sumOfNumbers(int array[], int n);
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int summation = sumOfNumbers(array, n);
    printf("%d", summation);
    return 0;
}

int sumOfNumbers(int array[], int n)
{

    if (n < 0)
    {
        return 0;
    };

    return array[n - 1] + sumOfNumbers(array, n - 1);
    //10 20 => 2-1 => 20 + 10 => 30
}