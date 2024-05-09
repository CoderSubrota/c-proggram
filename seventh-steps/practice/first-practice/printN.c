void printNum(int n , int i){
if (i>n ){return;} ;
printf("%d\n",i);
printNum(n, i+1);
}
#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
printNum(n,1);
return 0;
}