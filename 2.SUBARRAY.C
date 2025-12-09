

#include <stdio.h>

int main() {
    int arr[100], even[100], odd[100];
    int size, i, e = 0, o = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Separate even and odd elements
    for(i = 0; i < size; i++) {
        if(arr[i] % 2 == 0) {
            even[e++] = arr[i];   // Store even elements
        } else {
            odd[o++] = arr[i];    // Store odd elements
        }
    }

    // Print even subarray
    printf("\nEven Subarray:\n");
    for(i = 0; i < e; i++) {
        printf("%d ", even[i]);
    }

    // Print odd subarray
    printf("\nOdd Subarray:\n");
    for(i = 0; i < o; i++) {
        printf("%d ", odd[i]);
    }

    printf("\n");
    return 0;
}
