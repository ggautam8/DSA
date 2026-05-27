#include <math.h>
#include<stdio.h>

int main() {
    int n, count = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            printf("false");
        }
        else {
            count++;
        }
    }
    if (count > 0) {
        printf("true");
    }
}