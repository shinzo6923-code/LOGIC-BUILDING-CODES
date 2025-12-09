

#include <stdio.h>

int main() {
    int a[100], size, i;
    int max, min;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for(i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
    // Initialize max and min with the first element
    max = min = a[0];

    // Traverse array to find max and min
    for(i = 1; i < size; i++) {
        if(a[i] > max)
            max = a[i];
        if(a[i] < min)
            min = a[i];
    }

    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    return 0;
}