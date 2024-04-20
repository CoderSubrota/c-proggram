#include<stdio.h>
int main(){

int money;
int reduceMoney;
printf("Enter money = ");
scanf("%d",&money);
if(money>1000){
    printf("I will buy a punjabi\n");
    reduceMoney=money-1000;
    if(reduceMoney>=500){
         printf("I will buy new shoes\n");  
         printf("Alisa will buy new shoes\n"); 
    }
}else{
    printf("Bad luck!");
}
    return 0;
}