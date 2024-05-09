#include<stdio.h>
#include<stdlib.h>
int main(){
int n;
scanf("%d",&n);
int array[n][n];
for(int i=0;  i<n; i++){
    for(int j=0; j<n; j++){
        scanf("%d",&array[i][j]);
    }
}

int primaryDiagonal=0;
int secondaryDiagonal=0;

for(int i=0; i<n; i++){
    primaryDiagonal+=array[i][i]; // => 0 1 2 3 => 4
}

for(int j=0; j<n; j++){
    secondaryDiagonal+=array[j][n-j-1];//=> 3 2 1 0 => 4
}

int absulteDifference = abs(primaryDiagonal-secondaryDiagonal);
printf("%d",absulteDifference);
return 0;
}