#include <stdio.h>
int printDigit(n)
{
    if (n == 0)
    {
        return;
    };
    int x = n % 10;     // 39 => 9
    printDigit(n / 10); // 39 => 3 => output 93 reverse 3 9 
    printf("%d ", x);
}
int main()
{
    int T;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++)
    {
        int n;
        scanf("%d", &n);
        printDigit(n);
        if (n == 0)
        {
            printf("0");
        }
        printf("\n");
    }
    return 0;
}