#include<stdio.h>
int my_abs(int n){
if(n<0){
return n*(-1);//posative to negative value*(-1)
}else{
    return n;
}
}
int main(){
int n;
scanf("%d",&n);
int result = my_abs(n);
printf("%d",result);
return 0;
}