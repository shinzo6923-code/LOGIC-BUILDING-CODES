#include<stdio.h>
int main() { 
    int n=0, cnt = 0, i =0;
    int cur[]= {500,200,100,50,20,10,5,2,1};
    scanf("%d", &n);

    while(n>0)
    {
        cnt = n/cur[i];
        if(cnt>0)
        printf("%d notes 0 + rs %d ", cnt, cur[i]);
        n = n%cur[i];
        i++;
    }


    return 0;
}