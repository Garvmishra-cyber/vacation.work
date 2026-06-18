//question 94
#include <stdio.h>
#include <string.h>

void compressString(char str[]) {
    int n = strlen(str);

    for (int i = 0; i < n; i++) {
        int count = 1;

        // Count consecutive same characters
        while (i < n - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }

        // Print character and its count
        printf("%c%d", str[i], count);
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Compressed string: ");
    compressString(str);

    return 0;
}