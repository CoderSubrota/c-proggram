#include<stdio.h>
void arrayFunction(int array[], int n, int i){
if(i==n) {return;} ;
arrayFunction(array,n,i+1); 
printf("%d ", array[i]);
}
int main(){
int n;
scanf("%d",&n);
int array[n];
for(int i=0; i<n; i++){
scanf("%d",&array[i]);
}
arrayFunction(array, n, 0);
return 0;
}