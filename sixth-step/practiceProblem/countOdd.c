#include<stdio.h>
void odd_count(int* array, int n){//suppose don't recive params use void
int countOdd=0;
for(int i=0; i<n; i++){
    if(array[i]%2==1){
        countOdd++;
    }
}
printf("%d",countOdd);
}
int main(){
int n;
scanf("%d",&n);
int array[n];
for(int i=0; i<n; i++){
    scanf("%d",&array[i]);
}

odd_count(array,n);
return 0;
}