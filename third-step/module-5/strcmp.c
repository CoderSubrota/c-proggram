#include<stdio.h>
#include<string.h>
int main(){
char a[10001],b[10001];
scanf("%s %s",&a,&b);
int val=strcmp(a,b);//strcat strcpy
if(val==-1){
    printf("A is smaller\n");
}else if(val==1){
 printf("B is smaller\n");
}else{
     printf("A and B same\n");
}
return 0;
}