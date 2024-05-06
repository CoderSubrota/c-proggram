#include<stdio.h>
int  wordFunction(char *  array){
array[0]='S';
}
int main(){
char array[] = "Mona";
printf("%s\n",array);
wordFunction(array);
printf("%s",array);
return 0;
}