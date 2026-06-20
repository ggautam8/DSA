#include<stdio.h>

void printName(char name[50] , int count, int n  ) {
    if (count == n) {
        return;
    }
    printf("%s ", name);

    printName(name, count + 1, n);
}

int main() {
    int n;
    char name[50];

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter the word to print %d times: ", n);
    scanf("%s", name);

    printName(name, 0 , n);
}

