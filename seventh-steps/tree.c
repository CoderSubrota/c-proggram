#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int r = 5;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            r = r + 1;
        }
    }
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= r - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i <= 5; i++)
    {
        for (int i = 1; i <= 5; i++)
        {
            printf(" ");
        }
        for (int i = 1; i <= n; i++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}