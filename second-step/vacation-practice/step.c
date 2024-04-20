#include <stdio.h>

int main() {
    int x; // Coordinate of the friend's house
    printf("Enter the coordinate of your friend's house: ");
    scanf("%d", &x);

    // Calculate the minimum number of steps
    int steps = (x + 2) / 3; // Adding 2 before division to handle rounding up

    printf("Minimum number of steps: %d\n", steps);
    return 0;
}
