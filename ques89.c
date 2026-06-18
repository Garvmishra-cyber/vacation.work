//question89
#include <stdio.h>

int main() {
    char str[200];
    int freq[256] = {0};
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count frequency of each character
    while(str[i] != '\0') {
        freq[(unsigned char)str[i]]++;
        i++;
    }

    // Find first non-repeating character
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != '\n' && freq[(unsigned char)str[i]] == 1) {
            printf("First non-repeating character = %c\n", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found\n");

    return 0;
}