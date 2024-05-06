#include<stdio.h>
#include<string.h>
int main(){
char mango[1000];
char lamon[1000];
scanf("%s %s", &mango, &lamon);
int len = strlen(lamon);
for(int i=0; i<=len; i++){//if need to print 3 than len=2
mango[i]=lamon[i];
}

printf("%s %s", mango,lamon);

return 0;
}