#include <stdio.h>

// Function to find the maximum value in an array recursively
int findMax(int arr[], int n) {
    // Base case: if there's only one element, it's the maximum
    if (n == 1)
        return arr[0];
    
    // Recursively find the maximum value in the sub-array from index 1 to n-1
    int maxInSubArray = findMax(arr + 1, n - 1);
    
    // Compare the maximum value in the sub-array with the first element of the array
    // and return the maximum of the two
    return (arr[0] > maxInSubArray) ? arr[0] : maxInSubArray;
}

   int main() {
    int N;
    scanf("%d", &N);

    // Check if N is within the given range
    if (N < 1 || N > 1003) {
        printf("Invalid input. N should be between 1 and 1003.\n");
        return 1; // Returning 1 to indicate error
    }

    int arr[N];
    for (int i = 0; i < N; ++i)
        scanf("%d", &arr[i]);

    // Find and print the maximum value in the array
    printf("%d\n", findMax(arr, N));

    return 0;
}
