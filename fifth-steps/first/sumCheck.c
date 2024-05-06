#include<stdio.h>
int main(){
 int n;
 scanf("%d",&n);
 int array[n];
 for(int i=0; i<n;i++){
 scanf("%d",&array[i]);
 }   
 int yes=0;
 int x;
 scanf("%d",&x);
 for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
        if(array[i]+array[j]==x){
            yes=1;
        }
    }
 }
 if(yes==1){
    printf("YES\n");
 }else{
    printf("NO\n");
 }
return 0;
}