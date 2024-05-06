#include <stdio.h>
#include <string.h>

int main()
{
    char S[1000001];
    scanf("%s", S);

    int counts[26];
     memset(counts,0,sizeof(counts));
    for (int i = 0; S[i]!='\0'; i++)
    {
        counts[S[i] - 'a']++;
    }
  
    for(char c=97; c<=122; c++){
     if(counts[c-97]>0){
        printf("%c : %d\n",c, counts[c-97]);
     }        
    }

    return 0;
}


//------------- Accepted-----------//

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char S[10000001]; // Assuming the maximum length of the string is 10^7
//     scanf("%s", S);

//     // Array to store count of each letter
//     int counts[26]; // Assuming only lowercase English letters
//     memset(counts, 0, sizeof(counts)); // Initializing counts array with 0s

//     // Counting occurrences of each letter
//     for (int i = 0; S[i] != '\0'; i++) {
//         counts[S[i] - 'a']++;
//     }

//     // Output counts
//     for (char c = 'a'; c <= 'z'; c++) {
//         if (counts[c - 'a'] > 0) {
//             printf("%c : %d\n", c, counts[c - 'a']);
//         }
//     }

//     return 0;
// }
