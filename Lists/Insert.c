#include<stdio.h>

void insert(int arr[], int *size, int pos, int value) {
    arr[pos] = value;
    printf("arr[%d] : %d", pos, arr[pos]);
}

int main() {
    int maxSize = 100, arr[maxSize] = {}, pos = 0, value = 0;

    printf("Enter value to be inserted : ");
    scanf(" %d", &value);

    printf("Enter position for this value : ");
    scanf(" %d", &pos);

    insert(arr, &maxSize, pos, value);
    return 0;
}