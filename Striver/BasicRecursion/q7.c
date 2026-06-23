#include<stdio.h>

void revArray(int arr[],int n) {

    if (n == 0) {
        return;
    }

    printf(" %d ", arr[n-1]);

    revArray(arr, n - 1);

}

int main() {
    int n;
    int arr[n];

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter elements of array: \n");

    for (int i = 0; i < n; i++) {
        printf("arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Entered array: [");

    for (int i = 0; i < n; i++) {
        printf(" %d ", arr[i]);
    }
    printf("]");

    printf("\nReversed Array: [");

    revArray(arr, n);

    printf("]");
}