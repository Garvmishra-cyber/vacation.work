//question61
#include <stdio.h>

int main() {
    int n, i, sum = 0, arraySum = 0;

    printf("Enter value of n: ");
    scanf("%d", &n);

    int arr[n-1];

    printf("Enter %d elements:\n", n-1);
    for(i = 0; i < n-1; i++) {
        scanf("%d", &arr[i]);
        arraySum += arr[i];
    }

    sum = n * (n + 1) / 2;

    printf("Missing number = %d\n", sum - arraySum);

    return 0;
}