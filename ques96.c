//question 96
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], result[100];
    int i, j, k = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);

    for (i = 0; i < len; i++) {
        int found = 0;

        // check if character already exists in result
        for (j = 0; j < k; j++) {
            if (str[i] == result[j]) {
                found = 1;
                break;
            }
        }

        // if not found, add to result
        if (!found) {
            result[k] = str[i];
            k++;
        }
    }

    result[k] = '\0';

    printf("String after removing duplicates: %s\n", result);

    return 0;
}