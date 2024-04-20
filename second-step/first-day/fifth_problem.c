#include<stdio.h>
int main(){
char x;
scanf("%c",&x);
if(x>=48 && x<=57){
    printf("IS DIGIT\n");
}else{
    printf("ALPHA\n");
    if(x>=65 && x<=90){
        printf("IS CAPITAL\n");
    }else{
        printf("IS SMALL\n");
    }
}
return 0;
}