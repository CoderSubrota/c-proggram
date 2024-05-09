#include <stdio.h>

int main() {
    int N, M, X;
    scanf("%d %d", &N, &M); // Input the size of the 2D array
    int A[N][M];
    
    // Input the elements of the 2D array
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    
    scanf("%d", &X); // Input the number X
    
    // Variable to check if X exists
    int exists = 0;
    
    // Iterate through the 2D array to check if X exists
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (A[i][j] == X) {
                exists = 1;
                break;
            }
        }
        if (exists) {
            break;
        }
    }
    
    // Output the result
    if (exists) {
        printf("will not take number\n");
    } else {
        printf("will take number\n");
    }
    
    return 0;
}
