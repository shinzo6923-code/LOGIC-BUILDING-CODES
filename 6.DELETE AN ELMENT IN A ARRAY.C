#include <stdio.h>

int main() {
    int arr[100], size, pos, i;

    // Input array size
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter the elements of the array:\n");
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Position to delete
    printf("Enter the position to delete (0 to %d): ", size - 1);
    scanf("%d", &pos);

    // Validate position
    if(pos < 0 || pos >= size) {
        printf("Invalid position!\n");
    } else {
        // Shift elements to the left
        for(i = pos; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }

        // Decrease size
        size--;

        // Display updated array
        printf("Array after deletion:\n");
        for(i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}