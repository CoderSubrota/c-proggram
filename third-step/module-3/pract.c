#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int numbers[N];
    for (int i = 0; i < N; ++i) {
        scanf("%d", &numbers[i]);
    }

    int even_count = 0;
    int odd_count = 0;
    int positive_count = 0;
    int negative_count = 0;

    for (int i = 0; i < N; ++i) {
        if (numbers[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }

        if (numbers[i] > 0) {
            positive_count++;
        } else if (numbers[i] < 0) {
            negative_count++;
        }
    }

    printf("Even: %d\n", even_count);
    printf("Odd: %d\n", odd_count);
    printf("Positive: %d\n", positive_count);
    printf("Negative: %d\n", negative_count);

    return 0;
}
