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
            

            if (array[i][j] != 1)
            {
                flag = 0;
            }
            continue;
         }
        }
    }

    if (flag == 1)
    {
        printf("Primary Unit matrix\n");
    }
    else
    {
        printf("Not primary Unit matrix\n");
    }

    return 0;
}