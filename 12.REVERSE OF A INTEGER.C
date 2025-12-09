#include <stdio.h>

int main() {
    int n, reverse = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;            
        reverse = reverse * 10 + remainder; // add digit to reverse
        n = n / 10;                    // remove last digit
    }

    printf("Reversed number = %d\n", reverse);

    return 0;
}
