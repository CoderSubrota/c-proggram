#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int a[n];
    int min_value = 100000001, min_freq = 0;
    
    // Input array elements and find the minimum value and its frequency
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] < min_value) {
            min_value = a[i];
            min_freq = 1;
        } else if (a[i] == min_value) {
            min_freq++;
        }
    }
    
    // Check if the frequency of the minimum element is odd
    if (min_freq % 2 == 1) {
        printf("Lucky\n");
    } else {
        printf("Unlucky\n");
    }
    
    return 0;
}
