#include<stdio.h>
#include <string.h>

void checkPalindrome(char str[], int count, int i) {

    if (i == strlen(str)) {
        return;
    }

    if (str[i] == str[strlen(str) - i - 1]) {
        count++;
        if (count == strlen(str)) {
            printf("true");
        }

    }
    checkPalindrome(str, count, ++i);
}

int main() {
    char str[50];

    printf("Enter any string: ");
    scanf("%s", str);

    int len = strlen(str);      // 4

    checkPalindrome(str, 0, 0);

    /*for (int i = 0; i < len; i++) {
        if (str[i] == str[len - i - 1]) {
            count++;
        }
        else {
            printf("false");
            return 0;
        }
    }*/

}
