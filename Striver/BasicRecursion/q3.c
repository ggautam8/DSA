#include<stdio.h>

void printNum(int n,int count) {

    if (count > n) {
        return;
    }

    printf("%d", count);
    printNum(n, ++count);
}

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printNum(n, 1);
}