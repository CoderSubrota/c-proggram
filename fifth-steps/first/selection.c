#include <stdio.h>
#define GREEN "\033[32m"
int main()
{
    int n;
    scanf("%d", &n);
    printf(GREEN);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    // as
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] > array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
     
  //ds
  for(int m=0; m<n-1; m++){
    for(int p=m+1; p<n; p++){
        if(array[m]<array[p]){
            int temp = array[m];
            array[m]=array[p];
            array[p]=temp;
        }
    }
  }
printf("\n");
for(int u=0; u<n; u++){
    printf("%d ",array[u]);
}
    return 0;
}