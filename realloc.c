#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n ;
    printf("enter the value ");
scanf("%d",&n);

    
    ptr = (int*) malloc(n * sizeof(int));

    
    
    for(int i = 0; i < n; i++)
    {
        ptr[i] = i + 1;
    }

    
    printf("Initial array values:\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    
    int newSize ;
    printf("enter the value ");
scanf("%d",&newSize);
    ptr = (int*) realloc(ptr, newSize * sizeof(int));

    

    
    for(int i = n; i < newSize; i++)
    {
        ptr[i] = (i + 1);
    }

    
    printf("Array after realloc:\n");
    for(int i = 0; i < newSize; i++)
    {
        printf("%d ", ptr[i]);
    }

    
    free(ptr);

    return 0;
}
