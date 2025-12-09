#include<stdio.h>

int main() {
    int input;
    int sum, eSum, oSum;

    sum = eSum = oSum = 0; 

    printf("Enter an integer (-1 to stop): ");
    scanf("%d", &input);

    while (input != -1) {   
        sum += input;      

        switch (input % 2) {  
            case 0:
                eSum += input; 
                break;
            case 1:
                oSum += input; 
        }

       
        printf("Enter next number (-1 to stop): ");
        scanf("%d", &input);
    }

    printf("\nsum = %d\noddSum = %d\nevenSum = %d\n", sum, oSum, eSum);
    return 0;
}