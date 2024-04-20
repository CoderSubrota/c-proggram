#include <stdio.h>

int main() {
    int N;
    printf("Enter the value of N (sum of 5 consecutive even numbers): ");
    scanf("%d", &N);

    // Calculate the first even number
    int first_even = (N/5)-6;

    // Print the 5 consecutive even numbers
    printf("The 5 consecutive even numbers are: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", first_even + 2 * i);
    }

    return 0;
}

