#include<stdio.h>
int main(){
    int x;
    printf("enter a number: ");
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("The number is even");
    }
    else
    {
        printf("the number is odd");
    }
    return 0;
}
