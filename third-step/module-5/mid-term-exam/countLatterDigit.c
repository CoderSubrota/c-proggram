#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
       char s[100001];
        scanf("%s", &s);
        int capCount = 0, smalCount = 0, digitCount = 0;

        for (int i = 0; s[i]!='\0'; i++)
        {
            if (s[i] >= 65 && s[i] <= 90)
            {
                capCount++;
            }
            else if (s[i] >= 97 && s[i] <= 122)
            {
                smalCount++;
            }
            else if (s[i] >= 48 && s[i] <= 57)
            {
                digitCount++;
            }
        }
        printf("%d %d %d\n",capCount,smalCount,digitCount);
    }

    return 0;
}