#include <stdio.h>

int main() {
    int a, b, i, hcf = 1;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Loop until both limits are reached
    for (i = 1; i <= a || i <= b; i++) {
        if (i <= a && i <= b) {   // ensure i does not exceed either number
            if (a % i == 0 && b % i == 0) {
                hcf = i;          
            }
        }
    }

    printf("HCF of %d and %d is %d\n", a, b, hcf);

    return 0;
}
