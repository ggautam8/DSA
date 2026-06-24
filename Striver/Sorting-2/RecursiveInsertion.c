#include<stdio.h>

void recInsert(int arr[], int n, int i, int j, int key) {

    if (i == n) {
        return;
    }

    if (j >= 0 && arr[j] > key) {

        arr[j + 1] = arr[j];

        recInsert(arr, n, i, j - 1, key);
    }

    else {
        arr[j + 1] = key;

        recInsert(arr, n, i + 1, i, arr[i + 1]);
    }
}

int main() {

    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements of array:\n");

    for (int i = 0; i < n; i++) {

        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nArray before sorting: [");

    for (int i = 0; i < n; i++) {
        printf(" %d ", arr[i]);
    }

    printf(" ]");

    recInsert(arr, n, 1, 0, arr[1]);

    printf("\nArray after sorting: [");

    for (int i = 0; i < n; i++) {
        printf(" %d ", arr[i]);
    }

    printf(" ]");

    return 0;
}