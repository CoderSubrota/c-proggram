#include<stdio.h>
int main(){
int x;
int result;
scanf("%d",&x);
result=x/1000;
if(result%2==0){
    printf("EVEN");
}else{
    printf("ODD");
}
    return 0;
}