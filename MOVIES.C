#include <stdio.h>

int main() {
    int choice;

    printf(" MOVIE RECOMMENDATION SYSTEM \n");
    printf("Select a genre:\n");
    printf("1. Action\n");
    printf("2. Romance\n");
    printf("3. Comedy\n");
    printf("4. Horror\n");
    printf("5. Sci-Fi\n");
    printf("6. Exit\n");

    printf("\nEnter your choice (1-6): ");
    scanf("%d", &choice);

    printf("\n RECOMMENDED MOVIES \n");

    switch (choice) {
        case 1:
            printf("Action Movies:\n");
            printf("1. Mad Max: Fury Road\n");
            printf("2. John Wick\n");
            printf("3. The Dark Knight\n");
            break;

        case 2:
            printf("Romance Movies:\n");
            printf("1. The Notebook\n");
            printf("2. La La Land\n");
            printf("3. A Walk to Remember\n");
            break;

        case 3:
            printf("Comedy Movies:\n");
            printf("1. Jumanji\n");
            printf("2. 21 Jump Street\n");
            printf("3. The Mask\n");
            break;

        case 4:
            printf("Horror Movies:\n");
            printf("1. The Conjuring\n");
            printf("2. Insidious\n");
            printf("3. It\n");
            break;

        case 5:
            printf("Sci-Fi Movies:\n");
            printf("1. Interstellar\n");
            printf("2. Inception\n");
            printf("3. The Matrix\n");
            break;

        case 6:
            printf("Exiting program...\n");
            return 0;

        default:
            printf("Invalid choice! Please run the program again.\n");
    }

    return 0;
}
