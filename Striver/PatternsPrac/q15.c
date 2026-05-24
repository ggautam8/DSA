#include<stdio.h>

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = n; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%c", (j + 64));
        }
        printf("\n");
    }
}