#include<stdio.h>
int main(){
char word;
scanf("%c",&word);
if(word>=97&&word<122){
    printf("%c", word+1);
}else if (word==122)
{
    printf("%c", word-25);
}

return 0;
}
