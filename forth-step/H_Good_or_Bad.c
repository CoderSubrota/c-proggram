#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);
   int i=1;
    while (i<=T) {
        char S[100001];
        scanf("%s", S);

        int len = strlen(S);
        int good=0;

        for (int i = 0; i < len; ++i) {
            if ((S[i] == '0' && S[i+1] == '1' && S[i+2] == '0') ||
                (S[i] == '1' && S[i+1] == '0' && S[i+2] == '1')) {
                good=1;
                break;
            }
        }

        if (good)
            printf("Good\n");
        else
            printf("Bad\n");
            i++;
    }

    return 0;
}
