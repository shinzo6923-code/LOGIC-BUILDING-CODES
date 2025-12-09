

#include<stdio.h>
int main()
{
    char arr[20];
    printf("enter name ");
    fgets(arr,sizeof(arr),stdin);
    puts(arr);
}