#include<stdio.h>

int calcFibo(int n, int n3, int n1, int i, int n2) {

    if ( i == n) {
        return n3;
    }

    n3 = n1 + n2;
    n1 = n2;
    n2 = n3;

    calcFibo(n, n3, n1, ++i, n2 );
}

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int fib = calcFibo(n, 0, 0, 2, 1);

    printf("F(%d) : %d", n, fib);

    /*for (int i = 2; i <= n; i++) {
        int n3 = n1 + n2;
        printf(" %d", n3);
        n1 = n2;
        n2 = n3;
    }*/      // 0 1 1 2 3 5 8 13
}