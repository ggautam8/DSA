#include<stdio.h>

int main() {
    int n;
    int m = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = n; i > 0; i--) {
        for (int j = 1; j < i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= (2 * m) - 1; k++) {
            printf("*");
        }
        m++;
        if (m >= n) {
            break;
        }
        printf("\n");
    }
    printf("\n");
    int o = n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int k = (2 * o) - 1; k > 0; k--) {
            printf("*");
        }
        o--;
        if (o == 0) {
            break;
        }
        printf("\n");
    }

}