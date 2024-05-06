#include<stdio.h>
int arrayFunction(int* array,int n){
for(int i=0; i<n; i++){
    printf("%d ",array[i]);
}
printf("\n");
printf("%d\n",*(0+ array));//*(array+1) ,  *(1+array),  1[array],  array[1]  

}
int main(){
int n;
scanf("%d",&n);
int array[n];
for(int i=0; i<n; i++){
scanf("%d",&array[i]);
}
arrayFunction(array,n);

return 0;
}