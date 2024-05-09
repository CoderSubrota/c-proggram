void printIndices(int array[], int n, int i){
if(i==n) return ;

printIndices(array, n, i+1);

if(i%2==0){
printf("%d",array[i]);
if(i!=n){
    printf(" ") ;
}
}

}
#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int array[n];
for(int i=0; i<n; i++){
scanf("%d",&array[i]);
}
printIndices(array,n,0);
return 0;
}