//question 66
#include <stdio.h>

int main() {
    int n1, n2, i, j, k = 0;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int a[n1];
    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int b[n2];
    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    int c[n1 + n2];

    // copy first array
    for(i = 0; i < n1; i++) {
        c[k++] = a[i];
    }

    // add elements of second array if not already present
    for(i = 0; i < n2; i++) {
        int found = 0;

        for(j = 0; j < k; j++) {
            if(b[i] == c[j]) {
                found = 1;
                break;
            }
        }

        if(!found) {
            c[k++] = b[i];
        }
    }

    printf("Union of arrays:\n");
    for(i = 0; i < k; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}