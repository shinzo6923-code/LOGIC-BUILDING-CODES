#include <stdio.h>

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before Swapping: a = %d, b = %d\n", a, b);

    swap(&a, &b);   // pass addresses

    printf("After Swapping:  a = %d, b = %d\n", a, b);

    return 0;
}
