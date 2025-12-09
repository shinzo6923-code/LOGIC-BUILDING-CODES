#include <stdio.h>

int main() {
    int arr[100];   // Array created
    int size, i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nThe array elements are:\n");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}



