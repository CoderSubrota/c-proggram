#include<stdio.h>
int main(){
 int x,y;
 int moneyOfMina;
 int moneyOfRina;
 int totalMoney;
 scanf("%d %d", &x,&y);

 totalMoney=(x-y);
 moneyOfMina=(totalMoney/2)+y;
 moneyOfRina=totalMoney/2;
 printf("%d %d",moneyOfMina, moneyOfRina);
 return 0;
}