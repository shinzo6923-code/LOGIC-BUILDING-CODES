#include<stdio.h>
int main()
{
    int x,y,temp;
    printf("enter two numbers");
    scanf("%d,%d",&x,&y);

    temp=x;
    printf("temp=%d and x=%d",temp,x);
    x=y;
    y=temp;
printf("value after swap x=%d and y=%d",x,y);

return 0;
}