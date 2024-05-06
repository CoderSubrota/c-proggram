#include <stdio.h>
int main()
{
    int n, k, s;
    scanf("%d", &n);
    k = 1;
    s = n-1 ;//4 => 3 2 1 => 4 don't need to space
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        if (i <= n)
        {
            k = k + 2;
            s--;
        }   
        printf("\n");
    }
    return 0;
}