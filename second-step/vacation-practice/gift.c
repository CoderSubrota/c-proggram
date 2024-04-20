#include<stdio.h>
int main(){
int x,y,gifts=0,children=0;
scanf("%d %d",&x,&y);
gifts=x/y;
children=x%y;
printf("%d %d", gifts,children);

return 0;
}