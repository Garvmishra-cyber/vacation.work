//question77
#include <stdio.h>

int main() {
    int n, i, j;
    int primarySum = 0, secondarySum = 0;

    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter elements of matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Calculate diagonal sums
    for(i = 0; i < n; i++) {
        primarySum += a[i][i];           // main diagonal
        secondarySum += a[i][n - i - 1]; // secondary diagonal
    }

    printf("Primary diagonal sum = %d\n", primarySum);
    printf("Secondary diagonal sum = %d\n", secondarySum);

    return 0;
}