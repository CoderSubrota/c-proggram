#include<stdio.h>
#include<string.h>
int main(){
char a[10000];
char b[10000];
scanf("%s %s",&a,&b);
int len = strlen(b);
int j=strlen(a);
for(int i=0; i<=len; i++){
    a[j]=b[i];
    j++;
}
printf("%s %s",a,b);
return 0;
}