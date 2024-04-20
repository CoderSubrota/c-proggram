#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
   int result;
for(int i=n;  i>=1; i=i-1){
    if(n%i==0){
      result = n/i;
       printf("%d\n",result);
    }
    
}
    return 0;
}