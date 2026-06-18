//question63
#include <stdio.h>

int main() {
    int n, sum, i, j;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter target sum: ");
    scanf("%d", &sum);

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == sum) {
                printf("Pair found: (%d, %d)\n", arr[i], arr[j]);
                return 0;
            }
        }
    }

    printf("No pair found\n");

    return 0;
}