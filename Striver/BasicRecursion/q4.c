#include<stdio.h>

void printNto0(int n){
    if (n == 0) {
        return;
    }

    printf("%d ", n);

    printNto0(--n);
}

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printNto0(n);
}