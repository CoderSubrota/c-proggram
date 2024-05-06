#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int numArray[10001];
for(int i=0; i<n; i++){
 scanf("%d",&numArray[i]);
}
int count[10001];
for(int i=0; i<n; i++){
int val = numArray[i];
count[val]++;
}
//4 5 8=> 0 1 2
for(int i=0; i<n; i++){
if(count[i]!=0){
printf("%c = %d = %d\n", i+65, i, count[i]);// 0  1 2 3
}
}
return 0;
}