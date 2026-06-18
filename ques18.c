//question18
#include <stdio.h>

int main() {
    int n, original, digit, sum = 0, i, fact;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n > 0) {
        digit = n % 10;

        fact = 1;
        for (i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
        n /= 10;
    }

    if (sum == original)
        printf("Strong Number\n");
    else
        printf("Not a Strong Number\n");

    return 0;
}