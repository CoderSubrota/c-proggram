#include<stdio.h>
int main(){
int a,b;
printf("Enter row\n");
printf("Enter column\n");
scanf("%d %d",&a,&b);

int i,j;
for(i=1; i<=a; i++){
    for(j=1; j<=b; j++){
        printf("%d ",j);
    }
    printf("\n");
}
return 0;
}