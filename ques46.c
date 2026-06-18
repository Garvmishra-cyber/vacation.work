//question46
#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int original = n, temp = n;
    int digits = 0;
    int sum = 0;

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = n;

    while (temp > 0) {
        int digit = temp % 10;
        sum += (int)pow(digit, digits);
        temp /= 10;
    }

    return (sum == original);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isArmstrong(n))
        printf("Armstrong Number\n");
    else
        printf("Not an Armstrong Number\n");

    return 0;
}