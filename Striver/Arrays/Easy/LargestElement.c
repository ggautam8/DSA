#include <limits.h>
#include<stdio.h>

int main() {
    int n;

    printf("Enter size of array : ");
    scanf("%d", &n);

    int arr[n], max = INT_MIN;

    printf("Enter elements of array: \n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Array: [ ");
    for (int i = 0; i < n; i++) {
        printf(" %d ",arr[i]);
    }
    printf("]");

    printf("\nLargest element: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] >= max) {
            max = arr[i];
        }
    }
    printf(" %d ", max);
}