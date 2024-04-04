// Online C compiler to run C program online
#include<stdio.h>

int main() {
    // Write C code here
    int num;
    printf("Enter any number = ");
    scanf("%d",&num);
    int i=1;
    int sum;
    do{
     sum=sum+i;
     i=i+10;
     //sum=null+1=1;
     //sum(recive)=1+2=3;
     //sum=3+3=6
    }while(i<=num);
     printf("Total sum of numbers = %d\n",sum);
     void hello(){
     printf("Hello");
     }
     hello();

    return 0;
}
