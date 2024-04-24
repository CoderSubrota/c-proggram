#include<stdio.h>
int main(){
int n;
int arr[n];
scanf("%d",&n);
int evenSum=0;
int oddSum=0;
for(int i=0; i<n; i++){
scanf("%d",&arr[i]);
}

for(int j=0; j<n; j++){
    if(arr[j]%2!=0){
    oddSum+=arr[j];
    }else{
        evenSum+=arr[j] ;
    }
  ;
}
   printf("\nSum of even numbers = %d\n",evenSum);
    printf("\nSum of odd numbers = %d\n",oddSum);
    return 0;
}