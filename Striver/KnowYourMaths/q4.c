#include<stdio.h>
#include<math.h>

int main() {
    int n1, n2, gcd = 0;

    printf("Enter n1: ");
    scanf("%d", &n1);       //12

    printf("Enter n2: ");
    scanf("%d", &n2);       //8

    if (n2 > n1) {
        n1 = n1 + n2;   // 30 = 10 + 20
        n2 = n1 - n2;   // 10 = 30 - 20
        n1 = n1 - n2;   // 20 = 30 - 10
    }

    for (int i = 1; i <= n1 / 2; i++) {
        if (n1 % i == 0) {
            if (n2 % i == 0) {
                gcd = i;
            }
        }
    }

    printf("GCD of %d & %d is %d", n2, n1, gcd);


}