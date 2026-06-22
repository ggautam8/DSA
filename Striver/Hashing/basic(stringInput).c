#include<stdio.h>
#include<string.h>

int main() {
    char str[50];
    int max = 0;

    printf("Enter any string: ");
    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] > max) {
            max = str[i];
        }
    }
    int hash[max + 1] = {};

    for (int i = 0; i < strlen(str); i++) {
        hash[str[i]] = hash[str[i]] + 1;
    }

    int m;
    char let;

    printf("Enter number of queries: ");
    scanf("%d", &m);

    printf("Enter queries: \n");

    while (m-- != 0) {
        printf("letter : ");
        scanf(" %c", &let);

        printf("frequency: %d\n", hash[let]);
    }

}