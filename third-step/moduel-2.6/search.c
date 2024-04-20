#include<stdio.h>
int main(){
long long int n,i,index=-1;
scanf("%lld",&n);
long long int array[n];
for(i=0;  i<n; i++){
scanf("%lld",&array[i]);
}
long long int x;
scanf("%lld",&x);

for(i=0;  i<n; i++){
 if(x==array[i]){
    index=i;
    break;
 }
}

printf("%lld",index);

    return 0;
}