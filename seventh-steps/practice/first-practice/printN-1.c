void printNum(int n, int i){
if (n<i )return ;
printf("%d",n);
if(n!=i){
printf(" ") ; 
}
printNum(n-1,i);
}
#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
printNum(n,1);
return 0;
}