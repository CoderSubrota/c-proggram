#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int max=0;
int a;
for(int i=1; i<=n; i++){//kaj koro number paoa projonto
    scanf("%d",&a);//number recive kore check koro
if(a>max){
    max=a;
}
}
printf("%d", max);
return 0;
}