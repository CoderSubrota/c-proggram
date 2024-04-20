#include <stdio.h>

int get_second_digit(int num) {
    int second_digit;
    num = num % 100; // Get the last two digits
    second_digit = num / 10;
    return second_digit;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Second digit of %d = %d\n", number, get_second_digit(number));
    return 0;
}
