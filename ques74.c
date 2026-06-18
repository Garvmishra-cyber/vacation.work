//question 74
#include <stdio.h>

int main() {
    int r, c, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &r);

    printf("Enter number of columns: ");
    scanf("%d", &c);

    int a[r][c], b[r][c], diff[r][c];

    printf("Enter elements of first matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Subtracting matrices
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            diff[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("Difference of matrices:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}