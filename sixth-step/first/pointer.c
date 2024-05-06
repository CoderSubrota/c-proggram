#include<stdio.h>
int main(){
int firstNumber=230;
int * pointer = &firstNumber;
printf("P value of x = %d \n",*pointer);
*pointer=150;
printf("Value of firstNumber = %d\n",pointer);
printf("Value of P = %d\n", *pointer);
printf("Memory address of P = %p\n", &pointer);
printf("Get memory of pointer that occupy firstNumber memory address = %p\n", pointer);
printf("Memory address of pointer = %p\n", &pointer);
return 0;
}