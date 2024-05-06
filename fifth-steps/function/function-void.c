#include<stdio.h>

void sum(){//ignore parametars for function work of void
int a,b;
scanf("%d %d",&a,&b);
int result = a+b;
printf("%d",result);
}

int main(){
 sum();
return 0;
}