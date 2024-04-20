#include<stdio.h>
int main(){
int a,b,c;
scanf("%d %d %d",&a, &b, &c);

//minimum

if(a<=b && a<=c){
    printf("%d ",a);
}else if (b<=a && b<=c){
    printf("%d ", b);
}else{
    printf("%d ", c);
}

//maximum

if(a>=b && a>=c){
printf("%d",a);
}else if(b>=a && b>=c){
    printf("%d",b);
}else{
    printf("%d",c);
}
    return  0;
}

//3 3 2 = 2 3
//1 2 3 = 1 3
//2 3 3 = 2 3
//-3 -2 -5 = -5 -2

