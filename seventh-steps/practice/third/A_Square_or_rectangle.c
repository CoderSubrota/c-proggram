#include<stdio.h>
int main(){
int T;
scanf("%d",&T);
for(int i=1; i<=T; i++){
int w,h;
scanf("%d %d",&w,&h);
if(w==h){
printf("Square\n");   
}else{
printf("Rectangle\n");
}
}
return 0;
}
