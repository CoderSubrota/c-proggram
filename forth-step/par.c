#include<stdio.h>
#include<string.h>
int main(){
int n;
scanf("%d",&n);

for(int i=0; i<n; i++){
    char str[100001];
    scanf("%s",&str);
    int len= strlen(str);
    if(len<=10){
        printf("%s\n",str);
    }else{
        printf("%c%d%c\n",str[0],len-2,str[len-1]);
    }
}
//10-2=8 length
//11-1=10index
    return 0;
}