//question93
#include <stdio.h>
#include <string.h>

int main() {
    char s1[200], s2[200], temp[400];

    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);

    // Remove newline characters if present
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    // Check lengths
    if(strlen(s1) != strlen(s2)) {
        printf("Not a rotation\n");
        return 0;
    }

    // Create concatenated string
    strcpy(temp, s1);
    strcat(temp, s1);

    // Check substring
    if(strstr(temp, s2) != NULL) {
        printf("Strings are rotation of each other\n");
    } else {
        printf("Not a rotation\n");
    }

    return 0;
}