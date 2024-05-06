#include <stdio.h>
int main()
{
  int T;
   scanf("%d", &T);

    for (int i = 1; i <= T; i++)
    {
    int N;
    scanf("%d",&N);
       int A[N];
       int yes = 0;
        for (int j = 0; j < N; j++)
        {
        scanf("%d", &A[j]);
        }
        int X;
        scanf("%d", &X);
        for (int k = 0; k < N; k++)
        {
            if (A[k] == X)
            {
                yes = 1;
            }
        }
        if (yes==1)
        { printf("YES\n"); }
        else { printf("NO\n");}
    }

    return 0;
}