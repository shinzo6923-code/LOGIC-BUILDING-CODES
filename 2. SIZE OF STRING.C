// wap to count the size of string using inbuild function and without inbuild function
#include <stdio.h>
#include<string.h>

int main (){
    char str[50];
    int count=0;

    printf("Enter any String:");
    fgets(str,sizeof(str),stdin);
    puts(str);

    int n =strlen(str);
    for(int i=0;str[i]!='\0';i++){
        count++;
    }

    printf("The Size of String: %d\n",count);

    printf("The Length of String: %d",n);
    
    return 0;
}