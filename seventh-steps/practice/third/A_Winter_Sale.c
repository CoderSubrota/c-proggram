#include<stdio.h>
int main(){
int X,P;
scanf("%d %d",&X,&P);

float discountPercentage = (float)X/100;
float orginalPrice= (float)P/(1-discountPercentage);
printf("%0.2f",orginalPrice);
return 0;
}