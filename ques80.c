//question80
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

    printf("Column-wise sum:\n");

    for(j = 0; j < c; j++) {
        sum = 0;

        for(i = 0; i < r; i++) {
            sum += a[i][j];
        }

        printf("Sum of column %d = %d\n", j + 1, sum);
    }

    return 0;
}