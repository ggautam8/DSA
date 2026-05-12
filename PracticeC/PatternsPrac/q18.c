#include<stdio.h>

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = n - i; j <= n; j++) {
            printf("%c ", (j+ 64));
        }
        printf("\n");
    }
}