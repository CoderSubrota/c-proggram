#include<stdio.h>
#include<string.h>
int main(){
char s[1000001];
scanf("%s",s);
long long int sum=0;
for(int i=0; i<strlen(s);i++){
    int getS=s[i]-48;
    sum+=getS;
}
printf("%d",sum);
return 0;
}
