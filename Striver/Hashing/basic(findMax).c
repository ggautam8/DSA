#include<stdio.h>

int main() {
    int n, max = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n] = {};
    printf("Enter elements of array:\n");

    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);

        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Entered array: [");

    for (int i = 0; i < n; i++) {
        printf(" %d", arr[i]);
    }
    printf("]");

    int hash[max + 1] = {};

    for (int i = 0; i < n; i++) {
        hash[arr[i]] = hash[arr[i]] + 1;
    }

    int m = 0, num;
    printf("\nEnter number of queries: ");
    scanf("%d", &m);

    printf("Enter query to search: \n");
    while (m-- != 0) {
        printf("Number : ");
        scanf("%d", &num);

        if (num < max + 1) {
            printf("Frequency: %d\n\n", hash[num]);
        }
        else {
            printf("Frequency: 0");
        }
    }


}