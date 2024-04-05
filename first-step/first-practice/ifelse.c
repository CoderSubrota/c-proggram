#include<stdio.h>
int main(){
int money;
printf("Enter your ammount = ");
scanf("%d",&money);
if(money>10000||money==10000){
 printf("Gucci Bag\n");
 if(money>20000){
    printf("Gucci Belt\n");
 }
}else if(money>5000||money==5000){
    printf("Lavis Bag\n");
}else{
    printf("Something\n");
}
return 0;
}