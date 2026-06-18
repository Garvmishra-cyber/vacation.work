//question70
#include <stdio.h>

int main() {
    int n, i, j, minIndex, temp;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Selection Sort
    for(i = 0; i < n - 1; i++) {
        minIndex = i;

        for(j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // swap minimum element with first unsorted element
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    printf("Sorted array (Ascending):\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}