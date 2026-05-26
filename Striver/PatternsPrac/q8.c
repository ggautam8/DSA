#include<stdio.h>

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);
    int m = n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int k = (2 * m) - 1; k > 0; k = k - 1) {
            printf("*");
        }
        m--;
        if (m == 0) {
            break;
        }

        printf("\n");
    }
}