//question7
#include <stdio.h>

int main() {
    int n;
    int product = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
        n = -n;  // Handle negative numbers

    if (n == 0)
        product = 0;
    else {
        while (n > 0) {
            product *= n % 10;  // Multiply by last digit
            n /= 10;            // Remove last digit
        }
    }

    printf("Product of digits = %d\n", product);

    return 0;
}