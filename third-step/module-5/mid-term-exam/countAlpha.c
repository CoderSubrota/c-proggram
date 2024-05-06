#include<stdio.h>
int main(){
int T;
scanf("%d",&T);
for(int i=1; i<=T; i++){
char string[100001];
scanf("%s",&string);
int capitalLatter=0,smallerLatter=0,digits=0;

for(int i=0; string[i]!='\0'; i++){
 if(string[i]>=65 && string[i]<=90){
    capitalLatter++;
 }
  else if(string[i]>=97 && string[i]<=122){
    smallerLatter++;
 }
 else if(string[i]>=48 && string[i]<=57){
    digits++;
 }
}
printf("%d %d %d\n",capitalLatter,smallerLatter,digits);

}
return 0;
}