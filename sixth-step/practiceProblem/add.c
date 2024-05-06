#include<stdio.h>
int sum(int x, int y){
int result = x+y;
return result;
}
int main(){
int x,y;
scanf("%d %d",&x,&y);
int sumResult = sum(x,y);
printf("%d",sumResult);
return 0;
}