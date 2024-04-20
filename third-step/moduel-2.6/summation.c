#include<stdio.h>
int main(){
long long int n;
scanf("%lld",&n);
long long int array[n];
long long int sum=0;

for(int i=0; i<n; i++){
    scanf("%lld",&array[i]); 
}

for(int i=0; i<n; i++){
     sum+=array[i];
}

printf("%lld",abs(sum));
return 0;
}