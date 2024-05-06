#include<stdio.h>
int my_len(char* string){
int count=0;
int i=0;
while (string[i]!='\0')
{
    count++;
    i++;
}
return count;
}
int main(){
char string[100001];
scanf("%s",&string);
int printCount = my_len(string);
printf("%d",printCount);
return 0;
}