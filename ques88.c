//question88
#include <stdio.h>

int main() {
    char str[200], result[200];
    int i = 0, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove spaces
    while(str[i] != '\0') {
        if(str[i] != ' ') {
            result[j] = str[i];
            j++;
        }
        i++;
    }

    result[j] = '\0';

    printf("String without spaces: %s", result);

    return 0;
}