#include <stdio.h>

int main() {
    int number, reversedNumber = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &number);

      
    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }
    
    if (number== reversedNumber) {
        printf("%d is a palindrome.\n", number);
    }
    else {
        printf("%d is not a palindrome.\n", number);
    }

    return 0;
}
