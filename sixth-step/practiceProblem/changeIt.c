#include<stdio.h>
int change_it(int* array, int n);
int main(){
int n;
scanf("%d",&n);
int array[n];
for(int i=0; i<n; i++){
scanf("%d",&array[i]);
}
change_it(array,n);
return 0;
}

int change_it(int* array, int n){
int countLenght =0;
int i=0;
do{
    countLenght++;
    i++;
}while (i<n);

array[countLenght-1]=100;
int j=0;
while(j<n){
printf("%d ",array[j]);
j++;
}
}