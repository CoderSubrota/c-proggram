#include<stdio.h>
#include<string.h>
int main(){
char string[1000001];
scanf("%s",&string);
int len = strlen(string);
int isPalindrome=0;
for(int i=0; i<len/2; i++){
if(string[i]==string[len-i-1]){
    isPalindrome=1;
    break;
}
}

if(isPalindrome==1){
    printf("YES\n");
}else{
    printf("NO\n");
}

return 0;
}