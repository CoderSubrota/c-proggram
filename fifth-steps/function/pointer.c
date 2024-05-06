#include<stdio.h>
int main(){
int x = 20 ;
int* p=&x;
*p=500;
*p=2000;
printf("%p\n",&x);
printf("%p\n",p);
printf("%d\n",*p);
printf("%d\n",x);
return 0;
}