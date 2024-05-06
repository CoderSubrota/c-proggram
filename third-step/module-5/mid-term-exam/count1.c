#include<stdio.h>
int main(){
 int n;
scanf("%d",&n);
 int array[n],i,j;
for(i=0; i<n; i++){
scanf("%d",&array[i]);
} 
 int twoNumberDivideableCount=0,threeNumberDivideableCount=0;

for(j=0; j<n; j++){
if(array[j]%2==0 && array[j]%3==0){
twoNumberDivideableCount++;
}else if(array[j]%3==0){
threeNumberDivideableCount++;
}
else if(array[j]%2==0){
twoNumberDivideableCount++;
}


}

printf("%d %d\n",twoNumberDivideableCount,threeNumberDivideableCount);
return 0;
}