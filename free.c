#include<stdio.h>
#include<stdlib.h>

int main()
{
    int*ptr;
    ptr=(float*)calloc(3,sizeof(float));

    ptr[0]=1;
    ptr[1]=1;
    ptr[2]=1;

    for(int i=0;i<3;i++)
    {
        printf("%f\n",ptr[i]);
    }
    free(ptr);
    return 0;
}