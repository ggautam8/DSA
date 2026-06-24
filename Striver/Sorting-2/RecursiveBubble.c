#include<stdio.h>

void recursiveBubble(int arr[], int m, int j) {

    if (m == 0) {
        return;
    }
    if (j < m) {
        if (arr[j] > arr[j + 1]) {
            int temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
        }
    }
    j++;
    if (j == m) {
        m--;
        j = 0;
    }

    recursiveBubble(arr, m, j);
}

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

    recursiveBubble(arr, n - 1, 0);

    printf("Sorted array: [");
    for (int i = 0; i < n; i++) {
        printf(" %d ", arr[i]);
    }
    printf("]");
}