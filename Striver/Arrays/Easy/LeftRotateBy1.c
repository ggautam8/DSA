#include<stdio.h>

int main() {
    int n;

    printf("Enter size of array: \n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements of array: \n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nArray: [");
    for (int i = 0; i < n; i++) {
        printf(" %d ", arr[i]);
    }
    printf("]");

    int temp = arr[0];
    printf("\nRotated array: [");
    for (int i = 0; i < n; i++) {
        arr[i] = arr[i + 1];

        if (i == n - 1) {
            arr[n - 1] = temp;
        }
        printf(" %d ", arr[i]);
    }
    printf("]");
}