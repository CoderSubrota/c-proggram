#include<stdio.h>
int reciveValue(int* x){//recive as pointer
printf("Get the memory address of x = %p\n",x);
printf("Get the memory address of p = %p\n",&x);
*x=500;
}
int main(){
int x=250;
printf("Get the memory address of x in main = %p\n",&x);
reciveValue(&x);//send memory address
printf("%d\n",x);//print afer call
return 0;
}