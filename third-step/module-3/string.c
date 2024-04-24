#include <stdio.h>
#include <string.h>

int main() {
    char b = "some\\string\\with\\backslashes";

    printf(strlen(b));
    return 0;
}
