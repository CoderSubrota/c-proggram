#include <stdio.h>
#include <string.h>
int isPalindrome(char str[], int start, int end);
int main()
{
    char str[100001];
    scanf("%s", &str);
    int length = strlen(str);
    int check = isPalindrome(str, 0, length - 1);
    if (check == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}

int isPalindrome(char str[], int start, int end)
{
    if (start >= end)
    {
        return 1;
    }
    if (str[start] != str[end])
        return 0;
    else
        return 1;
    isPalindrome(str, start + 1, end - 1);
}

    //size 4 => 0 -> 3 
    //4-1 => 3-1 
    //0 + 1 