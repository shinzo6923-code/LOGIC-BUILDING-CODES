#include <stdio.h>

int main() {
    int arr[100], size, pos, value, i;

    // Input array size
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input array elements
    printf("Enter the elements of the array:\n");
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input position and value to insert
    printf("Enter the position to insert (0 to %d): ", size);
    scanf("%d", &pos);

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    // Validate position
    if(pos < 0 || pos > size) {
        printf("Invalid position!\n");
    } else {
        // Shift elements to the right
        for(i = size; i > pos; i--) {
            arr[i] = arr[i - 1];
        }

        // Insert value
        arr[pos] = value;

        
        size++;

        // Display updated array
        printf("Array after insertion:\n");
        for(i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
