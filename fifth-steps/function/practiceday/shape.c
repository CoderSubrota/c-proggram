#include<stdio.h>
int main(){
int n,k;
scanf("%d",&n);
k=n;//5
for(int i=1; i<=n; i++){
for(int j=1; j<=k; j++){
printf("*");
}
k--;//5 4 3 2 1
printf("\n");
}
return 0;
}