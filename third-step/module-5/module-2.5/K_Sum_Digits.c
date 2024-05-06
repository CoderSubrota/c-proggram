#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
char string[1000001];
scanf("%s",&string);
long long int sum=0;
for(int i=0; i<n; i++){
sum=sum+string[i]-48;
}
printf("%lld",sum);
return 0;
}