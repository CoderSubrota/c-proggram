#include <stdio.h>
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int array[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    //search two steps that will be break and another continue
    int X;
    scanf("%d", &X);
    int exist = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (array[i][j] == X)
            {
                exist = 1;
                break;
            }
            if(exist==1){
                break;
            }
        }
    }
    if (exist == 1)
    {
        printf("will not take number");
    }
    else
    {
    printf("will take number");

    }
    return 0;
}