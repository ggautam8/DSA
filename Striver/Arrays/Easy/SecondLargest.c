#include<stdio.h>
#include<limits.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int max = INT_MIN + 1, arr[n];
    int max2 = INT_MIN;

    printf("Enter elements of array: \n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Array: [");
    for (int i = 0; i < n; i++) {
        printf(" %d ", arr[i]);
    }
    printf("]");
    //      2   1   1   4   5
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max2 = max;
            max = arr[i];
        }
        else if (arr[i] < max && arr[i] > max2) {
            max2 = arr[i];
        }
    }

    if (max2 == -2147483647) {
        max2 = -1;
    }

    printf("\nLargest : %d \nSecond Largest : %d", max, max2);
}
