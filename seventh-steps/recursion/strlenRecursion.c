int strlenRecur(char str[], int i){
if(str[i]=='\0') return 0;
int len = strlenRecur(str,i+1);
return len + 1 ;
}
#include<stdio.h>
int main(){
char str[100001];
scanf("%s",&str);
int res = strlenRecur(str,0);
printf("%d",res) ; 
return 0;
}