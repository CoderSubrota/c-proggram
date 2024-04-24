#include<stdio.h>
#include<string.h>
int main(){
char str[100001];
scanf("%s",&str);

int length = strlen(str);
for(int i=0;i<length ; i++){
    if(str[i]==','){
       str[i]=' ';
    }

if(str[i]>=65 && str[i]<=90){
    str[i]+=32;
}
else if(str[i]>=97 && str[i]<=122){
    str[i]-=32;
}
}
printf("%s",str);
return 0;
}
//if =>  else not work try else if vice versa
//*if *else if update all value at a time
//check charecter inside of '' quetiess