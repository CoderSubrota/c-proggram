#include <stdio.h>
int countVowel(char string[], int i)
{
    if (string[i] == '\0')
    {
        return 0;
    };
    int ans = countVowel(string, i + 1);
    if (string[i] >= 'A' && string[i] <= 'Z')
    {
        string[i] += 32;
    }
    if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' ||
        string[i] == 'o' || string[i] == 'u')
    {
        return ans + 1;
    }
    else
    {
        return ans;
    }
}
int main()
{
    char string[100001];
    scanf("%[^\n]s", string);
    int res = countVowel(string, 0);
    printf("%d", res);
    return 0;
}