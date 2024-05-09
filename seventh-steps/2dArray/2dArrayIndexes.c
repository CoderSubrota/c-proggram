#include<stdio.h>
int main(){
 int row,col;
 scanf("%d %d",&row,&col);
 int array[row][col];
for(int i=0; i<row; i++){
for (int  j = 0; j <col; j++)
{
    scanf("%d",&array[i][j]);
}
}
//
printf("==========\n");
for(int i=0; i<row; i++){
for (int  j = 0; j <col; j++)
{
    printf("[%d]  [%d]", i , j);
}
printf("\n");
}

return 0;
}