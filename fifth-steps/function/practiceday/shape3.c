#include <stdio.h>
int main()
{
    int n, star, space;
    scanf("%d", &n); 
    star = 1;
    space = n - 1;
    for (int i = 1; i <=n*2; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        if (i <= n)
        {
            star+=2;
            space--;
        }
      
         if (i >= n) {//6>=5 end in the 5 than start from 5 means 1 2 3 4 5 = 5 4 3 2 1
            star-=2;
            space++;
        }
        printf("\n");
    }
    return 0;
}