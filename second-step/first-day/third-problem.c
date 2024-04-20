#include<stdio.h>
int main(){
char  x;
int result;
scanf("%c",&x);
if(x>=97 && x<=122){
    result = x-32;
    printf("%c",result);
}else {
    result=x+32;
    printf("%c",result);
}

return 0;
}

/*
if under 96 it will print false if grater than 122 print false otherwise
96 to 122 print true
*/