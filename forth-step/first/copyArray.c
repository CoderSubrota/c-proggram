#include <stdio.h>
int main()
{
// first array
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    // second arrray
   int m;
    scanf("%d", &m);
    int array2[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &array2[i]);
    }

    // insert array elements
     int array3[m+n];
    for (int i = 0; i < n; i++)
    {
        array3[i] = array[i];
    }
    //second array;
    int i=n; 
    for (int j = 0; j < m; j++)
    {
        array3[i] = array2[j];
        i++;
    }
 
    // print array3
    for (int i= 0;i < m + n;i++)
    {
        printf("%d ", array3[i]);
    }
}