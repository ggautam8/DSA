#include<stdio.h>

int main() {
    int n = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
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

    int hash[13] = {};

    for (int i = 0; i < n; i++) {
        hash[arr[i]] = hash[arr[i]] + 1;
        printf("%d", i);
    }

    int m, num;

    printf("\nEnter number of queries: ");
    scanf("%d", &m);

    printf("Enter queries: \n");

    while (m-- != 0) {
        scanf("%d", &num);
        printf("%d\n", hash[num]);
    }
}