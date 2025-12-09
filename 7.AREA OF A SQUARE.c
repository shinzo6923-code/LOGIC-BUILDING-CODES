#include <stdio.h>

int main() {
    float side, area;

    printf("Enter the side of the square: ");
    scanf("%f", &side);

    area = side * side;   // formula: area = side²

    printf("Area of the square = %f\n", area);

    return 0;
}
