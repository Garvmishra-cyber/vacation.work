//question78
#include <stdio.h>

int main() {
    int n, i, j, isSymmetric = 1;

    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter elements of matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Check symmetry
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(a[i][j] != a[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if(isSymmetric == 0)
            break;
    }

    if(isSymmetric)
        printf("Matrix is Symmetric\n");
    else
        printf("Matrix is Not Symmetric\n");

    return 0;
}
