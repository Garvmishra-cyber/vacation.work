//question81
#include <stdio.h>

int main() {
    char str[100];
    int i = 0, length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Calculate length
    while(str[i] != '\0') {
        if(str[i] == '\n') {
            break;  // ignore newline from fgets
        }
        length++;
        i++;
    }

    printf("Length of string = %d\n", length);

    return 0;
}