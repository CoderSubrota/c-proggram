#include<stdio.h>
int main(){
int n,first_odd,result;
scanf("%d",&n);
first_odd=(n/4)-5;
for(int i=1; i<=4; i++){
  result= first_odd+2*i;
  printf("%d ", result);
}
    return 0;
}