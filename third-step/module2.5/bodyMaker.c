#include <stdio.h>
int main()
{
    long long int e, m, b;
    scanf("%lld %lld %lld", &e, &m, &b);
    long long int totalBody = 0;
    while (e != 0 && b != 0)
    {
        if (e >= 1 && m >= 1 && b >= 1)
        {
            totalBody++;
            e--;
            m--;
            b--;
        }
        else if (e >= 2 && b >= 1)
        {
            totalBody++;
            e -= 2;
            b--;
        }
        else if (e >= 2 && m >= 1 && b >= 1)
        {
            totalBody++;
            e -= 2;
            m--;
            b--;
        }
    }
    printf("%lld", totalBody);
    return 0;
}
