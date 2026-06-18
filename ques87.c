//question87
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

    printf("Character frequencies:\n");

    for(i = 0; i < 256; i++) {
        if(freq[i] > 0 && i != '\n') {
            printf("'%c' = %d\n", i, freq[i]);
        }
    }

    return 0;
}