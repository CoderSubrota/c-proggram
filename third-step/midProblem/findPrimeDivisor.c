#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int is_prime(int n) {
    if (n <= 1) return 0; // Not prime if less than or equal to 1
    if (n <= 3) return 1; // 2 and 3 are prime
    
    // Check if n is divisible by 2 or 3
    if (n % 2 == 0 || n % 3 == 0) return 0;
    
    // Check divisibility for numbers of the form 6k +/- 1
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    }
    
    return 1; // n is prime
}

// Function to find prime divisors of N
void prime_divisors(int n) {
    int has_prime_divisors = 0;
    
    // Loop from 2 to sqrt(N)
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0 && is_prime(i)) {
            printf("%d ", i);
            has_prime_divisors = 1;
        }
        while (n % i == 0) {
            n /= i; // Reduce N to its prime factors
        }
    }
    
    // If N is still greater than 1, it's a prime number itself
    if (n > 1 && is_prime(n)) {
        printf("%d", n);
        has_prime_divisors = 1;
    }
    
    // If there are no prime divisors
    if (!has_prime_divisors) {
        printf("-1");
    }
}

int main() {
    int N;
    scanf("%d", &N);
    
    prime_divisors(N);
    
    return 0;
}
