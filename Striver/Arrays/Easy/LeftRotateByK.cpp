#include<stdio.h>

int main() {
    int n, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("\nEnter k : ");
    scanf("%d", &k);

    if (k > n) {
        k = k - n;
    }

    int arr[n + k];
    printf("Enter elements of array: \n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }


    for (int i = 0; i < k; i++) {
        arr[n + i] = arr[i];
    }

    for (int i = k; i < n + k; i++) {
        printf(" %d ", arr[i]);
    }
}