#include<stdio.h>
#include<string.h>
int main(){
char a[100001];
char b[100001];
scanf("%s %s",&a,&b);
int lengthA= strlen(a);
int lengthB=strlen(b);
printf("%d %d\n",lengthA,lengthB);
printf("%s%s\n",a,b);
int temp=a[0];
a[0]=b[0];
b[0]=temp;
printf("%s %s",a,b);
return 0;
}