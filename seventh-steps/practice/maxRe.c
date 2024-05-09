#include <stdio.h>
int findMax(int array[], int n)
{
    if (n == 1)
    {
        return array[0];//array to check condition
    };
    int maxInSubArray = findMax(array + 1, n - 1); //array+1 -> n-1
    //sub array 
    return array[0] > maxInSubArray ? array[0] : maxInSubArray;
}
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int getMax = findMax(array, n);
    printf("%d", getMax);
    return 0;
}