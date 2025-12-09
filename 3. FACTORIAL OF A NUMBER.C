#include <stdio.h>

int main()
{
    int x, i, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &x);

    for (i = 1; i <= x; i++)
    {
        factorial *= i;   
    }

    printf("Factorial of %d is %d\n", x, factorial);

    return 0;
}