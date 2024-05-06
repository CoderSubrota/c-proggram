#include<stdio.h>
int sum(int a, int b);
int main(){
int div = sum(45,20);
printf("%d",div);
return 0;
}

int sum(int a, int b){
int re = a/b;
return re;
}