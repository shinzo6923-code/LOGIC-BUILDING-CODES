#include <stdio.h>

int main() {
    int a, b, i, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for (i = (a > b ? a : b); ; i++) {
        if (i % a == 0 && i % b == 0) {
            lcm = i;
            break; 
        }
    }

    printf("LCM of %d and %d is %d\n", a, b, lcm);

    return 0;
}
