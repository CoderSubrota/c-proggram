
int  increement(int i){
 if(i==0){return;};
 printf("%d",i);

int res = increement(i-1);
printf("\n");

 printf("%d",i);
}
#include<stdio.h>
int main(){
increement(20);
return 0;
}