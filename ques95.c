//question 95
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int maxLen = 0, currLen = 0;
    int start = 0, maxStart = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int n = strlen(str);

    for (int i = 0; i <= n; i++) {
        // If not space and not end of string
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            if (currLen == 0) {
                start = i; // mark start of word
            }
            currLen++;
        } else {
            // end of word
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStart = start;
            }
            currLen = 0;
        }
    }

    printf("Longest word: ");
    for (int i = maxStart; i < maxStart + maxLen; i++) {
        printf("%c", str[i]);
    }

    printf("\nLength: %d\n", maxLen);

    return 0;
}