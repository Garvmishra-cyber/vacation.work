//question40
#include <stdio.h>

int main() {
    int n = 5, i, j;

    for(i = 1; i <= n; i++) {

        for(j = 0; j < i; j++)
            printf("%c", 'A' + j);

        for(j = i - 2; j >= 0; j--)
            printf("%c", 'A' + j);

        printf("\n");
    }

    return 0;
}