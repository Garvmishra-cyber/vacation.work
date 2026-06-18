//question92
#include <stdio.h>

int main() {
    char str[200];
    int freq[256] = {0};
    int i;
    char maxChar;
    int max = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count frequency of each character
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != '\n') {
            freq[(unsigned char)str[i]]++;
        }
    }

    // Find maximum occurring character
    for(i = 0; i < 256; i++) {
        if(freq[i] > max) {
            max = freq[i];
            maxChar = (char)i;
        }
    }

    printf("Maximum occurring character = %c\n", maxChar);
    printf("Frequency = %d\n", max);

    return 0;
}