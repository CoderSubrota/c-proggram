
void forth(){
        printf("Hello I am forth\n");
}

void third(){
        printf("Hello I am third\n");
               forth(); 
}

void second(){
        printf("Hello I am second\n");
        third();
}
void first(){
    printf("Hello I am first\n");
    second();
}
#include<stdio.h>
int main(){
printf("I am start my operation\n");
first();
printf("I am success to end  my operation\n");
return 0;
}