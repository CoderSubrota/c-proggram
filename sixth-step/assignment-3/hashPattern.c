#include<stdio.h>
int main(){
int n,k,s;
scanf("%d",&n);
k=1;
s=n-1;
for(int i=1; i<=(n*2)-1; i++){
for(int j=1;j<=s ;j++){
        printf(" ");
    }

if(i%2!=0){
     for(int j=1; j<=k; j++){
        printf("#");
    }
}

if(i%2==0){
     for(int j=1; j<=k; j++){
        printf("-");
    }
}


    if(i < n){
        k=k+2;
        s--;
    }
    if(i>=n){
        k=k-2;
        s++;
    }
printf("\n");
}

return 0;
}