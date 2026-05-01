#include<stdio.h>

void delete(int arr[], int *size, int pos){

}

int main() {
    int size = 10, arr[size];
    int pos;

    printf("Enter elements of array : \n");

    for (int i = 0; i < size; i++) {
        printf("arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter position to delete : ");
    scanf("%d", &pos);

    delete(arr, &size, pos);
}