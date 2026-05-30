#include<stdio.h>

int main() {
    int rev = 0, rem = 0, n;

    printf("Enter n: ");
    scanf("%d", &n);

    int temp = n;

    while (n > 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if (temp == rev) {
        printf("True");
    }
    else {
        printf("False");
    }
}