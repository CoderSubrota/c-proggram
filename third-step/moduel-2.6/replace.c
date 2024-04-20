#include<stdio.h>
int main(){
long long int n,i;
scanf("%lld",&n);
long long int array[n];
for(i=0; i<n; i++){
    scanf("%lld",&array[i]);
    if(array[i]>0){
        array[i]=1;
    }else if(array[i]<0){
        array[i]=2;
    }
         printf("%lld ",array[i]);
}

    return 0;
}