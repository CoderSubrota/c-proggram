#include<stdio.h>
int main(){
int n,reminder,reverse;
scanf("%d",&n);
int oringNum=n;
while (n!=0){
reminder=n%10;
reverse=reverse*10+reminder;
n=n/10;
}

if(oringNum==reverse){
    printf("YES\n");
}else{
    printf("NO\n");
}

return 0;
}