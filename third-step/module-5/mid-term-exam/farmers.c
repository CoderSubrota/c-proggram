#include<stdio.h>
int main(){
int T,M1,M2,D;
scanf("%d",&T);
for(int i=0; i<T; i++){
scanf("%d %d %d", &M1,&M2,&D);
int totalFarmers=M1+M2;
int D2=(D*M1/totalFarmers);
int result = D-D2;
if(result<0){
result=1;
}
printf("%d\n",result);
}
return 0;
}