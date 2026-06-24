#include<stdio.h>

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

    printf("Before merge sort: [");
    for (int i = 0; i < n; i++) {
        printf(" %d ", arr[i]);
    }
    printf("]");

    //  5   7   8   4   1   9

    for (int i = 0; i < )


    printf("\nSorted array: [");

    for (int i = 0; i < n; i++) {
        printf(" %d ", arr[i]);
    }

    printf(" ]");
}