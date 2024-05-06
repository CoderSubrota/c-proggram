#include <stdio.h>

int countNumbersBeforeOne(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == 1) {
            break; // Stop when '1' is encountered
        }
        count++; // Increment count for each number encountered before '1'
    }
    return count;
}

int main() {
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0; i<n; i++){
    scanf("%d",&arr[i]);
  }
int result =  countNumbersBeforeOne(arr,n);
printf("%d",result);
    return 0;
}
