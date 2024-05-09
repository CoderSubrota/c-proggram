#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int array[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    //
    int flag = 1;
    if (row != col)
    {
        flag = 0;
    }
    // primary diagonal matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
         if(i==j){
            

            if (array[i][j] != array[0][0])
            {
                flag = 0;
            }
            continue;
         }
        }
    }

    if (flag == 1)
    {
        printf("Primary Scalare matrix\n");
    }
    else
    {
        printf("Not primary Scalare matrix\n");
    }

    return 0;
}