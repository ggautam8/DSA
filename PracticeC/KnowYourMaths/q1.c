#include<stdio.h>

int main() {
    int n, count = 0;

    printf("Enter n: ");
    scanf("%d", &n);
    int temp = n;

    while (n > 0) {
        n = n / 10;
        count++;
    }

    printf("Number of digits in %d: %d", temp, count);
}