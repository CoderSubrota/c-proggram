#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    for(int i=0; i<T; i++){
    char str[100001];
    scanf("%s",&str);
    long long int length=strlen(str);
    if(length<=10){
    printf("%s\n",str);
    }else{
      printf("%c%lld%c\n",str[0],length-2,str[length-1]);
    }
    }
  //0 1 2 3 4
  //5 - 1 = 4
  
    return 0;
}
