#include<stdio.h>

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);


    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for (int k = 2 * (n - i); k >= 0; k--) {
            printf(" ");
        }

        for (int l = i; l > 0; l--) {
            printf("%d", l);
        }

        printf("\n");
    }
}