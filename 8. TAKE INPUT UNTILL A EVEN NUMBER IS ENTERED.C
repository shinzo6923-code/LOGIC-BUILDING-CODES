#include<stdio.h>
int main()
{
    int x;

    for(;;)
    {
        printf("enter a number :");
        scanf("%d",&x);

        if(x%2==0)
        break;
    }

    return 0;
}