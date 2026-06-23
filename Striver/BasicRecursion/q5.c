#include<stdio.h>

int calcSum(int n, int i, int sum) {

    if (i > n) {
        return sum;
    }

    sum = sum + i;

    calcSum(n, ++i, sum);
}

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int s = calcSum(n, 1, 0);

    printf("sum : %d", s);

}