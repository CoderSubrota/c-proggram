#include <stdio.h>
int main()
{
    long long int n, i;
    scanf("%lld", &n);
    long long int array[n];
    for (i = 0; i < n; i++)
    {
        scanf("%lld", &array[i]);
        if (array[i] <= 10)
        {
            printf("A[%lld] = %lld\n", i, array[i]);
        }
    }
    return 0;
}