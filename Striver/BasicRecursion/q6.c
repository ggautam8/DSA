#include<stdio.h>

int calcFactorial(int n, int fact) {

    if (n == 1) {
        return 1;
    }
    fact = n * calcFactorial(n - 1, fact);
    return fact;
}

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Factorial of 0 is 1");
        return 0;
    }

    int fact = calcFactorial(n, 0);

    printf("Factorial of %d : %d", n, fact);
}