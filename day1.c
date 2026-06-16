// sum of n natural no.
#include <stdio.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int sum = n * (n + 1) / 2;

    printf("Sum = %d\n", sum);
    return 0;
}