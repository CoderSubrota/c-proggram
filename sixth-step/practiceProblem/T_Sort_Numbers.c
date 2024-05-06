#include <stdio.h>
int sort(int *array, int n);
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int sortingArray[3] = {a, b, c};
    int orginalNumbers[3] = {a, b, c};
    sort(sortingArray, 3);
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", orginalNumbers[i]);
    }

    return 0;
}

int sort(int *sortingArray, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (sortingArray[i] > sortingArray[j])
            {
                int temp = sortingArray[i];
                sortingArray[i] = sortingArray[j];
                sortingArray[j] = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", sortingArray[i]);
    }
}
