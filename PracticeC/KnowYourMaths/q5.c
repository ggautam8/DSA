#include <math.h>
#include<stdio.h>

int main() {
    int n, rem = 0, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);
    int temp = n;

    while (n > 0) {
        rem = n % 10;
        sum = sum + pow(rem, 3);
        n = n / 10;
    }

    if (sum == temp) {
        printf("true");
    }
    else {
        printf("false");
    }
}