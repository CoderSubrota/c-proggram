#include<stdio.h>
int main(){
int n,m;
scanf("%d %d",&n,&m);
int counts[m+1];
for(int i=0; i<m+1; i++){
counts[i]=0;
}
for(int i=0; i<n; i++){
int num;
scanf("%d",&num);
counts[num]++;
}
for(int i=0; i<m+1; i++){
    if(counts[i]!=0){
        printf("%d\n",counts[i]);
    }
}
return 0;
}