//question 64
#include <stdio.h>

int main() {
    int n, i, j, k = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], temp[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        int isDuplicate = 0;

        for(j = 0; j < k; j++) {
            if(arr[i] == temp[j]) {
                isDuplicate = 1;
                break;
            }
        }

        if(!isDuplicate) {
            temp[k] = arr[i];
            k++;
        }
    }

    printf("Array after removing duplicates:\n");
    for(i = 0; i < k; i++) {
        printf("%d ", temp[i]);
    }

    return 0;
}