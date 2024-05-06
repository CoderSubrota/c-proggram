#include<stdio.h>
int main(){
int testCase;
scanf("%d",&testCase);
for(int i=1; i<=testCase;i++){
int key;
scanf("%d",&key);

int arr[3+1];

for(int j=0; j<3;j++){
scanf("%d",&arr[j]);
}


//
if(arr[key]==0){
    printf("NO\n");
}
else{
    printf("YES\n");
}
}
return 0;
}