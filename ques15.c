//question15
#include <stdio.h>
#include <math.h>

int main() {
    int n, original, digits = 0;
    int temp;
    double sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    temp = n;

    // Count digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;

    // Calculate sum of digits raised to power digits
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if ((int)sum == original)
        printf("Armstrong Number\n");
    else
        printf("Not an Armstrong Number\n");

    return 0;
}