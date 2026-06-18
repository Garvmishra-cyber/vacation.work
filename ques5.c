// question5
#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
        n = -n;  // Handle negative numbers

    while (n > 0) {
        sum += n % 10;  // Add last digit
        n /= 10;        // Remove last digit
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}