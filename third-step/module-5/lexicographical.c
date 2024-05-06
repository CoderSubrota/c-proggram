#include <stdio.h>
int main()
{
    char a[10001], b[10001];
    scanf("%s %s", &a, &b);
    int i = 0;
    while (1)
    {
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("Same here");
            break;
        }
        else if (a[i] == '\0')
        {
            printf("A is smaller");
            break;
        }
        else if (b[i] == '\0')
        {
            printf("B is smaller");
            break;
        }

        if (a[i] == b[i])
        {
            i++;
        }
        else if (a[i] < b[i])
        {
            printf("A is smaller");
            break;
        }
        else
        {
            printf("B is smaller");
            break;
        }
    }
    return 0;
}