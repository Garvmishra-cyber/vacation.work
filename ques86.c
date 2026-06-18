//question86
#include <stdio.h>

int main() {
    char str[200];
    int i = 0, words = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Count words
    while(str[i] != '\0') {

        // If current char is space and next is not space/newline/null → new word
        if((str[i] == ' ' || str[i] == '\n') &&
           (str[i + 1] != ' ' && str[i + 1] != '\n' && str[i + 1] != '\0')) {
            words++;
        }

        i++;
    }

    // If string is not empty, add 1 word
    if(str[0] != '\n' && str[0] != '\0') {
        words++;
    }

    printf("Number of words = %d\n", words);

    return 0;
}