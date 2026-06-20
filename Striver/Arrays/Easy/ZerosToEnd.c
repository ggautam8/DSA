#include<stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements of array: \n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nArray : [");
    for (int i = 0; i < n; i++) {
        printf(" %d ", arr[i]);
    }
    printf("]");

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == 0) {
            arr[i] = arr[i + 1];
            arr[i + 1] = 0;
        }
    }

    printf("\nModified array: [");
    for (int i = 0; i < n; i++) {
        printf(" %d ", arr[i]);
    }
    printf("]");
}