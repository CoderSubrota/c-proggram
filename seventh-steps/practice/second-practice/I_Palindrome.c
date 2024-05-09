#include <stdio.h>
#include <string.h>
int isPalindrome(char str[], int i)
{
    int length = strlen(str);
    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char str[100001];
    scanf("%s", &str);
    int res = isPalindrome(str, 0);
    if (res == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}