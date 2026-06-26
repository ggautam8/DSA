#include<stdio.h>

int main() {
    int n, count = 0, q = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], arr2[q];
    printf("Enter elements in sorted order: \n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] < arr[i + 1]) {
            arr2[q] = arr[i];
            q++;
        }

    }

    printf("\nNumber of unique numbers: %d", q);

    printf("\nArray after removing duplicates: [");
    for (int i = 0; i < q; i++) {
        printf(" %d ", arr2[i]);
    }
    printf("]");
}