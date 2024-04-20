#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate the sum of integers from 1 to n
   int long long sum = n * (n + 1) / 2;

    // Print the result
    printf("Sum of integers from 1 to %d is %lld\n", n, sum);

    return 0;
}
