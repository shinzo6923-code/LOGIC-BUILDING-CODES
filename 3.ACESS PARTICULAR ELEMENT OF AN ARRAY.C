#include <stdio.h>

int main() {
    int arr[100], size, index, i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the index of the element you want to access: ");
    scanf("%d", &index);

    if(index >= 0 && index < size) {
        printf("Element at index %d is: %d\n", index, arr[index]);
    } else {
        printf("Invalid index! Index should be between 0 and %d\n", size - 1);
    }

    return 0;
}
