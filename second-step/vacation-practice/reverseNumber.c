#include<stdio.h>
int main(){
int n,reverse=0,reminder;
scanf("%d",&n);
while(n!=0){
    reminder=n%10;
    reverse=reverse*10+reminder;
    n/=10;
}
printf("%d",reverse);
    return 0;
}