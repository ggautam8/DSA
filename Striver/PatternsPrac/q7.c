#include<stdio.h>

int main() {
    int n;
    int j = 1;
    int m = 1;

    printf("Enter n:");
    scanf("%d", &n);

    for (int i = n; i > 0; i--){
        for (j = 1; j <= i; j++) {
            printf("  ");
        }
        for (int k = 1; k <= (2 * m) - 1; k++) {
            printf(" *");
        }
        m++;
        if (m > n) {
            break;
        }
        printf("\n");
    }
}