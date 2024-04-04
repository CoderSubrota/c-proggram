#include <stdio.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
int n;
scanf("%d",&n);
for(int i=1; i<=n; i++){
    if(i%5==0){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
}
    return 0;
}
