#include<stdio.h>
int main(){
int x;
int daughterAge;
int fatherAge;
scanf("%d", &x);
daughterAge=(x/5);
fatherAge=(x/5)*4;
printf("%d %d", fatherAge, daughterAge);
return 0;
}