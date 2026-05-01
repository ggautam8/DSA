#include<stdio.h>

int main() {
    int x = 10;
    int *p = &x;
    *p = 20;

    printf("New value : ");
    scanf("%d", &*p);
    printf("%d", x);

}