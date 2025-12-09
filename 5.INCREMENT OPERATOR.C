#include<stdio.h>
int main(){
    int x,y ;
    int n =10;
    x=n++;
    y=++n;
    printf("x=%d \n y=%d \n",x,y);
    return 0;
}