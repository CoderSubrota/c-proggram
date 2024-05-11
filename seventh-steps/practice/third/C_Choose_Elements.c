#include <stdio.h>
#include <stdlib.h>

// Function to compare two integers (used for sorting)
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n, k;
    
    // Read the input values
    scanf("%d %d", &n, &k);
    
    int a[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    // Sort the array in non-decreasing order
    qsort(a, n, sizeof(int), compare);
    
    // Calculate the maximum summation by considering the first k elements
    long long max_sum = 0;
    for (int i = n - 1; i >= n - k; i--) {
        max_sum += a[i];
    }
    
    // Print the maximum summation
    printf("%lld\n", max_sum);
    
    return 0;
}
