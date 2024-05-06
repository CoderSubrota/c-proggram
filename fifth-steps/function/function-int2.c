#include<stdio.h>
int sum(int a , int b){
int res = a*b;
return res;
}
int main(){
int fir1 = sum(21,10);
int fir2 = sum(21,20);
int fir3 = sum(15,10);

printf("%d %d %d",fir1, fir2,fir3);
return 0;
}