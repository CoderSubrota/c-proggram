#include<stdio.h>
#include<string.h>
int main(){
char string[10001];
scanf("%s",&string);
fgets(string,sizeof(string),stdin);
long long sum=0;
while (string[sum] !='\0'){
    sum++;
}

printf("Length of string = %lld ",sum);

return 0;
}


//use allways char data type to use string and use formate specifier %s or %c 
