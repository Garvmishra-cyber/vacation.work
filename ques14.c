//question14
#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c, i;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n == 0)
        printf("Nth Fibonacci term = 0\n");
    else if (n == 1)
        printf("Nth Fibonacci term = 1\n");
    else {
        for (i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }

        printf("Nth Fibonacci term = %d\n", b);
    }

    return 0;
}