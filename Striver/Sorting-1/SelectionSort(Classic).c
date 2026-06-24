#include<stdio.h>
#include<limits.h>

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
    int m = 0;
    for (int i = 0; i < n - 1; i++) {
        int min = INT_MAX;
        for (int j = i; j < n; j++) {
            if (arr[j] < min) {
                min = arr[j];
                m = j;
            }
        }
        int temp = arr[m];
        arr[m] = arr[i];
        arr[i] = temp;
    }

    printf("Sorted array: [");
    for (int i = 0; i < n; i++) {
        printf(" %d ", arr[i]);
    }
    printf("]");
}