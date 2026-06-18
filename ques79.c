//question79
#include <stdio.h>

int main() {
    int r, c, i, j, sum;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    int a[r][c];

    printf("Enter elements of matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Row-wise sum:\n");

    for(i = 0; i < r; i++) {
        sum = 0;

        for(j = 0; j < c; j++) {
            sum += a[i][j];
        }

        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}