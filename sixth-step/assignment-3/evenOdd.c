#include<stdio.h>
void evenOdd(){
int n;
scanf("%d",&n);
int array[n];
for(int i=0; i<n; i++){
scanf("%d",&array[i]);
}
int even=0;
int odd=0;
for(int i=0; i<n; i++){
if(array[i]%2==0){
    even++;
}else{
    odd++;
}

}
printf("%d %d", even,odd);
}
int main(){
evenOdd();
return 0;
}