// SWITCH CASE

#include <stdio.h>

int main() {
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Find remainder when divided by 2
    result = num % 2;

    // Use switch to check
    switch (result) {
        case 0:
            printf("%d is even.\n", num);
            break;
        case 1:
            printf("%d is odd.\n", num);
            break;
        default:
            printf("Invalid input.\n");
    }

    return 0;
}