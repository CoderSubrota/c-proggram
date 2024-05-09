#include <stdio.h>
#include <string.h>

// Function to check if a string is palindrome recursively
int isPalindrome(char str[], int start, int end) {
    // Base case: if start index crosses end index, it's a palindrome
    if (start >= end)
        return 1;
    
    // If characters at start and end index are not equal, it's not a palindrome
    if (str[start] != str[end])
        return 0;
    
    // Recursively check the remaining substring excluding start and end characters
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    char S[1001];
    scanf("%s", S);

    int length = strlen(S);

    // Check if the string is palindrome using the isPalindrome function
    if (isPalindrome(S, 0, length - 1))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
