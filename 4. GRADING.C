#include<stdio.h>

int main(){
    char as;
    printf("Enter an alphabet: ");
    scanf("%c", &as);

    if (as == 'A') {
        printf("Excellent");
    }
    else if (as == 'B') {
        printf("Very Good");
    }
    else if (as == 'C') {
        printf("Good");
    }
    else {
        printf("Incorrect input");
    }

    printf("\nThis is your result");
    return 0;
}
