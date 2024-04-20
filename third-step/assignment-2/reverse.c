#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            printf("%d ", i);
        }
    }
    else if (n < 0)
    {
        int a = labs(n);
        for (int i = a - 1; i >= 0; i--)
        {
           if(i!=0){
             printf("-%d ", i);
           }else{
               printf("%d ", 0);
           }
        }
    }
}