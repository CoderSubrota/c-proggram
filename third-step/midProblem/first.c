#include <stdio.h>
#include <stdbool.h>

bool isBeautifulYear(int year) {
    bool digits[10] = {false}; // Array to store whether a digit has appeared
    while (year > 0) {
        int digit = year % 10;
        if (digits[digit]) {
            return false; // If the digit has appeared before, the year is not beautiful
        }
        digits[digit] = true; // Mark the digit as appeared
        year /= 10;
    }
    return true; // If no digit repeats, the year is beautiful
}

int main() {
    int year;
    scanf("%d", &year);

    if (year >= 1000 && year <= 9999) {
        if (isBeautifulYear(year)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    } else {
        printf("Invalid input. Year must be between 1000 and 9999.\n");
    }

    return 0;
}
