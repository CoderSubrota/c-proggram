#include <stdio.h>
int main()
{
    char firstString[1001];
    char secondString[1001];
    scanf("%s %s", &firstString, &secondString);
    int i = 0;
    while (1)
    {
        if (firstString[i] == '\0')
        {
            printf("%s", firstString);
            break;
        }
        else if (secondString[i] == '\0')
        {
            printf("%s", secondString);
            break;
        }
    //i => acm acpc
        if (firstString[i] == secondString[i])
        {
            i++;
        }
        else if (firstString[i] < secondString[i])
        {
            printf("%s", firstString);
            break;
        }
        else
        {
            printf("%s", secondString);
            break;
        }
    }

    return 0;
}