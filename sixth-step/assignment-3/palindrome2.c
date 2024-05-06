
#include <stdio.h>
#include<string.h>
int isPalindrome(char string[]);
int main(){
char string[100001];
scanf("%s",&string);
int result = isPalindrome(string); 
if(result==1){
    printf("%s is a Palindrome",string);
}else{
    printf("%s Not Palindrome",string);
}
}

int isPalindrome(char string[]){
int length = strlen(string);
for(int i=0;i<length/2; i++){//half
    if(string[i]!=string[length-i-1]){//first charecter and last charecter -> 0 -> 6 -> 7 
        return 0;
    }
    return 1;
}
}



//university

//if length 10 for palindrome checking  
//loop half of length 10/2 -> 5 times 
//char string[100001];   than indexs 0 1 2 3 4 5 6 7 8 9
// u -> y and n -> t and i -> i and v -> s and e -> r 
// if lenght 10 than compare with 10-0-1 = > 9
// f lenght 10 than compare with 10-1-1 = > 8
// f lenght 10 than compare with 10-2-1 = > 7
// f lenght 10 than compare with 10-3-1 = > 6
// f lenght 10 than compare with 10-4-1 = > 5
// f lenght 10 than compare with 10-5-1 = > 4
// f lenght 10 than compare with 10-6-1 = > 3
// f lenght 10 than compare with 10-7-1 = > 2
// f lenght 10 than compare with 10-8-1 = > 1
// f lenght 10 than compare with 10-9-1 = > 0

//if last threee digits charecters same than everything is good for palindrome.