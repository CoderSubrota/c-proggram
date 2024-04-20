#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0; i<n; i++){
        scanf("%d",&array[i]);
    }

    for(int i=n-1; i>=0;i--){
        int number=array[i]/10; 
        if(number%2==0){
            printf("%d ",array[i]);
        }
        //  if(array[i]%2==1){
        //     printf("%d ",array[i]); 
        // }
    }

    return 0;
}