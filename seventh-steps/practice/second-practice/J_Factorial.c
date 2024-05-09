#include <stdio.h>

// Function to calculate factorial recursively
long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int N;
    scanf("%d", &N);

    // Check if N is within the given range
    if (N < 1 || N > 20) {
        printf("Invalid input. N should be between 1 and 20.\n");
        return 1; // Returning 1 to indicate error
    }

    // Calculate and print the factorial of N
    printf("%lld\n", factorial(N));

    return 0;
}
