#include <stdio.h>

// Function to find the greatest common divisor (GCD)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to simplify a fraction
void simplify_fraction(int numerator, int denominator) {
    // Finding the greatest common divisor
    int divisor = gcd(numerator, denominator);
    
    // Simplifying the fraction
    numerator /= divisor;
    denominator /= divisor;
    
    // Printing the simplified fraction
    if (denominator == 1) {
        printf("%d\n", numerator);
    } else {
        printf("%d/%d\n", numerator, denominator);
    }
}

int main() {
    // Variables to store numerator and denominator
    int numerator, denominator;
    
    // Input numerator and denominator
    scanf("%d/%d", &numerator, &denominator);
    
    // Call the function to simplify the fraction
    simplify_fraction(numerator, denominator);
    
    return 0;
}
