#include<stdio.h>
#include<limits.h>
int main(){
int n;
scanf("%d",&n);
int array[n];
for(int i=0;i<n; i++){
    scanf("%d",&array[i]);
}
int minNum = INT_MAX;
int maxNum=INT_MIN;
int minIndex=0;
int maxIndex=0;
for(int i=0; i<n; i++){
if(array[i]<minNum){
    minNum=array[i];
    minIndex=i;
}
if(array[i]>maxNum){
    maxNum=array[i];
    maxIndex=i;
}
}
int temp=array[minIndex];
array[minIndex]=array[maxIndex];
array[maxIndex]=temp;
for(int i=n-1; i>=0; i--){
    printf("%d ", array[i]);
}
}