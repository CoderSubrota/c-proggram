#include<stdio.h>
void fun (double * arr, int n){
for(int i=0; i<n;i++){
    printf("%0.2lf ",arr[i]);
}
}
int main(){
double arr[5] = {10.10,20.10,55.00,14.00,28.00};
fun(arr,5);
return 0;
}