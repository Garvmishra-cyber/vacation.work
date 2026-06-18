//question71
#include <stdio.h>

int main() {
    int n, i, key, low, high, mid, found = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter sorted elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == key) {
            found = 1;
            printf("Element found at index %d\n", mid);
            break;
        }
        else if(arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if(found == 0) {
        printf("Element not found\n");
    }

    return 0;
}