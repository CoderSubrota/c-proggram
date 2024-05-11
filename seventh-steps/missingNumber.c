#include<stdio.h>
int main(){
long long int T;
scanf("%lld",&T);
for(int i=1; i<=T; i++){
long long int M,A,B,C;
scanf("%lld %lld %lld %lld",&M,&A,&B,&C);
long long int sumOfNumbers =( A*B*C);
long long int missingNumber = (M/sumOfNumbers);
long long int multiplicationNumber = (missingNumber * sumOfNumbers );
if(multiplicationNumber==M){
 printf("%lld\n",missingNumber);
}else{
    printf("-1\n");
}
}
return 0;
}