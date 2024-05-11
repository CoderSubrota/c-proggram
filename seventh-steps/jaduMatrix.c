#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int array[n][m];

    int flag = 1;

    if (n != m)
    {
        flag = 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (array[i][i] != 1)
        {
            flag = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (array[i][n - i - 1] != 1)
        {
            flag = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((j != i) && (j != n - i - 1) && array[i][j] != 0)
            {
                flag = 0;
                break;

                // primary diagonal
                // secondary diagonal
                // all diagonal numbers
            }
        }
    }

    if (flag == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}