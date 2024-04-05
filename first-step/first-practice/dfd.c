// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int i;
    scanf("%d",&i);
  while(i<=20){
      if(i==11){
        continue;//continue can stop work but can not exit
    }
    //break can stop work and exit
      printf("%d\n",i);
    i++;
  }
  
  
    return 0;
}