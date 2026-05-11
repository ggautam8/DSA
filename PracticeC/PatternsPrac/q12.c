#include<stdio.h>

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int m = n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for (int k = 2 * (m - 1); k >= 0; k--) {
            printf(" ");
        }
        m--;

        for (int l = i; l > 0; l--) {
            printf("%d", l);
        }

        if (m == 0) {
            break;
        }
        printf("\n");
    }
}