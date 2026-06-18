//question91
#include <stdio.h>
#include <string.h>

int main() {
    char str1[200], str2[200];
    int freq[256] = {0};
    int i;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Count frequency of first string
    for(i = 0; str1[i] != '\0'; i++) {
        if(str1[i] != '\n')
            freq[(unsigned char)str1[i]]++;
    }

    // Subtract frequency using second string
    for(i = 0; str2[i] != '\0'; i++) {
        if(str2[i] != '\n')
            freq[(unsigned char)str2[i]]--;
    }

    // Check if all frequencies are zero
    for(i = 0; i < 256; i++) {
        if(freq[i] != 0) {
            printf("Strings are NOT Anagrams\n");
            return 0;
        }
    }

    printf("Strings are Anagrams\n");

    return 0;
}