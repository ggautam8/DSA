#include<stdio.h>

int main() {
    int n, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements of array: \n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter target: ");
    scanf("%d", &k);

    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
            printf("Index: %d", i);
            return 0;
        }
    }
    printf("\n -1");
}
