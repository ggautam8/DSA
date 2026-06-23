#include<stdio.h>

int main() {
    int n;

    printf("Enter the size of array:");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements of array: \n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] >= arr[j]) {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }

    printf("\nSorted array: [");
    for (int i = 0; i < n; i++) {
        printf(" %d ", arr[i]);
    }
    printf("]");
}
