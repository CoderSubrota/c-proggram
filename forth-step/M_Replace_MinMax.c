#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
long long int array[n];
for(int i=0; i<n; i++){
scanf("%lld",&array[i]);
}
int minimumNumber=array[0];
int maximumNumber=array[0];
int minIndex=0;
int maxIndex=0;

for(int i=0; i<n; i++){
 if(array[i]<minimumNumber){
    minimumNumber=array[i];
    minIndex=i;
 }

 if(array[i]>maximumNumber){
    maximumNumber=array[i];
    maxIndex=i;
 }
}
int temp = array[minIndex];
array[minIndex]=array[maxIndex];
array[maxIndex]=temp;

for(int i=0; i<n; i++){
printf("%lld ", array[i]);
}

return 0;
}