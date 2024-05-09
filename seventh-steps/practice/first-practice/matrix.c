#include <stdio.h>
#include <stdlib.h> // For abs function

int main() {
    int n;
    scanf("%d", &n); // Input the size of the matrix
    
    int matrix[n][n];
    
    // Input the elements of the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int primary_sum = 0;
    int secondary_sum = 0;
    
    // Calculate the summation of the primary diagonal
    for (int i = 0; i < n; i++) {
        primary_sum += matrix[i][i];
    }
    
    // Calculate the summation of the secondary diagonal
    for (int i = 0; i < n; i++) {
        secondary_sum += matrix[i][n - i - 1];
    }
    
    // Calculate the absolute difference between the two diagonals
    int absolute_difference = abs(primary_sum - secondary_sum);
    
    // Output the absolute difference
    printf("%d\n", absolute_difference);
    
    return 0;
}
