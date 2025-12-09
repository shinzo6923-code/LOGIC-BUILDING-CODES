

#include<stdio.h>
int main()
{
    int x,i;

    printf("enter a number: ");
    scanf("%d",&x);

    for(i=1;i<=10;i++)
{
    printf("%d\n",x*i);
}
    return 0; 
}