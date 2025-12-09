#include <stdio.h>


int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    printf("Lowercase string: ");

    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c", tolower(str[i]));   
    }

    return 0;
}
