//question47
#include <stdio.h>

int fibonacci(int n) {
    int a = 0, b = 1, c, i;

    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Nth Fibonacci term = %d\n", fibonacci(n));

    return 0;
}