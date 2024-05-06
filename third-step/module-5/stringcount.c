#include<stdio.h>
#include<string.h>

int main(){
char string[100001];
int count[10001];
scanf("%s",&string);
int len = strlen(string);
for(int i=0; i<len; i++){
int value = string[i]-97;
count[value]++;
}
for(int i=0; i<len; i++){
int value = string[i]-97;//100-97= 0 1  2 3 =d = charecter
if(count[value]!=0){
    printf("%c = %d\n",value+97, count[value]);
}
count[value]=0;
}
return 0;
}