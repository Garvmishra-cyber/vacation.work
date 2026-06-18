//question48
#include <stdio.h>

int isPerfect(int n) {
    int sum = 0, i;

    for(i = 1; i <= n / 2; i++) {
        if(n % i == 0)
            sum += i;
    }

    return (sum == n);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(isPerfect(n))
        printf("Perfect Number\n");
    else
        printf("Not a Perfect Number\n");

    return 0;
}