#include<stdio.h>
int  printNumber(){
int n;
scanf("%d",&n);
for(int i=1; i<=n; i++){
    printf("%d",i);
 if(i!=n){
    printf(" ");
}
}
}

int main(){
printNumber();
return 0;
}